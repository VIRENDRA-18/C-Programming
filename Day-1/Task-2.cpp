//Calculating Area of a Circle

#include <iostream>
using namespace std;
int main() {
    float PI = 3.14159; // Define the value of PI
    double radius; // Variable to store the radius
    double area; // Variable to store the area

    cout << "Enter the radius of the circle: "; // Prompt user for input
    cin >> radius; // Read the radius from user input

    area = PI * radius * radius; // Calculate area using the formula A = πr²

    cout << "The area of the circle with radius " << radius << " is: " << area << endl; // Output the result
    return 0; // Indicate successful completion
}