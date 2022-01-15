#include<iostream>
using namespace std;


// Inline funcion helps to save compline time and extra work from computer..!!
inline int product(int a , int b){
    return a*b;
}


/*
int product(int a , int b){
    static int c = 0; // This function will only runs ones..!!
    c = c + 1;// Next time the function will be run, value of c will be retained.!!
    return a*b+c;
}
*/

int main(){
    int a,b;
    cout<<"enter the value of a and b"<<endl;
    cin>>a>>b;
    // If i call a function so many times in a code, So it takes the memory and compile time
    // So to avoid the extras we use inline function replace the the data and helps to run fast ad saves time
    // But we can't use it in all code's we need to use it in small functions only otherwise it's not helpfull instead will // create issue and use your memry and the code size will be more.
    cout<<product(a,b)<<endl;
    cout<<product(a,b)<<endl;
    cout<<product(a,b)<<endl;
    cout<<product(a,b)<<endl;
    cout<<product(a,b)<<endl;
    cout<<product(a,b)<<endl;
    cout<<product(a,b)<<endl;
    cout<<product(a,b)<<endl;
    cout<<product(a,b)<<endl;
    cout<<product(a,b)<<endl;
    return 0;
}