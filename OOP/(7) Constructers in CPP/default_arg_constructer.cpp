#include <iostream>
using namespace std;

class complex{

int a, b;

public:

complex(int x , int y = 10){
    a = x;
    b = y;
}


void printNo(){
    cout<<a<<" + "<<b<<"i"<<endl;
}


};

int main() {
complex c1(7);
c1.printNo();

return 0;
}