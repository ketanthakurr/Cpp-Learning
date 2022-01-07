#include<iostream>
using namespace std;

// STUCTURE

/*
struct students // We can use typedef before struct for the shortcut
{
    int sID;
    char Teacher;
    float mathmarks;
}; // write the shortcut we want to use using typedef.

int main(){
struct students ketan;       // give variable a name.
ketan.sID = 210213;          // Variable name.values = value you want to assign
ketan.Teacher = 'a';         // Variable name.values = value you want to assign
ketan.mathmarks = 89;        // Variable name.values = value you want to assign
cout<<ketan.sID<<endl;
cout<<ketan.Teacher<<endl;
cout<<ketan.mathmarks<<endl;
    return 0;
}
*/

// UNIONS

/*
union Money // Assigned union a value
{
    int rice;
    char car;
    float pounds;
};

int main(){
    union Money pay;
    pay.rice = 100;
    //pay.car = 'A';
    //pay.pounds = '38.7';
    cout<<pay.rice<<endl;
    //cout<<pay.car<<endl;
    //cout<<pay.pounds<<endl;
    
    return 0;
}
*/