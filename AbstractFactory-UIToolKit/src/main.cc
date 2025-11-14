#include <iostream>
#include <string>
#include <memory>
#include "UIFactory.h"

using namespace std; 

extern unique_ptr<UIFactory> getFactory(const string& str);
extern void buildUI(unique_ptr<UIFactory>& factory);

int main() {
    string os = "mac";
    unique_ptr<UIFactory> factory = getFactory(os);
    buildUI(factory);
    return 0;
}