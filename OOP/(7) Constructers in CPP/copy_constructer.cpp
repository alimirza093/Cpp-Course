#include <iostream>
using namespace std;

class number{

int a;

public:

number(){
    a=0;
}


number(int num){
    a=num;
}

void show(){

cout<<"Your Number is "<<a<<endl;

}
// if there is no copy constructer then compiler privide it's own copy constructer
number(number &n){

cout<<"Constructer Copied !!!"<<endl;

a = n.a;


}

};

int main() {

number n1(299) , n2 , n3(73);
n1.show();
n2.show();
n3.show();

number n4(n3);
n4.show();

number n5 = n1;
n5.show();

return 0;
}
