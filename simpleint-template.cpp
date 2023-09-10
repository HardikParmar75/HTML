// Write a program to create template class to find simple interest of integer and float value 
// using function template.
#include <iostream>

template <typename T>
class SimpleInterestCalculator {
public:
    SimpleInterestCalculator(T principal, T rate, T time) : principal(principal), rate(rate), time(time) {}

    T calculateInterest() {
        return (principal * rate * time) / 100;
    }

private:
    T principal;
    T rate;
    T time;
};

template <typename T>
void calculateAndDisplayInterest(T principal, T rate, T time) {
    SimpleInterestCalculator<T> calculator(principal, rate, time);
    T interest = calculator.calculateInterest();
    std::cout << "Simple Interest: " << interest << std::endl;
}

int main() {
    int intPrincipal, intRate, intTime;
    float floatPrincipal, floatRate, floatTime;

    // Input for integer values
    std::cout << "Enter principal amount (integer): ";
    std::cin >> intPrincipal;
    std::cout << "Enter rate of interest (integer): ";
    std::cin >> intRate;
    std::cout << "Enter time period (integer): ";
    std::cin >> intTime;

    // Input for float values
    std::cout << "Enter principal amount (float): ";
    std::cin >> floatPrincipal;
    std::cout << "Enter rate of interest (float): ";
    std::cin >> floatRate;
    std::cout << "Enter time period (float): ";
    std::cin >> floatTime;

    // Calculate and display simple interest for integer values
    calculateAndDisplayInterest(intPrincipal, intRate, intTime);

    // Calculate and display simple interest for float values
    calculateAndDisplayInterest(floatPrincipal, floatRate, floatTime);

    return 0;
}
