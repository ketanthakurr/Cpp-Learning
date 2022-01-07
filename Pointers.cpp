#include<iostream>
using namespace std;
int main(){
    // What is Pointer..??
    // Data type which holds the address of other data type

    int a = 69;
    int* b = &a;
    // & ---> (Address of) operator
    cout<<"The Address of a : "<<&a<<endl;
    cout<<"The address of a : "<<b<<endl;

    // & ---> ( Address of) Dereference operator
    cout<<"The value of address a :"<<*b<<endl;
    return 0;
}