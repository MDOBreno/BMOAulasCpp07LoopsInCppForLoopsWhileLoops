//
//  main.cpp
//  BMOAulasCpp07LoopsInCppForLoopsWhileLoops
//
//  Created by Breno Medeiros on 28/06/20.
//  Copyright © 2020 ProgramasBMO. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    // insert code here...
    
    std::cout << "====================== FOR ======================\n";
    
        for (int i=0; i<5; i++) {
        std::cout << "Hello, World!\n";
    }
    
    std::cout << "----------------\n";
    
    int i=0;
    for (; i<5; ) {
        std::cout << "Hello, World!\n";
        i++;
    }
    
    std::cout << "----------------\n";
    
    /*int*/ i=0;
    bool condicao = true;
    for (; condicao; ) {
        std::cout << "Hello, World!\n";
        i++;
        if (!(i<5)) {
            condicao = false;
        }
    }
    
    std::cout << "----------------\n";
    
    /*int*/ i=0;
    for (; ; ) {
        std::cout << "Hello, World!\n";
        i++;
        if (!(i<5)) {
            break;
        }
    }
    
    std::cout << "====================== WHILE =====================\n";
    
    /*int*/ i=0;
    while (i<5) {
        std::cout << "Hello, World!\n";
        i++;
    }
    
    std::cout << "==================== DO WHILE ====================\n";
    
    /*int*/ i=0;
    do {
        std::cout << "Hello, World!\n";
        i++;
    } while (i<5);
    
    std::cout << "----------------\n";
    
    /*int*/ i=0;
    /*bool*/ condicao = true;
    while (condicao) {
        std::cout << "Hello, World!\n";
        i++;
        if (!(i<5)) {
            condicao = false; //Equivale a: break;
        }
    }
    
    return 0;
}
