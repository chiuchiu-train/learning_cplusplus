#include <iostream>
#include <string> // need this to use strings, otherwise can only use chars
#include <algorithm> // to use count function

int main(){
    std::string DNA; // initialize a string
    std::cout << "Input a DNA string: "; // ask for user input
    std::cin >> DNA; // assign user input to the variable DNA

    // Initialize counts
    int A = 0;
    int C = 0;
    int G = 0;
    int T = 0;

    // Iterate through DNA sequence and increment counts
    for(auto i:DNA){
        if(i=='A'){
            A += 1;
        }
        if(i=='C'){
            C += 1;
        }
        if(i=='G'){
            G += 1;
        }
        if(i=='T'){
            T += 1;
        }
    }

    // Print out counts
    std::cout << "A: " << A << std::endl;
    std::cout << "C: " << C << std::endl;
    std::cout << "G: " << G << std::endl;
    std::cout << "T: " << T << std::endl;

    return 0;
}

/*
// Alternatively, use count function
int main(){
    std::string DNA; // initialize a string
    std::cout << "Input a DNA string: "; // ask for user input
    std::cin >> DNA; // assign user input to the variable DNA

    std::string::iterator begin = DNA.begin(), end = DNA.end();

    // Do the counting
    int A = std::count(begin, end, 'A');
    int C = std::count(begin, end, 'C');
    int G = std::count(begin, end, 'G');
    int T = std::count(begin, end, 'T');

    // Print out counts
    std::cout << "A: " << A << std::endl;
    std::cout << "C: " << C << std::endl;
    std::cout << "G: " << G << std::endl;
    std::cout << "T: " << T << std::endl;

    return 0;
}
*/