#include <iostream>
using namespace std;

class complex{

int real , imaginary;

public:

void setData(int a , int b){
    real = a;
    imaginary = b;
}
void getData(void){
    cout<<"Real Part "<<real<<endl;
    cout<<"Imaginary Part "<<imaginary<<endl;
}


};

int main() {
complex c1;
// complex *ptr = &c1;
//or
complex *ptr = new complex;
// (*ptr).setData(22,40);
//or
ptr->setData(22 , 40); //This ARROW OPERATER tells that firstly Derefrence the pointer and then call it's function that's why in this operater there is no need to defrence the pointer
// (*ptr).getData();
//or
ptr->getData();
return 0;
}