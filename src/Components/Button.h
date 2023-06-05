//
// Created by fernu on 29/05/23.
//

#ifndef ANTARES_LAND_SYSTEM_BUTTON_H
#define ANTARES_LAND_SYSTEM_BUTTON_H

#include <string>
#include <QPushButton>
#include <QWidget>
#include <QCursor>
#include <QString>

class Button : public QPushButton {
private:
    QString text;
public:
    Button(const std::string &text_button ="Rocket Name", QWidget *parent = nullptr);
};


#endif //ANTARES_LAND_SYSTEM_BUTTON_H
