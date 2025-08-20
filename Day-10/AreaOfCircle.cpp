#include<iostream>
using namespace std;
void areaOfCircle(){
    float radius = 5;
    float pi = 3.14;
    float Area = pi * radius * radius; // Calculate area of circle
    cout << "Area of Circle: " << Area << endl; // Output the area
}
int main() {
    areaOfCircle(); // Call the function to calculate and print area of circle
    return 0;
}