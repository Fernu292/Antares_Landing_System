#include <QApplication>
#include <QMainWindow>
#include <QLabel>
#include <QPixmap>
#include <QImage>
#include <iostream>

#include "./src/Components/Button.h"

using std::cout;
using std::endl;

class App:public QMainWindow{
    Button *button1;
    QLabel *imageLabel;
public:
    App(){
        cout<<"Iniciando Sistema de Telemetria"<<endl;
        //this->InitialAnimation();
        this->button1 = new Button("Dummie 1", this);
        this->button1->resize(100, 50);
        this->resize(900, 700);
        this->setStyleSheet("Background-color: Black; color: white");
        this->showFullScreen();

    }

    void InitialAnimation() {
        this->setWindowTitle("Antares Landing System");
        this->imageLabel = new QLabel(this);
        QImage image;

        if(image.load("../src/img/qt_q-95_ml_resize_x6.png")){
            cout<<"Imagen Cargada correctamente"<<endl;
            this->imageLabel->setPixmap(QPixmap::fromImage(image));
            this->imageLabel->setGeometry(this->width()-50, (this->height()-80), 800, 300);
            this->imageLabel->setScaledContents(true);
            this->imageLabel->setAlignment(Qt::AlignHCenter|Qt::AlignVCenter);
            this->imageLabel->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
            this->imageLabel->show();

            cout<<"The width is: "<<this->imageLabel->width()<<endl;
            cout<<"The Height is: "<<this->imageLabel->height()<<endl;
            cout<<"The opacity is: "<<this->imageLabel->windowOpacity()<<endl;
        }else{
            cout<<"Hubo un problema al cargar la imagen"<<endl;
        }


    }
};


int main(int argc, char *argv[]) {
    QApplication a(argc, argv);
    App *app = new App();
    return QApplication::exec();
}
