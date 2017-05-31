//
// Created by root on 5/31/17.
//

#include "Operations.h"

Operations::Operations(float n1, float n2) : n1(n1), n2(n2) {

}

float Operations::addition(float n1, float n2) {
        std::cout << "Addition result is: ";
        return n1+n2;
}

float Operations::subtraction(float n1, float n2){
    std::cout << "Subtraction result is : ";
    return n1-n2;
}

float Operations::moltiplication(float n1, float n2){
    std::cout << "Moltiplication result is : ";
    return n1*n2;
}

float Operations::division(float n1, float n2){
    std::cout << "Divistion result is: ";
    return n1/n2;
}
