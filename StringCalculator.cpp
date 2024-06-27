#include "StringCalculator.h"

int StringCalculator::add(string input){
  if(input == "" || input == "0")
  {
    return 0;
  }
  int sum = 0;
  for (char c : input) 
  {
        if (std::isdigit(c)) 
        {
            sum += c - '0';
        }
    }
  return sum;
}

