#include<iostream>
using namespace std;

int fib(int n){
    if (n<2){
        return 1;
    }
    return fib(n-2) + fib(n-1);
}
int main(){
    int a;
    cout<<"Enter you no. : ";
    cin>>a;
    cout<<"The fibonacci Number is "<<fib(a)<<endl;

    return 0;
}