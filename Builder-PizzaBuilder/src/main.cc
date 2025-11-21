#include <iostream>
#include "pizzaDirector.h"
#include "pizzaBuilder.h"
#include "pepperoniPizzaBuilder.h"
#include "margheritaPizzaBuilder.h"
#include "customPizzaBuilder.h"
using namespace std;

int main(){
    PizzaDirector director;
    MargheritaPizzaBuilder mp;
    Pizza* mPizza = director.createPizza(mp);
    mp.showPizzaDetails();

    PepperoniPizzaBuilder pp;
    Pizza* pPizza = director.createPizza(pp);
    pp.showPizzaDetails();

    CustomPizzaBuilder cp;
    cp.setCustomOptions("small","Thin Crust",{"Paneer","Capsicum"},true);
    Pizza* cPizza = director.createPizza(cp);
    cp.showPizzaDetails();
    
    return 0;
}