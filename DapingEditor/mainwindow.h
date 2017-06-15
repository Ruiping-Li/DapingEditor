#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class QLineEdit;
class QDialog;

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
       void newFile();   // 新建操作
       bool maybeSave(); // 判断是否需要保存
       bool save();      // 保存操作
       bool saveAs();    // 另存为操作
       bool saveFile(const QString &fileName); // 保存文件
       bool loadFile(const QString &fileName); // 加载文件
       typedef struct charactor		//用于存放每个字符或字出现次数
       {
           char key[3];
           int count;
           struct charactor *next;
       }Charactor;

       Charactor *head = NULL;
       char *str;
       char comm;
       char ch[3];
       Charactor *add(char *c, Charactor *head);
       void display(Charactor *p);

private slots:
       void on_actionXinjian_triggered();

       void on_actionDakai_triggered();

       void on_actionBaocun_triggered();

       void on_actionGuanbi_triggered();

       void on_actionTuichu_triggered();

       void showFindText();

       void on_actionChazhao_triggered();

private:
    Ui::MainWindow *ui;
    QLineEdit *findLineEdit;
    QDialog *findDlg;

    // 为真表示文件没有保存过，为假表示文件已经被保存过了
    bool isUntitled;

    // 保存当前文件的路径
    QString curFile;

};

#endif // MAINWINDOW_H
