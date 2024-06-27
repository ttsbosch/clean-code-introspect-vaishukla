#include<iostream>
#include<string>

using namespace std;
class StringCalculator{
private:
int convertToDigit(char c);
//bool inRange(char c);
int checkIfNegativeNumber(char c);
public:
int add(string input);
};
