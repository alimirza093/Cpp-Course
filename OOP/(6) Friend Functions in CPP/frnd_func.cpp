#include <iostream>
using namespace std;

class complex{

int a;
int b;

public:

friend complex setDataBySum(complex a1 , complex a2); 
void setData(int a , int b);
void showData(void);


};

complex setDataBySum(complex a1 , complex a2){
    complex a3;
    a3.setData((a1.a + a2.a) , (a1.b + a2.b));
    return a3;
}

void complex :: showData(void){
    cout<<a<<"+"<<b<<"i"<<endl;
}

int main() {
complex c1,c2,sum;

c1.setData(2,4);
c1.showData();
c2.setData(5,6);
c1.showData();
sum = setDataBySum(c1,c2);
sum.showData();
return 0;
}