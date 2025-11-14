#pragma once
#include <iostream>
#include "UIToolkit.h"

class macButton : public button {
    public:
        void render() override {
            std::cout<<"Rendering MAC button"<<std::endl;
        }
};

class macCheckBox : public checkBox {
    public:
        void render() override {
            std::cout<<"Rendering MAC checkBox"<<std::endl;
        }
};

class macTextBox : public textBox {
    public:
        void render() override {
            std::cout<<"Rendering MAC textBox"<<std::endl;
        }
};