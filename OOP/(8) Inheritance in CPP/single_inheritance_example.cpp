#include <iostream>
using namespace std;

class base{

int data1;

public:

int data2;

void setData();
int getData1();
int getData2();

};

void base :: setData(){

data1 = 15;
data2 = 6;

}

int base ::  getData1(){

return data1;

}
int base ::  getData2(){

return data2;

}

class derived : private base{

int data3;

public:

void process();
void display();


};

void derived :: process(){
    
setData();

data3 = data2 * getData1();

}

void derived :: display(){

cout<<"The value of Data 1 is "<<getData1()<<endl;
cout<<"The value of Data 2 is "<<data2<<endl;
cout<<"The value of Data 3 is "<<data3<<endl;


}

int main() {

derived d1;
// d1.setData();
d1.process();
d1.display();


return 0;
}