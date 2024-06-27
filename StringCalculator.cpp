#include "StringCalculator.h"

 int StringCalculator::add(string input){
int sum = 0;
    for (char c : input) {
     if(checkIfNegativeNumber())
     {
      cout<<"negative numbers not allowed";
     }
            sum += convertToDigit(c);

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

