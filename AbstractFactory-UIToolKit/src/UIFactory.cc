#include "UIFactory.h"
#include "windowsFactory.h"
#include "macFactory.h"
#include <string>
#include <memory>

std::unique_ptr<UIFactory> getFactory(const std::string& str){
    if(str == "windows")
        return std::make_unique<windowsFactory>();
    if(str == "mac")
        return std::make_unique<macFactory>();

    return nullptr;
}

void buildUI(std::unique_ptr<UIFactory>& factory){
    std::unique_ptr<button> bt = factory->createButton();
    std::unique_ptr<checkBox> cb = factory->createCheckbox();
    std::unique_ptr<textBox> tb = factory->createTextBox();

    bt->render();
    cb->render();
    tb->render();
    
}