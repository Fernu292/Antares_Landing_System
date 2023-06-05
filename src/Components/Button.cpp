//
// Created by fernu on 29/05/23.
//

#include "Button.h"

Button::Button(const std::string &text_button, QWidget *parent): QPushButton(parent) {
    this->text = QString::fromStdString(text_button);
    this->setText(this->text);
    this->setStyleSheet("Background-color:blue; color:white;");
    this->show();
}