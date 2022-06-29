#include <iostream>
#include <fstream>
#include <string>

int main(){
    std::string filename = "fasta.fa"; // file handle
    std::ifstream infile; // initialize ifstream class
    infile.open(filename, std::ios::in);
    if(!infile.good()){
        std::cout << "File not opened" << std::endl;
    }
    while(!infile.eof()){ // while not at the end of the file
        std::string line;
        std::getline(infile, line); // get input from infile, assign it to line
        std::cout << line << std::endl;
    }
    //std::string accession_num;
    //std::cout << "Paste fasta input: ";
    //std::getline (std::cin, accession_num);
    //std::cout << accession_num << std::endl;
}
