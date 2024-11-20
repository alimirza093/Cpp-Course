#include <iostream>
using namespace std;

template <class t1 , class t2>

t2 avg(t1 a , t2 b){
    return (a+b)/2;
}

int main() {
cout<<"Average = "<<avg(2,3.2);
return 0;
}