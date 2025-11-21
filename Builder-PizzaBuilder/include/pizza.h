#pragma once
#include<iostream>
#include<string>
#include<vector>

class Pizza {
    private:
        std::string size;
        std::string crust;
        std::vector<std::string> toppings;
        bool extraCheese = false;
    public:
        void setSize(const std::string& sz) { size = sz; }
        void setCrust(const std::string& c) { crust = c; }
        void addTopping(const std::string& t) { toppings.push_back(t); }
        void setExtraCheese(bool val) { extraCheese = val; }
        void showPizza() const {
            std::cout << "Size: " << size << "\n";
            std::cout << "Crust: " << crust << "\n";
            std::cout << "Toppings: ";
            for (auto& t : toppings) std::cout << t << " ";
            std::cout << "\nExtra Cheese: " << (extraCheese ? "Yes" : "No") << "\n";
        }
};