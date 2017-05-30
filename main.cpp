#include <iostream>
#include <string>

float addition(float n1, float n2);
float subtraction(float n1, float n2);
float moltiplication(float n1, float n2);
float division(float n1, float n2);
void line();

int main() {
    float num1 = 12, num2 = 6;
    std::string op;

    std::cout << "Number 1: [" << num1 << "]\nNumber 2: ["<<num2<<"]"<<std::endl;
    line();


    std::cout << "\t\tSELECT YOUR OPERATION" << std::endl;
    std::cout << "\t\t....................." << std::endl;
    std::cout <<"At the moment we have 4 available operations ()." << std::endl;
    std::cout <<"1)Addition (+).\n2)Subtraction (-).\n3)Moltiplication (*).\n4)Division (/)."<<std::endl;
    line();

    std::cout << "AVAILABLE SELECTIONS [+][-][*][/]: \t";
    std::cin >> op;
    line();

    if(op == "+")
        std::cout << addition(num1,num2);
    else if(op == "-")
        std::cout << subtraction(num1,num2);
    else if (op == "*")
        std::cout << moltiplication(num1,num2);
    else if(op == "/")
        std::cout << division(num1,num2);


    return 0;
}


float addition(float n1, float n2){
    std::cout << "Addition result is: ";
    return n1+n2;
}

float subtraction(float n1, float n2){
    std::cout << "Subtraction result is : ";
    return n1-n2;
}

float moltiplication(float n1, float n2){
    std::cout << "Moltiplication result is : ";
    return n1*n2;
}

float division(float n1, float n2){
    std::cout << "Divistion result is: ";
    return n1/n2;
}

void line(){
    std::cout << std::endl;
}