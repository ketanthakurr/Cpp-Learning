#include<iostream>
using namespace std;

class employee
{
private:
    int A,B,C;
public:
    int d,e;
    void setData(int a , int b , int c);
    void getData(){
        cout<<A<<endl;
        cout<<B<<endl;
        cout<<C<<endl;
        cout<<d<<endl;
        cout<<e<<endl;
    };
};

void employee :: setData(int a, int b, int c){
    A = a;
    B = b;
    C = c;
}

int main(){
    employee ketan;
    // ketan.A = 1 ; // This will throw a error because A is a private class...!!!
    ketan.d = 69;
    ketan.e = 83;
    ketan.setData ( 1 , 2 , 3);
    ketan.getData();    
    return 0;
}