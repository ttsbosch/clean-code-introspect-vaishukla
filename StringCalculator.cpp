#include "StringCalculator.h"

int StringCalculator::add(string input){
int sum = 0;
    for (char c : input) {
        if (std::isdigit(c) && c>0 && c<1000) {
            sum += c - '0';
        }
    }
    return sum;
}

