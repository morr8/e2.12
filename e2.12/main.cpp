/*
 •• E2.12
 Write a program that reads a number between 1,000 and 999,999 from the user and prints it with a comma separating the thousands. Here is a sample dialog; the user input is in color:
 
 Please enter an integer between 1000 and 999999: 23456
 23,456
 */

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
    cout << "Please enter an integer between 1000 and 999999: ";
    string number;
    cin >> number;
    int n = number.length();
    
    cout << number.substr(0, n - 3) + "," + number.substr(n - 3, n) << endl;
}
