#include <iostream>
using namespace std;

class student
{

protected:
    int rollNo;

public:
    void getNo(int a)
    {
        rollNo = a;
    }
    void displayNo()
    {
        cout << "Your rollno is " << rollNo << endl;
    }
};

class theoryExam : virtual public student
{

protected:
    float math, physics;

public:
    void getMarks(float m1, float m2)
    {

        math = m1;
        physics = m2;
    }

    void displayMarks()
    {

        cout << "Your Result in theory is " << endl
             << "Maths = " << math << endl
             << "Physics = " << physics << endl;
    }
};

class practicalExam : virtual public student
{

protected:
    float marks;

public:
    void getPmarks(int pm)
    {
        marks = pm;
    }

    void displayPmarks()
    {

        cout << "Your Marks in Practical are " << marks << endl;
    }
};

class result : public theoryExam, public practicalExam
{

private:
    int result;

public:
    void display()
    {

        displayNo();
        displayMarks();
        displayPmarks();
        result = math + physics;
        cout << "Your Total Result is " << result << endl;
    }
};

int main()
{

    result r;
    r.getNo(536);
    r.getMarks(78.5, 65.2);
    r.getPmarks(8.3);
    r.display();

    return 0;
}

