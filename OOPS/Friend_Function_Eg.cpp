/*
#include<iostream>
using namespace std;

class Y; // Forward declaration

class X
{
    int data;
    public:
        void setvalue(int value)
        {
            data = value;
        }
    friend void add(X , Y);
};

class Y
{
    int num;
    public:
        void setvalue(int value)
        {
            num = value;
        }
    friend void add(X , Y);
};

void add(X o1, Y o2){
    cout<<" Sum of X and Y is"<<o1.data + o2.num ;
}

int main(){
    X a;
    a.setvalue(5);
    Y b;
    b.setvalue(8);

    add(a , b);
    return 0;
}
*/

#include <iostream>
using namespace std;

class c2;
class c1
{
    int val1;
    friend void exchange(c1 &, c2 &);

public:
    void setvalue(int a)
    {
        val1 = a;
    }

    void display(void)
    {
        cout << val1 << endl;
    }
};

class c2
{
    int val2;
    friend void exchange(c1 &, c2 &);

public:
    void indata(int b)
    {
        val2 = b;
    }

    void display(void)
    {
        cout << val2 << endl;
    }
};

void exchange(c1 &x, c2 &y)
{
    int tmp;
    tmp = x.val1;
    x.val1 = y.val2;
    y.val2 = tmp;
}

int main()
{
    c1 oc1;
    c2 oc2;

    oc1.setvalue(5);
    oc2.indata(6);
    exchange(oc1, oc2);

    cout << "The value of c1 after exchange is : ";
    oc1.display();
    cout << " The value of c2 after exchange is : ";
    oc2.display();

    return 0;
}