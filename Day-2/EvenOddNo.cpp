// Ques : Take positive integer input and tell if it
// is even or odd


#include<iostream>
using namespace std;
int main (){
    int number; // Variable to store the input number

    cout << "Enter an integer: "; // Prompt user for input
    cin >> number; // Read the integer from user input

    // Check if the number is even or odd
    if (number % 2 == 0) {
        cout << number << " is an even number." << endl; // Output if the number is even
    } else {
        cout << number << " is an odd number." << endl; // Output if the number is odd
    }

    return 0; // Indicate successful completion
}