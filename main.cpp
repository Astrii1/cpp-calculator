#include <iostream>


double calculate(double a, double b, char op) {
    if (op == '+') return a + b;
    if (op == '-') return a - b;
    if (op == '*') return a * b;
    if (op == '/') return a / b;
    
    return 0;
}

int main() {

    char again = 'y';

    while (again == 'y' || again == 'Y') {

double x, y;
char op;

std::cout << "Enter number 1: ";
std::cin >> x;

std::cout << "Enter operator (+ - * /): ";
std::cin >> op;

std::cout << "Enter number 2: ";
std::cin >> y;

if (op != '+' && op != '-' && op != '*' && op != '/') {
    std::cout << "Invalid operator...\n";
}
else if (op == '/' && y == 0) {
    std::cout << "Are you stupid?\n";
}
else {
    double result = calculate(x, y, op);

    std::cout << "Your number is: " << result << '\n';

    if (result > 100) {
        std::cout << "HUGE\n";
    } 
    else {
        std::cout << "Twink\n";
    }
}

    std::cout << "Go again? (y/n): ";
    std::cin >> again;
}

return 0; 

}

