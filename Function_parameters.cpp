#include<iostream>
using namespace std;

// We need to write the function before calling it into the main function..!!
/*
int sum(int a, int b);{
    int c = a + b;
    return c;
}
*/
// But if we want to write it after the main function we can your the function prototype
// Which give the assuration to the compiler that this funtion is here may be later down the code

int sum(int a, int b); //---> Acceptable 
// we need to write the whole "int" within the brackets or we can only write (in , int)..!!
// Now the compiler is detecting the sum fuction even i wrote it after the main function..!!
void g(void);
// if i will not give the Function prototype my compiler will raise a error the function void s not declared 

int main(){
    int num1, num2;
    cout<<"Enter your first number : "<<endl;
    cin>>num1;
    cout<<"Enter your second number : "<<endl;
    cin>>num2;
    cout<<"Sum of the the number is "<<sum(num1 , num2);
    g();
    return 0;
    
}

int sum(int a, int b){
    int c = (a+b);
    return c; // And it's not compulsory to use return at the end of the function..!!
}

void g(){
    cout<<"\nHave a nice day..!!";
}