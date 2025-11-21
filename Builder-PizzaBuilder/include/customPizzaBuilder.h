#pragma once
#include <iostream>
#include <string>
#include "pizzaBuilder.h"
class CustomPizzaBuilder : public PizzaBuilder {
    private:
        std::string customSize;
        std::string customCrust;
        bool customExtraCheese;
        std::vector<std::string> customToppings;
    public:
        void setCustomOptions(std::string sz, std::string c, std::vector<string> t, bool val){
            customSize = sz;
            customCrust = c;
            customExtraCheese = val;
            customToppings = t;
        }
        void setSize() override {
             pizza->setSize(customSize); 
        }
        void setCrust() override {
            pizza->setCrust(customCrust);
        }
        void addTopping() override {
            for(auto i : customToppings)
                pizza->addTopping(i);
        }

        void setExtraCheese() override {
            pizza->setExtraCheese(customExtraCheese);
        }

        void showPizzaDetails() override {
            std::cout<<"---- Custom Pizza ----"<<std::endl;
            pizza->showPizza();
            std::cout<<"-------------------------"<<std::endl;
        }
};