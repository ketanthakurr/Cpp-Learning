#include<iostream>
using namespace std;

// Inline funcion helps to save compline time and extra work from computer..!!
inline int product(int a , int b){
    return a*b;
}

float moneyRecieved (int currentMoney , float  factor = 1.04){ 
    // Default aruguments has to be written at last like i gave argument after the currentmoney argument..!!
    return currentMoney * factor ;
}

int main(){
    //int a,b;
    //cout<<"enter the value of a and b"<<endl;
    //cin>>a>>b;
    int money = 100000;
    cout<<"The money in you bank "<<money<<" ,Money you will recieve after a year "<<moneyRecieved(money)<<endl;
    cout<<"For VIP The money in you bank "<<money<<" ,Money you will recieve after a year "<<moneyRecieved(money, 1.23)<<endl;
    return 0;
}