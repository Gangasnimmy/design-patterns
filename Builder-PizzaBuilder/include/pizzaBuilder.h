#pragma once

#include<string>
#include"pizza.h"
using namespace std;

class PizzaBuilder{
    protected:
        Pizza* pizza;
    public:
        PizzaBuilder() { pizza = new Pizza(); }
        virtual ~PizzaBuilder() = default;

        virtual void setSize() = 0;
        virtual void setCrust() = 0;
        virtual void setExtraCheese() = 0;
        virtual void addTopping() = 0;
        virtual void showPizzaDetails() = 0;
        Pizza* getPizza() { return pizza; }
};

