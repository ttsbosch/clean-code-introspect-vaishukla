#include "StringCalculator.h"
#include <stdexcept>


    int StringCalculator::add(const std::string& input) {
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
        checkNegative(lastNumber);

        if (lastNumber <= 1000) {
            sum += lastNumber;
        }

        return sum;
    }

 void StringCalculator::checkNegative(int numbers){
             if (numbers < 0) {
            throw std::runtime_error("Negative numbers not allowed");
        }
 }
