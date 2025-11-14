#pragma once
#include "UIFactory.h"
#include "windowsToolkit.h"
#include <memory>

class windowsFactory : public UIFactory {
    public:
        std::unique_ptr<button> createButton() override {
            return std::make_unique<windowsButton>();
        }
        std::unique_ptr<checkBox> createCheckbox() override {
            return std::make_unique<windowsCheckBox>();
        }
        std::unique_ptr<textBox> createTextBox() override {
            return std::make_unique<windowsTextBox>();
        }
};