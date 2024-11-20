#include <iostream>
using namespace std;

class Student{

int rollno;
int marks;
static int count;

public:

void getMarks(void);
void displayMarks(void);
static void staticFunction(void){

cout<<"The Value of Static variable is " <<count<<endl;

}

};

int Student :: count; 

void Student :: getMarks(){

cout<<"Enter Rollno"<<endl;
cin>>rollno;

cout<<"Enter marks"<<endl;
cin>>marks;

count ++;

}

void Student :: displayMarks(){

cout<<"The Rollno of the student "<<count<<" is "<<rollno<<" and marks are "<<marks<<endl;

}


int main() {

Student Ali,Asad,Haris;

Ali.getMarks();
Ali.displayMarks();
Student :: staticFunction();

Asad.getMarks();
Asad.displayMarks();
Student :: staticFunction();

Haris.getMarks();
Haris.displayMarks();
Student :: staticFunction();

return 0;
}