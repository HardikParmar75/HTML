// Write a program to create template class to find binary value of a number given by user.
#include <iostream>

template <typename T>
class BinaryConverter {
public:
    BinaryConverter(T num) : number(num) {}

    void convertToBinary() {
        T quotient = number;
        int binary[64]; // Assuming a maximum of 64-bit binary representation
        int index = 0;

        while (quotient > 0) {
            binary[index] = quotient % 2;
            quotient /= 2;
            index++;
        }

        std::cout << "Binary representation of " << number << " is: ";
        if (index == 0)
            std::cout << "0";
        else {
            for (int i = index - 1; i >= 0; i--) {
                std::cout << binary[i];
            }
        }
        std::cout << std::endl;
    }

private:
    T number;
};

int main() {
    long long intValue;
    
    std::cout << "Enter an integer: ";
    std::cin >> intValue;

    BinaryConverter<long long> binaryConverter(intValue);
    binaryConverter.convertToBinary();

    return 0;
}
