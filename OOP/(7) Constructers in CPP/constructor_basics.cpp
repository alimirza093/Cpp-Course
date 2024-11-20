#include <iostream>
using namespace std;

class complex{

int a;
int b;

public:

complex(void){
   cout<<"Enter the Real Part Of Complex Number "<<endl;
   cin>>a;
   cout<<"Enter the Imaginary Part Of Complex Number "<<endl;
   cin>>b;
}

void printNumber(void){

cout<<a<<" + "<<b<<"i"<<endl;

}

};

int main() {

complex c1;

c1.printNumber();

return 0;
}