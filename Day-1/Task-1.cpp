/* Example : Take two integers  a and b : a>b, and find the
 remainder when a is divided by b.*/

 #include<iostream>
 using namespace std;   
 int main()
 {
    int a = 25; //divided
    int b = 15; // divisor
    int q = a / b; // Quotient
    int r ; // Remainder
    // a = b * q + r;
    r = a - (b * q); // Calculate remainder

    cout << "The remainder when " << a << " is divided by " << b << " is: " << r << endl;
    return 0;
 }