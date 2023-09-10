// Write a program to show values of different data types using templates and constructor.
#include <iostream>

template <typename T>
class ValueHolder {
public:
    ValueHolder(T value) : storedValue(value) {}

    void display() {
        std::cout << "Stored Value: " << storedValue << std::endl;
    }

private:
    T storedValue;
};

int main() {
    ValueHolder<int> intValue(42);
    ValueHolder<double> doubleValue(3.14);
    ValueHolder<std::string> stringValue("Hello, World!");

    std::cout << "Displaying Integer Value:" << std::endl;
    intValue.display();

    std::cout << "\nDisplaying Double Value:" << std::endl;
    doubleValue.display();

    std::cout << "\nDisplaying String Value:" << std::endl;
    stringValue.display();

    return 0;
}
