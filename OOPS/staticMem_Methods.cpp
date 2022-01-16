#include<iostream>
using namespace std;

class Employee
{
private:
    int id;
    static int count;
public:
    void setData(void)
    {
        cout<<"Enter the Id"<<endl;
        cin>>id;
        count++;
    }
    void getData(void)
    {
        cout<<"The id of th employee is " << id << " and the is the employee number "<<count<<endl;
    }
};

int Employee :: count;

int main(){
    Employee Ketan , Himanshi , Yashi;

    Ketan.setData();
    Ketan.getData();

    Himanshi.setData();
    Himanshi.getData();

    Yashi.setData();
    Yashi.getData();

    return 0;
}