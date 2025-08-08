// Ques 5: WAP to find the circumference of a circle with radius 10 in C++.
#include <iostream>
using namespace std;
int main() {
    const double PI = 3.14159; // Define the value of PI
    double radius = 10.0; // Set the radius of the circle
    double circumference; // Variable to store the calculated circumference

    // Calculate the circumference using the formula: C = 2 * PI * radius
    circumference = 2 * PI * radius;

    // Output the result
    cout << "The circumference of a circle with radius " << radius << " is: " << circumference << endl;

    return 0; // Indicate successful completion
}