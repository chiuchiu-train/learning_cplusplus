#include <iostream>
#include <map>
#include <string>

int main(){
    std::string DNA; // initialize a string
    std::cout << "Input a DNA string: "; // ask for user input
    std::cin >> DNA; // assign user input to the variable DNA

    // std::cout << DNA.length() << std::endl; // find length of DNA seq

    // Reverse the DNA string
    std::string reversed; // to store the reversed string
    for (int i=DNA.length()-1; i>=0; i--){ // reverse index DNA string
        reversed += DNA[i];
    }
    std::cout << "Reversed: " << reversed << std::endl;

    // Generate the reverse complement
    std::map <char, char> mp;
    mp['A'] = 'T';
    mp['C'] = 'G';
    mp['G'] = 'C';
    mp['T'] = 'A';

    std::string revc; // to store reverse complement
    for (auto i:reversed){
        revc += mp[i];
    }
    std::cout << "Reverse complement :" << revc << std::endl;

    return 0;
}