#include <iostream>
using namespace std;

class complex{

int a;
int b;

public:

void setData(int x , int y);
void setDataBySum(complex , complex);
void display(void);

};

void complex :: setData(int x , int y){
a = x;
b = y;
}

void complex :: setDataBySum(complex a1 , complex a2){
a = a1.a + a2.a;
b = a1.b + a2.b;
}

void complex :: display(void){
    cout<<"The sum of your Complex Number is : "<<a<<"+"<<b<<"i"<<endl;
}


int main() {
int rp1, rp2, ip1,ip2; 
cout<<"Enter the real part of First complex number"<<endl;
cin>>rp1;
cout<<"Enter the Imaginary part of First complex number"<<endl;
cin>>ip1;
cout<<"Enter the real part of Second complex number"<<endl;
cin>>rp2;
cout<<"Enter the Imaginary part of Second complex number"<<endl;
cin>>ip2;

complex c1 , c2 , c3;
c1.setData(rp1 , ip1);
c2.setData(rp2 , ip2);
c3.setDataBySum(c1, c2);
c3.display();
return 0;
}


