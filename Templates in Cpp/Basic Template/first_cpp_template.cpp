#include <iostream>
using namespace std;
template <class T>
class vector{

public:

int size;
T *arr;

vector(int s){
    size = s;
    arr = new T[size];
}

T dotProduct(vector &v){
    T d = 0;
    for (int i = 0; i < size; i++)
    {
    d += this->arr[i] * v.arr[i];
    }
    return d;
    
}


};

int main() {
vector <float> v1(3);
v1.arr[0] = 3.3;
v1.arr[1] = 9.3;
v1.arr[2] = 0.3;

vector <float> v2(3);
v2.arr[0] = 6.3;
v2.arr[1] = 1.3;
v2.arr[2] = 0.3;

cout<<"Dot Product : "<<v1.dotProduct(v2);
return 0;
}