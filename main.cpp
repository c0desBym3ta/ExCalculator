#include <iostream>
#include <string>

float addition(float n1, float n2);
float subtraction(float n1, float n2);
float moltiplication(float n1, float n2);
float division(float n1, float n2);
void line();

int main() {
    float num1, num2;
    std::string op;
    std::cout << "Insert first number: ";
    std::cin >> num1;
    std::cout << "Insert second number: ";
    std::cin >> num2;
    line();


    std::cout << "\t\tSELECT SYMBOL of OPERATION" << std::endl;
    std::cout << "\t\t....................." << std::endl;
    std::cout <<"At the moment we have 4 available operations ()." << std::endl;
    std::cout <<"1)Addition (+).\n2)Subtraction (-).\n3)Moltiplication (*).\n4)Division (/)."<<std::endl;
    line();

    std::cout << "SELECTION: \t";
    std::cin >> op;
    line();

    if(op == "+")
        std::cout << "Addition result is: " << addition(num1,num2) << std::endl;
    else if(op == "-")
        std::cout << "Subtraction result is : " << subtraction(num1,num2) << std::endl;
    else if (op == "*")
        std::cout << "Moltiplication result is : " << moltiplication(num1,num2) << std::endl;
    else if(op == "/")
        std::cout << "Divistion result is: " << division(num1,num2) << std::endl;

    return 0;
}


float addition(float n1, float n2){
    return n1+n2;
}

float subtraction(float n1, float n2){
    return n1-n2;
}

float moltiplication(float n1, float n2){
    return n1*n2;
}

float division(float n1, float n2){
    return n1/n2;
}

void line(){
    std::cout << std::endl;
}