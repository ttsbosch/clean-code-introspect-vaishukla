#include<iostream>
#include<string>

using namespace std;
class StringCalculator{
private:
int convertToDigit(char c);
//bool inRange(char c);
bool checkIfNegativeNumber(char c);
public:
int add(string input);
};
