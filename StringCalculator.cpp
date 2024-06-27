#include "StringCalculator.h"

int StringCalculator::add(string input){
int sum = 0;
    for (char c : input) {
        if (std::isdigit(c) && c>0 && c<1000) {
            sum += convertToDigit(c);
        }
    }   
    return sum;
}

int StringCalculator::convertToDigit(char c) {
    if (std::isdigit(c) && c > 0 && c < 1000) {
        return c - '0';
    }
    return 0;
}

