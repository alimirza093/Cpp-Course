#include <iostream>
using namespace std;

class base1{
protected:
int val1;

public:

void setData1(int a){
val1 = a;
}
};

class base2{
protected:
int val2;

public:

void getData2(int a){
    val2 = a;
}


};
class base3{
protected:
int val3;

public:

void getData3(int a){
    val3 = a;
}


};
class base4{
protected:
int val4;

public:

void getData4(int a){
    val4 = a;
}


};
class derived : public base1 , public base2 , public base3 , public base4{

public:

void display(void){
    cout<<"The value of val1 is "<<val1<<endl;
    cout<<"The value of val2 is "<<val2<<endl;
    cout<<"The value of val3 is "<<val3<<endl;
    cout<<"The value of val4 is "<<val4<<endl;
}

};



int main() {
derived d1;
d1.setData1(10);
d1.getData2(33);
d1.getData3(70);
d1.getData4(88);
d1.display();
return 0;
}