#include <QApplication>
#include <QLabel>
#include <QHBoxLayout>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
  
    QLabel *label = new QLabel
                ("<font size=\"40\" color=\"#407CB2\" face=\"Impact\"><b><i>Hello, World!</i></b>");
    label->setMargin(100);

    QPalette pal = QPalette();

    pal.setColor(QPalette::Window, QColor(198, 236, 217, 127));

    label->setAutoFillBackground(true);
    label->setPalette(pal);

    label->show();

    return a.exec();
}
