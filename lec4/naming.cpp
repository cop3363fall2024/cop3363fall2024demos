#include <iostream>

int main() {

    /* illegal identifiers
    int c = 2 -- good
    int _c = 2 -- legal but not good
    int 2c = 2 -- illegal
    int double = 2 -- illegal
    int char = 3 -- illegal
    */
    
    int a = 5;
    int A = 5;

    a = a + 1;

    std::cout << "a = " << a << std::endl; 
    std::cout << "A = " << A << std::endl; 

    return 0;
}