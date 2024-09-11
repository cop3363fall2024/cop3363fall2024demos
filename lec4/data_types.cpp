#include <iostream>

int main() {

    std::cout << "-----------------------------------------------" << std::endl;
    std::cout << "|                 Integer Types                |" << std::endl;
    std::cout << "-----------------------------------------------" << std::endl;

    int x = 10;
    short sx = 10;
    long lx = 10;
    // float y = 10.0;
    // double z = 10.0;

    std::cout << "  - Size of int (x): " << sizeof(x) << " bytes" << std::endl;
    std::cout << "  - Size of short (x): " << sizeof(sx) << " bytes" << std::endl;
    std::cout << "  - Size of long (x): " << sizeof(lx) << " bytes" << std::endl;
    // std::cout << "Size of float (y): " << sizeof(y) << " bytes" << std::endl;
    // std::cout << "Size of double (z): " << sizeof(z) << " bytes" << std::endl;

    std::cout << "-----------------------------------------------" << std::endl;
    std::cout << "|                 Floating Types              |" << std::endl;
    std::cout << "-----------------------------------------------" << std::endl;

    float y = 10.0;
    double dy = 10.0;
    double ddy = 10.0;

    std::cout << "  - Size of float (y): " << sizeof(y) << " bytes" << std::endl;
    std::cout << "  - Size of double (y): " << sizeof(dy) << " bytes" << std::endl;
    std::cout << "  - Size of long double (y): " << sizeof(ddy) << " bytes" << std::endl;

    std::cout << "-----------------------------------------------" << std::endl;
    std::cout << "|                    Char Types               |" << std::endl;
    std::cout << "-----------------------------------------------" << std::endl;

    char c = 'a';
    char d = ' ';
    char e = '\n';

    std::cout << "  - Size of char (c): " << sizeof(c) << " bytes" << std::endl;
    std::cout << "  - Size of char (d): " << sizeof(d) << " bytes" << std::endl;
    std::cout << "  - Size of char (\\n): " << sizeof(d) << " bytes" << std::endl;

    return 0;
}