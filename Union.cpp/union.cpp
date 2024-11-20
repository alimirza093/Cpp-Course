#include <iostream>
using namespace std;
union payment
{
    /* data */
    int rupees;
    char favChar;
    float pounds;
};

int main() {
union payment m1;
m1.pounds = 90.37;
m1.favChar = 'h';
m1.rupees = 200;
cout<<m1.rupees;
return 0;
}