#include <iostream>
//function to calculate the roots
void bhaskara(double a, double b, double c) {
    double delta = ((b * b) - 4 * a * c);
    double x1 = (-b + (sqrt(delta))) / (2 * a);
    double x2 = (-b - (sqrt(delta))) / (2 * a);
    
//show
    std::cout << "As raízes são " << x1 << " e " << x2;
}

int main() {
    // variables
    int a;
    int b;
    int c;

    //get the numbers
    std::cout << "The value of a:" << std::endl;
    std::cin >> a;
    std::cout << "The value of b" << std::endl;
    std::cin >> b;
    std::cout << "The value of c" << std::endl;
    std::cin >> c;

    bhaskara(a, b, c);
}