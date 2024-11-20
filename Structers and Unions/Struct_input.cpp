#include <iostream>
using namespace std;
struct employ{
    int id;
    float sallery;
    char favChar;
};
int main() {
struct employ Ali;
cout<<"Enter ID"<<endl;
cin>>Ali.id;
cout<<"Enter Sallery"<<endl;
cin>>Ali.sallery;
cout<<"Enter Favourite Character"<<endl;
cin>>Ali.favChar;
cout<<"Id = " <<Ali.id<<endl;
cout<<"Sallery = " <<Ali.sallery<<endl;
cout<<"Favourite Character = " <<Ali.favChar<<endl;
return 0;
}