#pragma once
#include <iostream>
#include "pizzaBuilder.h"

class PepperoniPizzaBuilder : public PizzaBuilder {
    public:
        void setSize() override {
             pizza->setSize("Medium"); 
        }
        void setCrust() override {
            pizza->setCrust("Thin crust");
        }
        void addTopping() override {
            pizza->addTopping("Tomato");
            pizza->addTopping("Pepperoni");
        }

        void setExtraCheese() override {
            pizza->setExtraCheese(true);
        }

        void showPizzaDetails() override {
            std::cout<<"---- Pepperoni Pizza ----"<<std::endl;
            pizza->showPizza();
            std::cout<<"-------------------------"<<std::endl;
        }
};