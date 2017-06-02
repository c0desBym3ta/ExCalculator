//
// Created by root on 6/2/17.
//

#ifndef EXCALCULATOR_INFO_H
#define EXCALCULATOR_INFO_H

#include <string>
#include <iostream>
#include "Operations.h"

class Info {
    std::string choice(){
        std::string slc;
        Operations op;
        std::cout << "AVAILABLE SELECTIONS [+][-][*][/]: \t";
        std::cin >> slc;
        line();

        if(slc == "+")
            std::cout <<op.addition(op.getN1(),op.getN2()) << std::endl;
        else if(slc == "-")
            std::cout << op.subtraction(op.getN1(),op.getN2()) << std::endl;
        else if(slc == "*")
            std::cout <<  op.moltiplication(op.getN1(),op.getN2()) << std::endl;
        else if(slc == "/")
            std::cout <<  op.division(op.getN1(),op.getN2()) << std::endl;
        else
            std::cout << "Error 41." << std::endl;

        return slc;

    }
};


#endif //EXCALCULATOR_INFO_H
