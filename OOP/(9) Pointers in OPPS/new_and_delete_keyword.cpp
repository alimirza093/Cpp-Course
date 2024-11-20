#include <iostream>
using namespace std;
int main() {
// int a = 5;
// int *ptr = &a;
// cout<<"The Adress of a is "<<ptr<<endl;
// //De-refrencing
// cout<<"The value at Adress of a is "<<*(ptr)<<endl;

//new keyword

int *p1 = new int(56);
delete p1;
cout<<"The Adress of new int is "<<p1<<endl;
cout<<"The value at Adress of new int is "<<*(p1)<<endl;


float *p2 = new float(56.67);
delete p2;
cout<<"The Adress of new float is "<<p2<<endl;
cout<<"The value at Adress of new float is "<<*(p2)<<endl;


int *p3 = new int[3]; 
p3[0] = 1;
p3[1] = 2;
p3[2] = 3;
delete[] p3;

cout<<"The value of arr[0] is "<<p3[0]<<endl;
cout<<"The value of arr[1] is "<<p3[1]<<endl;
cout<<"The value of arr[2] is "<<p3[2]<<endl;

//delete keyword


return 0;
}