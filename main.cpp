#include <iostream>
#include <string>
#include "Operations.h"

void line();

int main() {

    Operations op;
    std::string slc;

    op.setN1(12);
    op.setN2(6);

    std::cout << "Number 1: [" << op.getN1() << "]\nNumber 2: ["<< op.getN2()<<"]"<<std::endl;
    line();


    std::cout << "\t\tSELECT YOUR OPERATION" << std::endl;
    std::cout << "\t\t....................." << std::endl;
    std::cout <<"At the moment we have 4 available operations ()." << std::endl;
    std::cout <<"1)Addition (+).\n2)Subtraction (-).\n3)Moltiplication (*).\n4)Division (/)."<<std::endl;
    line();

    std::cout << "AVAILABLE SELECTIONS [+][-][*][/]: \t";
    std::cin >> slc;
    line();

    if(slc == "+")
        std::cout <<op.addition(op.getN1(),op.getN2()) << std::endl;
    if(slc == "-")
        std::cout << op.subtraction(op.getN1(),op.getN2()) << std::endl;
    if(slc == "*")
        std::cout <<  op.moltiplication(op.getN1(),op.getN2()) << std::endl;
    if(slc == "/")
        std::cout <<  op.division(op.getN1(),op.getN2()) << std::endl;


    return 0;
}



void line(){
    std::cout << std::endl;
}