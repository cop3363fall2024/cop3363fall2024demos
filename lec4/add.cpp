#include <iostream>

int add(int a, int b){
    return a + b;
}

int main() {

    int num1 = 5; // Decalres a variable 'num1' of type int with initial value of 5
    int num2 = 10; // Decalres a variable 'num1' of type int with initial value of 10
    int c; // Decalres a variable 'num1' of type int with no initial value
    
    // Call the add function and store the result
    int result = add(num1, num2);
    
    int sum = 0;
    for (int i = 1; i<=100; i++){
        sum += i;
    }
    
    // Output the result
    std::cout << "num1 = " << num1 << std::endl;
    std::cout << "num2 = " << num2 << std::endl;
    std::cout << "The sum of " << num1 << " and " << num2 << " is: " << result << std::endl;

    std::cout << "The sum through 1 to 100 is " << sum << std::endl;
    
    return 0;
}