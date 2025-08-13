#include<iostream>
using namespace std;
int main(){
    int Number;
    cout<<"Enter a positive integer: "; // Prompt user for input
    cin>>Number;

    if(Number%5==0){
        cout<<"Number id divisible by 5";
    }
    else{
        cout<<"Number is not divisible by 5";
    }
}