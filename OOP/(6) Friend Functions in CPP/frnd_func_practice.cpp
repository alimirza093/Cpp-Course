#include <iostream>
using namespace std;
class c2;
class c1{

int val1;

public:

friend void swap(c1 &x ,c2 &y);

void setData(int a){
    val1 = a;
}
void getData(void){
    cout<<"The value of a before swap is "<<val1<<endl;
}


};
class c2{

int val2;

public:
friend void swap(c1 &x ,c2 &y);
void setData(int a){
    val2 = a;
}
void getData(void){
    cout<<"The value of b before swap is "<<val2<<endl;
}


};

void swap(c1 &x ,c2 &y){
    int temp;
    temp = x.val1;
    x.val1 = y.val2;
    y.val2 = temp;
    cout<<"The value of a before swap is "<<x.val1<<endl;
    cout<<"The value of b before swap is "<<y.val2<<endl;
}


int main() {

c1 class1;
class1.setData(12);
class1.getData();

c2 class2;
class2.setData(24);
class2.getData();


swap(class1 , class2);

return 0;
}