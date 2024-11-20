#include <iostream>
using namespace std;

class complex{

int a, b;

public:

complex(int x , int y){
    a = x;
    b = y;
}

complex(int x){
    a = x;
    b = 0;
}

void printNo(){
    cout<<a<<" + "<<b<<"i"<<endl;
}


};

int main() {
complex c1(7 , 9);
c1.printNo();

complex c2(6);
c2.printNo();

return 0;
}