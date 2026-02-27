#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_ButtonAdd_clicked();

    void on_ButtonSubtract_clicked();

    void on_ButtonMultiply_clicked();

    void on_ButtonDivide_clicked();

private:
    Ui::MainWindow *ui;
    void calculate(char op);
};
#endif // MAINWINDOW_H
