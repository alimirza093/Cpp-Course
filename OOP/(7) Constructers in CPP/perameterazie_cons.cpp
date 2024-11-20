#include <iostream>
using namespace std;

class point{
int a;
int b;

public:

point(int x  , int y){

a = x;
b = y;

}

void printPoint(void){

cout<<"Points are ("<<a<<","<<b<<")"<<endl;

}



};

// point :: point(int x , int y){

// x = a;
// y = b;

// }

int main() {

point p1(3,8);
p1.printPoint();



return 0;
}