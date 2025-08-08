// Ques 6: How many of these can be a variable name?

// 01PWskills

//  _FLOAT

//  int

//  FLOAT

//  You will succeed 

#include <iostream>
using namespace std;
int main() {
    // Variable names must start with a letter or underscore, cannot be a reserved keyword, and cannot contain spaces
    // Valid variable names:
    int validVariable1 = 10; // _FLOAT is valid
    float validVariable2 = 20.5; // FLOAT is valid
    string validVariable3 = "You will succeed"; // You will succeed is valid

    // Invalid variable names:
    // int invalidVariable1 = 30; // 01PWskills is invalid because it starts with a number
    // int invalidVariable2 = 40; // int is invalid because it is a reserved keyword

    cout << "Valid variable names are: _FLOAT, FLOAT, You will succeed" << endl;
    return 0; // Indicate successful completion
}