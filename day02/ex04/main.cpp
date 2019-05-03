//
// Created by Aren Windham on 4/30/19.
//

#include "Fixed.hpp"
#include <iostream>
#include <cmath>
#include <string>

int precedence(char op) {
    switch (op) {
        case '+':
        case '-':
            return 1;
        case '*':
        case '/':
            return 2;
        default:
            return 0;
    }
}

#define apply(a, op, b) (a op b)

int main( int argc, char *argv[] ) {
    int done;
    std::string tokens[];

    if (argc != 2) {
        std::cout << "usage: ./eval_expr \"expression\"" << std::endl;
    }

    for (int i = 0; ; i++) {
        tokens[i] = strtok(argv[1], " \n");
        if (tokens[i] == nullptr) {
            break;
        }
    }


}