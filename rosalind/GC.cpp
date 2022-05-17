#include <iostream>
#include <string>

int main(){
    std::string accession_num;
    std::cout << "Paste fasta input: ";
    std::getline (std::cin, accession_num);
    std::cout << accession_num << std::endl;
}