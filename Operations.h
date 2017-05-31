//
// Created by root on 5/31/17.
//

#ifndef EXCALCULATOR_OPERATIONS_H
#define EXCALCULATOR_OPERATIONS_H

#include <string>
#include <iostream>

class Operations {
public:
    Operations(float n1 = 12, float n2 = 6);
    float addition(float n1, float n2);
    float subtraction(float n1, float n2);
    float moltiplication(float n1, float n2);
    float division(float n1, float n2);

    float getN1() const {
        return n1;
    }

    void setN1(float n1) {
        Operations::n1 = n1;
    }

    float getN2() const {
        return n2;
    }

    void setN2(float n2) {
        Operations::n2 = n2;
    }

private:
    float n1, n2;

};


#endif //EXCALCULATOR_OPERATIONS_H
