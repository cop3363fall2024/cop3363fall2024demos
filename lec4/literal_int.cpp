#include <iostream>

int main() {

    int x = 26;   // dec 26
    int y = 032;  // oct 26
    int z = 0x1A; // hex 26

    std::cout << "x=" << x << std::endl;
    std::cout << "y=" << y << std::endl;
    std::cout << "z=" << z << std::endl;

    std::cout << "26(dec) in oct = " << std::oct << x << std::endl;
    std::cout << "26(dec) in hex = " << std::hex << x << std::endl;
}