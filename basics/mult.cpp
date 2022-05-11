#include <iostream>

int main(){
    int myInput; // declare an empty variable
    std::cout << "Enter an integer: " << std::endl; // input prompt
    std::cin >> myInput; // store the user's input in myInput
    int doubled = myInput * 2; // multiply by 2
    std::cout << "Doubled: " << doubled << std::endl;

    return 0;
}