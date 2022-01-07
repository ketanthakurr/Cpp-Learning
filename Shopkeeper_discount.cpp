#include<iostream>
using namespace std;

int main () {
    int quantity,price;
    cout<<"enter Quantity"<<endl;
    cin>>quantity;
    price = quantity*100;
    if (price>1000) {
        cout<<"Total cost is "<< price-(price*.1)<<endl;
    }
    else {
        cout<<"Total amout is "<< price <<endl;
    }
    return 0;

}

