//
//  main.cpp
//  Praha Zije Hudbou iOS
//
//  Created by Filip Cerny on 07/10/2018.
//  Copyright © 2018 BlindChameleonStudio. All rights reserved.
//

#include <iostream>
#include "hello_world_impl.hpp"

using namespace std;
using namespace prahazijehudbou;

int main(int argc, const char * argv[]) {
    HelloWorldImpl hw = HelloWorldImpl();
    string myString = hw.get_hello_world();
    cout << myString << "\n";
    return 0;
}
