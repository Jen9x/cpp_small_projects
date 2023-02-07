/*Challange from https://www.codecademy.com/resources/blog/c-plus-plus-code-challenges-for-beginners
This is Challange 5.
*/
#include <iostream>

double multiply(double x, double y) {
    return x * y;
}

int main() {
    double a, b;
    std::cout << "Enter two floating-point numbers: ";
    std::cin >> a >> b;
    std::cout << "The product of the two numbers is: " << multiply(a, b) << std::endl;
    return 0;
}