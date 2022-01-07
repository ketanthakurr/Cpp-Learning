#include<iostream>
using namespace std;

int main() {

    int a,b,c,sides;
    cout<<"Enter the a "<<endl;
    cin>>a;
    cout<<" Enter the b "<<endl;
    cin>>b;
    cout<<"Enter the c"<<endl;
    cin>>c;

    if (a*a==b*b + c*c || b*b==c*c+a*a || c*c==a*a+b*b){
        cout<<" Right angle Triangle."<<endl;
    }
    else {
        cout<<" Not a right angle triangle"<<endl;
    }
    return 0;
}