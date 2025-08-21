// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter n : ";
//     cin>>n;
    
//     int r;
//     cout<<"Enter r : ";
//     cin>>r;
    
//     int nfact = 1;
//     for(int i = 2; i<=n; i++){
//         nfact *= i;
//     }
    
//     int rfact = 1;
//     for(int i = 2; i<=r; i++){
//         rfact *= i;
//     }
    
//     int nrfact = 1;
//     for(int i = 2; i<=n-r; i++){
//         nrfact *= i;
//     }
    
//     int ncr = nfact/(rfact*nrfact);
//      cout<<ncr;
    
// }



// using function on this coed

#include<iostream>
using namespace std;
int fact(int x){
    int f = 1;
    for(int i = 2; i<=x; i++){
        f *= i; // Calculate factorial
    }   
    return f; // Return the factorial value
}

int combination(int n, int r){
    return fact(n)/(fact(r) * fact(n-r)); // Calculate combination using factorial
}

int permutation(int n, int r){
    return fact(n) / fact(n - r); // Calculate permutation using factorial
}
int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;
    
    int r;
    cout<<"Enter r : ";
    cin>>r;
    
    int nfact = fact(n);
    int rfact = fact(r);
    int nrfact = fact(n-r);
    int ncr = combination(n,r);
    int npr = permutation(n, r); // Assuming you have a permutation function defined
    cout<<ncr << endl<<npr; // Output the combination result
    
    
    
    
    
    
    
   
    
}
