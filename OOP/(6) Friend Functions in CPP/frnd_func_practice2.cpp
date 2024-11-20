#include <iostream>
using namespace std;

class ICT;

class programming;

class math{

int marks;

public:
friend int  SumAllMarks(math , ICT , programming);
friend int CalculateAverage(math marks1 , ICT marks2 , programming marks3);
friend void assignGrades(math marks1 , ICT marks2 , programming marks3);
void getMarks(void){
    cout<<"Enter the marks of Math subject out of 100"<<endl;
    cin>>marks;
}
void showMarks(void){
    cout<<"The marks of Math Subject is "<<marks<<endl;
}
};
class ICT{


int marks;

public:
friend int  SumAllMarks(math , ICT , programming);
friend int CalculateAverage(math marks1 , ICT marks2 , programming marks3);
friend void assignGrades(math marks1 , ICT marks2 , programming marks3);
void getMarks(void){
    cout<<"Enter the marks of ICT subject out of 100"<<endl;
    cin>>marks;
}
void showMarks(void){
    cout<<"The marks of ICT Subject is "<<marks<<endl;
}

};
class programming{


int marks;

public:
friend int  SumAllMarks(math , ICT , programming);
friend int CalculateAverage(math marks1 , ICT marks2 , programming marks3);
friend void assignGrades(math marks1 , ICT marks2 , programming marks3);



void getMarks(void){
    cout<<"Enter the marks of Pregramming subject out of 100"<<endl;
    cin>>marks;
}
void showMarks(void){
    cout<<"The marks of Programming Subject is "<<marks<<endl;
}

};

int SumAllMarks(math marks1 , ICT marks2 , programming marks3){
    return (marks1.marks + marks2.marks + marks3.marks);
}

int CalculateAverage(math marks1 , ICT marks2 , programming marks3){
    return ((marks1.marks + marks2.marks + marks3.marks)/3);
}
void assignGrades(math marks1 , ICT marks2 , programming marks3){
    int totalMarks = marks1.marks + marks2.marks + marks3.marks;
    if (totalMarks>=250 && totalMarks<=300)
    {
        cout<<"Your marks are "<<totalMarks<<" and you got A+ Grade"<<endl;
    }
    else if(totalMarks >= 200 && totalMarks < 250){
        cout<<"Your marks are "<<totalMarks<<" and you got A Grade"<<endl;
    }
    else if(totalMarks >= 100 && totalMarks <150){
        cout<<"Your marks are "<<totalMarks<<" and you got B Grade"<<endl;
    }
    else if(totalMarks<100){
        cout<<"Your marks are "<<totalMarks<<" and you got F Grade"<<endl;
    }
    else{
        cout<<"You are failed"<<endl;
    }
}
int main() {
math m1;
m1.getMarks();

ICT i;
i.getMarks();

programming p;
p.getMarks();

m1.showMarks();
i.showMarks();
p.showMarks();

int total = SumAllMarks(m1,i,p);
int avg = CalculateAverage(m1, i ,p);

cout<<"Total marks = "<<total<<endl;
cout<<"Average = "<<avg<<endl;

assignGrades(m1 , i, p);
return 0;
}