#pragma once
#include <iostream>
#include "pizzaBuilder.h"

class MargheritaPizzaBuilder : public PizzaBuilder {
    public:
        void setSize() override {
             pizza->setSize("Medium"); 
        }
        void setCrust() override {
            pizza->setCrust("Thin crust");
        }
        void addTopping() override {
            pizza->addTopping("Tomato");
            pizza->addTopping("Basil");
        }

        void setExtraCheese() override {
            pizza->setExtraCheese(true);
        }

        void showPizzaDetails() override {
            std::cout<<"---- Margherita Pizza ----"<<std::endl;
            pizza->showPizza();
            std::cout<<"-------------------------"<<std::endl;
        }
};