#include <iostream>
#include <string>
#include "Operations.h"


int main() {

    Operations op;
    std::string slc;

    std::cout << "Number 1: [" << op.getN1() << "]\nNumber 2: ["<< op.getN2()<<"]"<<std::endl;
    line();


    std::cout << "\t\tSELECT YOUR OPERATION" << std::endl;
    std::cout << "\t\t....................." << std::endl;
    std::cout <<"At the moment we have 4 available operations ()." << std::endl;
    std::cout <<"1)Addition (+).\n2)Subtraction (-).\n3)Moltiplication (*).\n4)Division (/)."<<std::endl;
    line();

    choice();
    line();


    return 0;
}



void line(){
    std::cout << std::endl;
}
