#include <iostream>

int main() {
    // C=(F−32)/1.8
    // F= C * 1.8+ 32
    // K = C + 273.15

    char unit_base;
    double temperature;

    std::cout << "Do you want to convert from F, C or K?\n";
    std::cin >> unit_base;

    if (unit_base == 'C') {
        std::cout << "What is the temperature in Celsius?\n";
        std::cin >> temperature;
        std::cout << "The temperature in Fahrenheit is: " <<  ((temperature * 1.8) + 32) << "\n";
        std::cout << "The temperature in Kelvin is: " <<  (temperature + 273.15) << "\n";
    }

    else if (unit_base == 'F') {
        std::cout << "What is the temperature in Fahrenheit?\n";
        std::cin >> temperature;
        std::cout << "The temperature in Celsius is: " <<  ((temperature - 32) / 1.8) << "\n";
        std::cout << "The temperature in Kelvin is: " <<  ((((temperature - 32) * 5) / 9)) + 273.15 << "\n";
    }

    else if (unit_base == 'K') {
        std::cout << "What is the temperature in Kelvin?\n";
        std::cin >> temperature;
        std::cout << "The temperature in Celsius is: " <<  temperature - 273.15 << "\n";
        std::cout << "The temperature in Fahrenheit is: " <<  (((temperature - 273.15) * 1.8) + 32) << "\n";

    }

    else {
        std::cout << "Invalid Value. Please rerun programme and try again.\n";
    }
    
    return 0;
}
