#pragma once

#include "pizzaBuilder.h"

class PizzaDirector {
    public:
        Pizza* createPizza(PizzaBuilder& pb){
            pb.setCrust();
            pb.setExtraCheese();
            pb.setSize();
            pb.addTopping();
            return pb.getPizza();
        }
};