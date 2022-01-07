#include<iostream>
using namespace std;
int main(){
    // Array Example's
    int marks[5] = {89,67,57,89,99};
 //cout<<"The marks are :"<<marks[0]<<endl;
 //cout<<"The marks are :"<<marks[1]<<endl;
 //cout<<"The marks are :"<<marks[2]<<endl;
 //cout<<"The marks are :"<<marks[3]<<endl;
 //cout<<"The marks are :"<<marks[4]<<endl;
    int mathmarks[5] ;
    //We can give value of array like this also
    mathmarks[0] = 90;
    mathmarks[1] = 99;
    mathmarks[2] = 88;
    mathmarks[3] = 93;
    mathmarks[4] = 78;

    //We can even change the value of array
    mathmarks[2] = 56;
    //Write the new value of array before cout statement
//cout<<"The marks of maths are: "<<mathmarks[0]<<endl;
//cout<<"The marks of maths are: "<<mathmarks[1]<<endl;
//cout<<"The marks of maths are: "<<mathmarks[2]<<endl;
//cout<<"The marks of maths are: "<<mathmarks[3]<<endl;
//cout<<"The marks of maths are: "<<mathmarks[4]<<endl;
      
//Print arrays using For loop

    for (int i = 0; i < 5; i++)// used i< 5 because i have 5 values in my array above mentioned marks[5]
        cout<<"The marks of  "<<i<<" is "<<marks[i]<<endl;
    
    
    return 0;
}

//
