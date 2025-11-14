#pragma once
#include <iostream>
#include "UIToolkit.h"

class windowsButton : public button {
    public:
        void render() override {
            std::cout<<"Rendering windows button"<<std::endl;
        }
};

class windowsCheckBox : public checkBox {
    public:
        void render() override {
            std::cout<<"Rendering windows checkBox"<<std::endl;
        }
};

class windowsTextBox : public textBox {
    public:
        void render() override {
            std::cout<<"Rendering windows textBox"<<std::endl;
        }
};