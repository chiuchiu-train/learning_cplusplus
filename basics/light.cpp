// Example for if/else statements
#include <iostream>

int main(){
    bool red_light = true;
    bool green_light = false;
    bool yellow_light = true;
    
    if(red_light == true){
        std::cout << "Stop!" << std::endl;
    }
    elif(yellow_light ==true){
        std::cout << "Slow Down!" << std::endl;
    }
    else{
        std::cout << "Go!" << std::endl;
    }
    return 0;
}