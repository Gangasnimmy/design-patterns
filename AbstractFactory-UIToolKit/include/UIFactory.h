#pragma once
#include "UIToolkit.h"
#include <memory>

class UIFactory {
    public:
        virtual ~UIFactory() = default;
        virtual std::unique_ptr<checkBox> createCheckbox() = 0;
        virtual std::unique_ptr<button> createButton() = 0;
        virtual std::unique_ptr<textBox> createTextBox() = 0;
};

std::unique_ptr<UIFactory> getFactory(const std::string& str);
void buildUI(std::unique_ptr<UIFactory>& factory);


