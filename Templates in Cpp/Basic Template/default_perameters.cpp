#include <iostream>
using namespace std;
template <class t1 = int , class t2 = float>
class sum{

public:

t1 a;
t2 b;

sum(t1 x , t2 y){

a = x;
b = y;

}

void Calsum(void){

    cout<<"Sum = "<<a+b<<endl;

}

};

int main() {

sum <> s1(1 , 3.4); //Default template
// sum <float , int> s1(1.9 , 3); //Also valid syntax
s1.Calsum();
return 0;
}