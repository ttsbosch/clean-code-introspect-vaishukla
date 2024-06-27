#include "StringCalculator.h"
#include <stdexcept>

int StringCalculator::add(string input){
int sum = 0;
    for (char c : input) {
     if(checkIfNegativeNumber(c))
     {
      throw std::invalid_argument("Negative integer not allowed");
     }
        else{
            sum += convertToDigit(c);
        }

    }   
    return sum;
}

int StringCalculator::convertToDigit(char c) {
    if (std::isdigit(c)) {
        return c - '0';
    }
    return 0;
}

bool StringCalculator::checkIfNegativeNumber(char c){
 if(c<0){
  return true;
 }
 return false;
}

// bool StringCalculator::inRange(char c){
//     if(c>0 && c<1000){
//         return true;
//     }
//     return false;
// }

