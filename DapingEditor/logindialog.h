#ifndef LOGINDIALOG_H
#define LOGINDIALOG_H

#include <QDialog>
#include <QLabel>


namespace Ui {
class LoginDialog;
}

class LoginDialog : public QDialog
{
    Q_OBJECT

public:
    explicit LoginDialog(QWidget *parent = 0);
    ~LoginDialog();



private slots:
    void on_label_2_linkActivated(const QString &link);

private:
    Ui::LoginDialog *ui;
};

#endif // LOGINDIALOG_H
