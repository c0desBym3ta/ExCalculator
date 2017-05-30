#include <iostream>
#include <string>

float addition(float n1, float n2);
float subtraction(float n1, float n2);
float moltiplication(float n1, float n2);
float division(float n1, float n2);
void line();

int main() {
    float num1, num2;
    std::cout << "Insert first number: ";
    std::cin >> num1;
    std::cout << "Insert second number: ";
    std::cin >> num2;
    line();

    std::cout << "Addition result: " << addition(num1,num2) << std::endl;
    std::cout << "Subtraction reslut: " << subtraction(num1,num2) << std::endl;
    std::cout << "Moltiplication result: " << moltiplication(num1,num2) << std::endl;
    std::cout << "Divistion result: " << division(num1, num2) << std::endl;
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