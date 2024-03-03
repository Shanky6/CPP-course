#include<iostream>
using namespace std;

class shopItem{
    string itemName;
    int Id;
    float price;
    public : 
        void setData( string c, int a, float b){
            Id = a;
            price = b;
            itemName = c;
        }
        void getData(void){
            cout<<"The name of this Item is : "<<itemName<<endl;
            cout<<"The code of this Item is : "<<Id<<endl;
            cout<<"The price of this Item is : "<<price<<endl;
        }
};

int main(){
    int size;
    cout<<"Enter the number of items, you want store : "<<endl;
    cin>>size;
    shopItem *ptr = new shopItem[size];
    shopItem *ptr2 = ptr;
    int i, p;
    float q;
    string n;
   

    for ( i = 1; i <= size; i++)
    {
        cout<<"Enter the name of Item no. "<<i<<endl;
        cin>>n;
        cout<<"Enter the Id of Item no. "<<i<<endl;
        cin>>p;
        cout<<"Enter the Price of Item no. "<<i<<endl;
        cin>>q;
        ptr->setData(n, p, q);
        ptr++;
    }

    for ( i = 1; i <= size; i++)
    {
        cout<<"Item Number "<<i<<" Detail is : "<<endl;
        ptr2->getData();
        ptr2++;
    }
    
    

    return 0;
}