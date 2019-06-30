#include "ap.h"
#include"login.h"
#include "register_ui.h"
#include <QApplication>
#include "addnewapartment_ui.h"
#include "headers.h"
#include "main_ui.h"
#include "showbuilding_widget.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Main_UI w;
    //fameless
    w.setWindowFlags(Qt::Window | Qt::FramelessWindowHint);
    /////////////////

    //set the size of windows!its need to change!
    QSize availableSize = qApp->desktop()->availableGeometry().size();
        int width = availableSize.width();
        int height = availableSize.height();
        //qDebug() << "Available dimensions " << width << "x" << height;
        width *= 0.73; // 90% of the screen size
        height *= 0.9; // 90% of the screen size
        //qDebug() << "Computed dimensions " << width << "x" << height;
        QSize newSize( width, height );

        w.setGeometry(
            QStyle::alignedRect(
                Qt::LeftToRight,
                Qt::AlignCenter,
                newSize,
                qApp->desktop()->availableGeometry()
            )
        );


    w.show();

    return a.exec();
}
