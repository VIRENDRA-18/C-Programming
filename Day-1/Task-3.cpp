//  Calculating Simple Interest

//formula: SI = (P * R * T) / 100

#include <iostream>
using namespace std;
int main () {
    double principal; // Variable to store the principal amount
    double rate; // Variable to store the rate of interest
    double time; // Variable to store the time period
    double simpleInterest; // Variable to store the calculated simple interest

    cout << "Enter the principal amount: "; // Prompt user for input
    cin >> principal; // Read the principal amount from user input

    cout << "Enter the rate of interest: "; // Prompt user for input
    cin >> rate; // Read the rate of interest from user input

    cout << "Enter the time period (in years): "; // Prompt user for input
    cin >> time; // Read the time period from user input

    simpleInterest = (principal * rate * time) / 100; // Calculate simple interest using the formula

    cout << "The simple interest is: " << simpleInterest << endl; // Output the result
    return 0; // Indicate successful completion
}