#include <iostream>
#include <fstream>
#include <string>

using namespace std;

// out
//  Opening the file in write mode..!!

int main()
{
    fstream obj;
    obj.open("ABC.txt", ios::out);
    int a;
    if (!"ABC.txt")
    {
        cout << "The file is not found" << endl;
    }
    else
    {
        cout << "The file is found / Created" << endl;
        obj << "Hello my name is Ketan Thakur. And  live in gurugram" << endl;
        obj.close();
    }
    return 0;
}

// Append Mode
// This will add the text at the end of the file.

/*
int main(){
    fstream obj;
    obj.open("ABCD.txt",ios::app); // used append mode here
    if (!"ABCD.txt")
    {
        cout<<"The file is not found"<<endl;
    }
    else
    {
        cout<<"The file is found / Created"<<endl;
        obj<<"Hello my name is Ketan Thakur. And  live in gurugram"<<endl;
        obj.close();
    }
    return 0;
}
*/