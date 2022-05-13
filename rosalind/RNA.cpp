#include <iostream>
#include <string>

int main(){
    std::string DNA; // initialize a string
    std::cout << "Input a DNA string: "; // ask for user input
    std::cin >> DNA; // assign user input to the variable DNA

    std::string RNA; // initialize RNA string

    // Iterate through the string
    for (auto i:DNA){
        if(i=='T'){
            RNA += 'U';
        }
        else{
            RNA += i;
        }
    }
    std::cout << "Transcribed: " << RNA << std::endl;

    return 0;
}