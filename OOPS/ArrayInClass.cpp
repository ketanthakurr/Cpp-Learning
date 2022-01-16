#include<iostream>
using namespace std;

class shop
{
private:
    int itemID[100];
    int itemPrice[100];
    int counter;
public:
    void initcounter(void) { counter = 0 ;}
    void setPrice(void);
    void displayPrice(void);
};

void shop :: setPrice(void)
{
    cout<<"Enter Id of your item"<<endl;
    cin>>itemID[counter];
    cout<<"Set price of your item"<<endl;
    cin>>itemPrice[counter];
    counter++;
}

void shop :: displayPrice(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout<<"The price of itemId "<<itemID[i]<<" is "<<itemPrice[i] <<endl; 
    }
    
}

int main(){
    shop lalu_ki_dukaan;
    lalu_ki_dukaan.initcounter();
    lalu_ki_dukaan.setPrice();
    lalu_ki_dukaan.setPrice();
    lalu_ki_dukaan.setPrice();
    lalu_ki_dukaan.displayPrice();
    return 0;
}