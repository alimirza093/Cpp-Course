#include <iostream>
using namespace std;
struct employ{
    int id;
    float sallery;
    char favChar;
};
int main() {
struct employ Ali;
Ali.sallery = 12000.655;
Ali.favChar = 'h';
Ali.id = 535;
cout<<"Sallery = " <<Ali.sallery<<endl;
cout<<"Id = " <<Ali.id<<endl;
cout<<"Favourite Character = " <<Ali.favChar<<endl;
return 0;
}