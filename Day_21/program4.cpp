#include <iostream>
#include <string>
#include <algorithm> 

int main() {
    std::string str = "Hello World ";
    
    
    str.erase(std::remove(str.begin(), str.end(), ' '), str.end());
    
    std::cout << " removing space after : " << str << std::endl;
    
    return 0;
}
