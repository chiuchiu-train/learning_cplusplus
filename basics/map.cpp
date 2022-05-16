#include <iostream>
#include <map>  // to use a dictionary
#include <string>

int main(){
    std::map <std::string, std::string> m;  // std::map <type_of_key, type_of_value> map_name

    // Add key-value pairs
    m["cat"] = "meow";
    m["dog"] = "woof";
    m["horse"] = "neigh";
    std::cout << "The dog says " << m["dog"] << std::endl;

    // Loop through contents
    for (auto item:m){  // similar to "for item in lst" syntax in python
        std::cout << "The " << item.first << " goes " << item.second << std::endl;
    }

    // Try with a vcf example
    std::string REF = "A";
    std::string ALT = "G";
    std::map <std::string, std::string> dct; // initialize a map
    dct["0|0"] = REF + REF;
    dct["0|1"] = REF + ALT;
    dct["1|0"] = ALT + REF;
    dct["1|1"] = ALT + ALT;
    std::cout << dct["0|0"] << std::endl;
    std::cout << dct["0|1"] << std::endl;
    std::cout << dct["1|0"] << std::endl;
    std::cout << dct["1|1"] << std::endl;
}