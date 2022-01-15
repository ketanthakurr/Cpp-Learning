#include<iostream>
using namespace std;

int factorial(int n){   // Facorial of a number:---->>>// 6! = 6*5*4*3*2*1 = 720
    if (n <=1){
        return 1;
    }
    return n * factorial(n - 1);
    // Dry Run
    // factorial(n) If user gave the value 4
    // factorial(4) = 4 * factorial(3)....But now acc to the condition the factorial n is <= 1;
    // factorial(3) = 4 * 3 * factorial(2)
    // factorial(2) = 4 * 3 * 2 * factorial(1)
}
int main() {    
    int a; 
    cout<<"Enter a Number : "<<endl;
    cin>>a;
    cout<<"The Factorial of the given number is "<<factorial(a)<<endl;
    return 0;
}