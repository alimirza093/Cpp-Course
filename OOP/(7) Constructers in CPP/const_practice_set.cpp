#include <iostream>
#include <cmath> 
using namespace std;
class point
{
    int a;
    int b;

public:


    point(int, int);
    void printPoint();
    friend double calculateDistace(point  , point);
};

point ::point(int x, int y)
{
    
    a = x;
    b = y;
}

void point :: printPoint(){

cout<<"Points are ("<<a<<","<<b<<")"<<endl;

}

//Calculating Distance between 2 points
double calculateDistace(point p1, point p2)
{
    // Formula to calculate distance between two points is 
    // sqrt((x2 - x1)^2 + (y2 - y1)^2)
    return sqrt(pow(p2.a - p1.a, 2) + pow(p2.b - p1.b, 2));
}



int main()
{
    int x1,x2,y1,y2;
    cout<<"Enter the value of x1"<<endl;
    cin>>x1;
    cout<<"Enter the value of x2"<<endl;
    cin>>x2;
    cout<<"Enter the value of y1"<<endl;
    cin>>y1;
    cout<<"Enter the value of y2"<<endl;
    cin>>y2;
    point p1(x1 , x2);
    point p2(y1 , y2);
    p1.printPoint();
    p2.printPoint();
    double dis = calculateDistace(p1 , p2);
    cout<<"Distance = "<<dis<<endl;

    return 0;
}
