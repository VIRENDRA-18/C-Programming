#include <iostream>
using namespace std;
void starTringle (int x){
    for(int i=1; i<=x; i++) {
        for(int j=1; j<=i; j++) {
            cout<<"*"; // Print star
        }
        cout<<endl; // Move to the next line after each row
    }
}
int main()
{
    starTringle(3); 
    starTringle(4);
    starTringle(5);// Call the function to print the star triangle
    return 0;   
}


