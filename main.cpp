#include <QApplication>
#include <QWidget>

int main(int argc, char *argv[])
{
    QApplication prog(argc, argv);
    QWidget window;
       window.resize(320, 240);
       window.show();
       window.setWindowTitle(QApplication::translate("toplevel", "GROOOOOOOOOOOOOOSSE PUTE"));
    return prog.exec();
}
