#include<iostream>
using namespace std;

int sum(int a, int b){
    int c = a + b;
    return c;
}
// This will not going to swap the number..!!
// Beacuse the main function will give the copy of it's data, So the even after the swap function the main value didn't get changed..!!

/*void swap(int a , int b) {
    int temp = a;
    a = b;
    b = temp;
}
*/
// This swap function will work because this time we give the address of the integer x,y..!!
void swappointer ( int* a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(){
    int x=4,y=5;
    cout<<"The value of a is "<<x<<" and b is "<<y<<endl;
    //swap (x,y); // This will not gonna swap the values
    swappointer (&x , &y); // This swap function will work
    cout<<"The swaped value of a is "<<x<<" and y is "<<y<<endl;
    return 0;
}