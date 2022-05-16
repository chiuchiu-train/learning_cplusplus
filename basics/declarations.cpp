#include <iostream>

int main(){

    // BRACED INITIALIZATION
    int elephant_count; // may contain random garbage variable
    int lion_count{}; // initializes to 0
    int cat_count {10}; // initializes to 10
    int dog_count {15}; // initializes to 15
    int domesticated_animals {dog_count + cat_count};
    // int bad_initialization {doesnt_exist1 + doesnt_exist2}; // won't compile
    // int narrowing_conversion {2}; // similar to how 2.9 is not an integer in python, won't compile
    std::cout << domesticated_animals << std::endl;

    // ASSIGNMENT INITIALIZATION
    int bike_count = 2;
    int truck_count = 7;
    int vehicle_count = bike_count + truck_count;
    std::cout << vehicle_count << std::endl;
    int narrowing_conversion = 2.9; // notice the difference between this and braced initialization
    std::cout << narrowing_conversion << std::endl;
}