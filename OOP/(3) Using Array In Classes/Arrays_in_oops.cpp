// #include <iostream>
// using namespace std;
// class Shop
// {

//     public:
//     int itemId[100];
//     int itemPrice[100];
//     int count = 0;


//     void initCount(void);
//     void getInfo(void);
//     void displayInfo(void);
// };
// void Shop ::initCount(void)
// {
//     count = 0;
// }
// void Shop ::getInfo(void)
// {
//     cout << "Enter the ID of item " << count + 1 << endl;
//     cin >> itemId[count];
//     cout << "Enter the Price of item " << count + 1 << endl;
//     cin >> itemPrice[count];
//     count++;
// }
// void Shop ::displayInfo(void)
// {
//     for (int i = 0; i < count; i++)
//     {
//         cout << "The ID of Item " << i+1 << " is " << itemId[i] << " and the price is " << itemPrice[i] << endl;
//     }
// }

// int main()
// {
//     Shop dukan;
//     int item;
//     cout<<"Enter the amount of items in your shop"<<endl;
//     cin>>item;
//     // dukan.initCount();
//     for (int i = 0; i < item; i++)
//     {
//     dukan.getInfo();
//     }
//     dukan.displayInfo();
//     return 0;
// }


#include <iostream>
using namespace std;

class shop{

int itemPrice[100];
int id[100];
int count = 0;

public:

void getInfo(void);
void showInfo(void);
void initCount(void);


};
void shop :: initCount(void){
    count = 0;
} 

void shop :: getInfo(void){

cout<<"Enter the id of item "<<count + 1<<endl;
cin>>itemPrice[count];
cout<<"Enter the price of item "<<count + 1<<endl;
cin>>id[count];
count ++;
}

void shop :: showInfo(void){

    for (int i = 0; i < count; i++)
    {
    cout<<"The id of Item "<<i+1<<" is "<<id[i]<<" and the price is "<<itemPrice[i]<<endl;
    }
    

}

int main() {
shop karyana;
int items;
cout<<"Enter the number of items in your shop"<<endl;
cin>>items;
karyana.initCount();
for (int i = 0; i < items; i++)
{
    karyana.getInfo();
}
karyana.showInfo();

return 0;
}