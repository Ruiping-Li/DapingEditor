#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QPushButton>
#include <QFileDialog>
#include <QTextStream>
#include <QLineEdit>
#include <QDialog>
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define LEN sizeof(Charactor)
#include "logindialog.h"
#include "ui_logindialog.h"


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    // 初始化文件为未保存状态
    isUntitled = true;
    // 初始化文件名为"Untitled.txt"
    curFile = "Untitled.txt";
    // 初始化窗口标题为文件名
    setWindowTitle(curFile);

    findDlg = new QDialog(this);
    findDlg->setWindowTitle(tr("查找"));
    findLineEdit = new QLineEdit(findDlg);
    QPushButton *btn= new QPushButton("Next", findDlg);
    QVBoxLayout *layout= new QVBoxLayout(findDlg);
    layout->addWidget(findLineEdit);
    layout->addWidget(btn);
    connect(btn, SIGNAL(clicked()), this, SLOT(showFindText()));
}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::newFile()
{
    if (maybeSave()) {
        isUntitled = true;
        curFile = "Untitled.txt";
        setWindowTitle(curFile);
        ui->textEdit->clear();
        ui->textEdit->setVisible(true);
    }
}

bool MainWindow::maybeSave()
{
    // 如果文档被更改了
    if (ui->textEdit->document()->isModified()) {

        // 自定义一个警告对话框
        QMessageBox box;
        box.setWindowTitle("Warning");
        box.setIcon(QMessageBox::Warning);
        box.setText(curFile + " Save or not");
        QPushButton *yesBtn = box.addButton("Yes",
                        QMessageBox::YesRole);
        box.addButton("No)", QMessageBox::NoRole);
        QPushButton *cancelBut = box.addButton("Cancel",
                        QMessageBox::RejectRole);
        box.exec();
        if (box.clickedButton() == yesBtn)
            return save();
        else if (box.clickedButton() == cancelBut)
            return false;
    }

    // 如果文档没有被更改，则直接返回true
    return true;
}

bool MainWindow::save()
{
    if (isUntitled) {
        return saveAs();
    } else {
        return saveFile(curFile);
    }
}

bool MainWindow::saveAs()
{
    QString fileName = QFileDialog::getSaveFileName(this,
                                         "Save as",curFile);
    if (fileName.isEmpty()) return false;
    return saveFile(fileName);
}

bool MainWindow::saveFile(const QString &fileName)
{
    QFile file(fileName);

    if (!file.open(QFile::WriteOnly | QFile::Text))
    {
           return false;
    }

    QTextStream out(&file);
    // 鼠标指针变为等待状态
    QApplication::setOverrideCursor(Qt::WaitCursor);
    out << ui->textEdit->toPlainText();
    // 鼠标指针恢复原来的状态
    QApplication::restoreOverrideCursor();
    isUntitled = false;
    // 获得文件的标准路径
    curFile = QFileInfo(fileName).canonicalFilePath();
    setWindowTitle(curFile);
    return true;
}

bool MainWindow::loadFile(const QString &fileName)
{
    QFile file(fileName); // 新建QFile对象
    if (!file.open(QFile::ReadOnly | QFile::Text)) {
        QMessageBox::warning(this, tr("多文档编辑器t"),
                             tr("无法读取文件 %1:\n%2.")
                             .arg(fileName).arg(file.errorString()));
        return false; // 只读方式打开文件，出错则提示，并返回false
    }

    QTextStream in(&file); // 新建文本流对象
    QApplication::setOverrideCursor(Qt::WaitCursor); // 设置鼠标状态为等待状态
    ui->textEdit->setPlainText(in.readAll());  // 读取文件的全部文本内容，并添加到编辑器中
    QApplication::restoreOverrideCursor(); // 恢复鼠标状态

    // 设置当前文件
    curFile = QFileInfo(fileName).canonicalFilePath();
    setWindowTitle(curFile);
    return true;
}

MainWindow::Charactor *MainWindow::add(char *c, MainWindow::Charactor *head)
{
        int flag = 1;
        Charactor *p = head;
        if ((unsigned)*c < 161) { c++; *c = 0; c--; }	//判断是否为汉字
        while (p != NULL&&flag == 1)
        {
            if (strcmp(p->key, c) == 0)
                flag = 0;
            else
                p = p->next;
        }

        if (flag == 0)
            p->count++;
        else
        {
            p = head;

            head = (Charactor *)malloc(LEN);
            strcpy(head->key, c);
            head->count = 1;
            head->next = p;
        }
        return head;
}

void MainWindow::display(MainWindow::Charactor *p)
{
    Charactor n1, n2, n3;
        n1.count = 0;
        n2.count = 0;
        n3.count = 0;

        while (p != NULL)	//排名
        {
            if (p->count >= n1.count)
            {
                n3 = n2;
                n2 = n1;
                n1 = *p;
            }
            else if(p->count >= n2.count)
            {
                n3 = n2;
                n2 = *p;
            }
            else if (p->count >= n3.count)
            {
                n3 = *p;
            }
            p = p->next;
        }

        printf("\nThe result are:\n");
        printf("%s: %d\n", n1.key, n1.count);
        printf("%s: %d\n", n2.key, n2.count);
        printf("%s: %d\n", n3.key, n3.count);
}

void MainWindow::showFindText()
{
    QString quanwen = ui->textEdit->toPlainText();
    int ncount=quanwen.count();
    int i;
    //int n;
    //n=0;
    int x1,x2,x3;
    x1=x2=x3=0;
    QString qiansan="   ";
    for(i=0;i<ncount;i++)
    {
      bool b = quanwen.mid(i,1).contains(QRegExp("[\\x4e00-\\x9fa5]+"));
      char* ch;
      QByteArray ba = quanwen.mid(i,1).toLatin1();
      ch=ba.data();
      if(b||*ch>='a'&&*ch>'z'||*ch>='A'&&*ch>'Z')
      {
        //QString ceshi=("aaa");
        int times = quanwen.count(quanwen.mid(i,1));//统计个数
        if(times>=x1&&quanwen.mid(i,1)!=qiansan.mid(0,1))
        {
            x3=x2;x2=x1;x1=times;
            QString str_x1 = QString::number(x1, 10);
            QString str_x2 = QString::number(x2, 10);
            QString str_x3 = QString::number(x3, 10);
            //QString str_n = QString::number(times, 10);
            qiansan=qiansan.replace(2,1,qiansan.mid(1,1));
            qiansan=qiansan.replace(1,1,qiansan.mid(0,1));
            qiansan=qiansan.replace(0,1,quanwen.mid(i,1));
            ui->label->setText(qiansan.mid(0,1));
            ui->label_2->setText(qiansan.mid(1,1));
            ui->label_3->setText(qiansan.mid(2,1));
            ui->label_4->setText(str_x1);
            ui->label_5->setText(str_x2);
            ui->label_6->setText(str_x3);
            //QMessageBox::information(this, tr("x1"),qiansan.mid(0).arg(str));
            //QMessageBox::information(this, tr("quanwen"),quanwen.mid(0).arg(str));
        };
        if(times>=x2&&times<x1&&quanwen.mid(i,1)!=qiansan.mid(1,1))
        {
            x3=x2;x2=times;
            QString str_x1 = QString::number(x1, 10);
            QString str_x2 = QString::number(x2, 10);
            QString str_x3 = QString::number(x3, 10);
            qiansan=qiansan.replace(2,1,qiansan.mid(1,1));
            qiansan=qiansan.replace(1,1,quanwen.mid(i,1));
            ui->label->setText(qiansan.mid(0,1));
            ui->label_2->setText(qiansan.mid(1,1));
            ui->label_3->setText(qiansan.mid(2,1));
            ui->label_4->setText(str_x1);
            ui->label_5->setText(str_x2);
            ui->label_6->setText(str_x3);
            //QMessageBox::information(this, tr("x2"),qiansan.mid(0).arg(str));
        };
        if(times>=x3&&times<x2&&quanwen.mid(i,1)!=qiansan.mid(2,1))
        {
            x3=times;
            QString str_x1 = QString::number(x1, 10);
            QString str_x2 = QString::number(x2, 10);
            QString str_x3 = QString::number(x3, 10);
            qiansan=qiansan.replace(2,1,quanwen.mid(i,1));
            ui->label->setText(qiansan.mid(0,1));
            ui->label_2->setText(qiansan.mid(1,1));
            ui->label_3->setText(qiansan.mid(2,1));
            ui->label_4->setText(str_x1);
            ui->label_5->setText(str_x2);
            ui->label_6->setText(str_x3);
            //QMessageBox::information(this, tr("x3"),qiansan.mid(0).arg(str));
        };
       };
    };
    //QMessageBox::information(this, tr("qiansan"),qiansan.mid(0).arg(str));
    //QMessageBox::information(this, tr("quanwen"),quanwen.mid(0).arg(str));
}

void MainWindow::on_actionXinjian_triggered()
{
    newFile();
}

void MainWindow::on_actionDakai_triggered()
{
    QString fileName = QFileDialog::getOpenFileName(this);

             // 如果文件名不为空，则加载文件
             if (!fileName.isEmpty())
             {
                  loadFile(fileName);
                  ui->textEdit->setVisible(true);
             }
}

void MainWindow::on_actionBaocun_triggered()
{
    save();
}

void MainWindow::on_actionGuanbi_triggered()
{
    ui->textEdit->setVisible(false);
}

void MainWindow::on_actionTuichu_triggered()
{
        // 先执行关闭操作，再退出程序
        // qApp是指向应用程序的全局指针
        on_actionGuanbi_triggered();
        qApp->quit();
}

void MainWindow::on_actionChazhao_triggered()
{
    //findDlg->show();
    //LoginDialog *dlg = new LoginDialog(this);
        //dlg->show();

    showFindText();
}
