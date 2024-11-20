#include <iostream>
using namespace std;

class student{

protected:
int rollNo;
public:
void getrollNo(int);
void showrollNo(void);

};

void student :: getrollNo(int r){

rollNo = r;

}

void student :: showrollNo(void){

cout<<"The Roll Number is "<<rollNo<<endl;

}

class exam : public student{

protected:

float math;
float physics;

public:

void getMarks(float , float);
void showMarks(void);

};

void exam :: getMarks(float m1, float m2){

math = m1;
physics = m2;

}

void exam :: showMarks(void){

cout<<"The marks of Math is "<<math<<endl<<"The marks of Physics is "<<physics<<endl;

}

class result : public exam{

protected:

int percentage;

public:

void displayResult(void);

};

void result :: displayResult(void){

showrollNo();
showMarks();

cout<<"Your result is "<<(math + physics)/2<<"%"<<endl;

}

int main() {

result r1;
r1.getrollNo(536);
r1.getMarks(80.0 , 77.5);
r1.displayResult();

return 0;
}
