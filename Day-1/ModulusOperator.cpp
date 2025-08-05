#include<iostream>
using namespace std;   
int main()
{
    int a = 10; //dividend
    int b = 4; //divisor
    int r; // remainder

    r = a % b; // Calculate remainder using modulus operator

    cout << "The remainder when " << a << " is divided by " << b << " is: " << r << endl;
    return 0;



    // Properties of Modulus Operator:   
     // 1. The result of a % b has the same sign as a.
    // 2. The result of a % b is always less than b in absolute value.
    // 3. If b is zero, the modulus operator is undefined.
    // 4. a % (-b) = a % b, meaning the sign of b does not affect the result.
    // 5. (-a) % b = -(a % b), meaning the sign of a affects the result. 
    // 6.(-a) % (-b) = -(a % b), meaning both signs affect the result.

    // BODMAS Rule:
    // 1. Brackets 
    // 2. Orders (i.e., powers and square roots, etc.)
    // 3. Division and Multiplication (left to right)
    // 4. Addition and Subtraction (left to right)
    // 5. The modulus operator is left associative, meaning it evaluates from left to right.
    // 6. The modulus operator has the same precedence as multiplication and division.
    // Example:
    // int result = 10 + 20 % 3 * 2; // Evaluates as 10 + (20 % 3) * 2
    
}

