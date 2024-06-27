#include "StringCalculator.h"

/* int StringCalculator::add(string input){
int sum = 0;
    for (char c : input) {
            sum += convertToDigit(c);

    }   
    return sum;
}

int StringCalculator::convertToDigit(char c) {
    if (std::isdigit(c) && inRange(c)) {
        return c - '0';
    }
    return 0;
}

bool StringCalculator::inRange(char c){
    if(c>0 && c<1000){
        return true;
    }
    return false;
}
*/

 int StringCalculator::add(string input) {
        if (input.empty()) {
            return 0;
        }

        int sum = 0;
        std::string delimiter = ",";
        std::string numbers = input;

        if (input.substr(0, 2) == "//") {
            delimiter = input.substr(2, 1);
            numbers = input.substr(4);
        }

        size_t pos = 0;
        while ((pos = numbers.find(delimiter)) != std::string::npos) {
            std::string number = numbers.substr(0, pos);
            int num = std::stoi(number);

            if (num < 0) {
                throw std::runtime_error("Negative numbers not allowed");
            }

            if (num <= 1000) {
                sum += num;
            }

            numbers.erase(0, pos + delimiter.length());
        }

        int lastNumber = std::stoi(numbers);
        if (lastNumber < 0) {
            throw std::runtime_error("Negative numbers not allowed");
        }

        if (lastNumber <= 1000) {
            sum += lastNumber;
        }

        return sum;
    }
