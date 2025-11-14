#pragma once
#include "UIFactory.h"
#include "macToolkit.h"
#include <memory>

class macFactory : public UIFactory {
    public:
        std::unique_ptr<button> createButton() override {
            return std::make_unique<macButton>();
        }
        std::unique_ptr<checkBox> createCheckbox() override {
            return std::make_unique<macCheckBox>();
        }
        std::unique_ptr<textBox> createTextBox() override {
            return std::make_unique<macTextBox>();
        }
};