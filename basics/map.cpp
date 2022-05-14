#include <iostream>

int main(){
  std::map<const char*, int> x;
  x["one"] = 1;
  x["two"] = 2;

  std::cout << x["one"] << std::endl;
}
