// Ques 4: What is the output of this program?

// void main(){
// 	int a=4;
// int b=5;
// a++;b--;
// cout<<++a<<” “<<b–-;
// }

#include <iostream>
using namespace std;
int main() {
    int a = 4; // Initialize variable a with value 4
    int b = 5; // Initialize variable b with value 5
    a++; // Increment a by 1 (a becomes 5)
    b--; // Decrement b by 1 (b becomes 4)
    
    cout << ++a << " " << b-- << endl; // Output the incremented value of a and then the current value of b, followed by decrementing b

    return 0; // Indicate successful completion
}