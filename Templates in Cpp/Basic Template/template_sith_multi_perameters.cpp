#include <iostream>
using namespace std;
template <class T1 , class T2>
class sum{

public:

T1 num1 ;
T2 num2;

T2 calSum(void){
    return num1 + num2;
}


};

int main() {

sum <int , float> s1;

s1.num1 = 5.4;
s1.num2 = 9.1;

cout<<"Sum = "<<s1.calSum();


return 0;
}