#include <iostream>
using namespace std;

class marks
{
    int rollno;
    float computer;

public:
    void setData(int a, float b)
    {
        rollno = a;
        computer = b;
    }
    void getData(void)
    {
        cout << "Roll no " << rollno << endl;
        cout << "Marks " << computer << endl;
    }
};

int main()
{
    int students, rollno;
    float mark;
    cout << "Enter students" << endl;
    cin >> students;
    marks *ptr = new marks[students];
    marks *tempPtr = ptr;
    for (int i = 0; i < students; i++)
    {
        cout << "Enter the rollno of student " << i + 1 << endl;
        cin >> rollno;
        cout << "Enter the marks of student " << i + 1 << endl;
        cin >> mark;
        ptr->setData(rollno , mark);
        ptr++;
    }
    for (int i = 0; i < students; i++)
    {
        cout<<"Student "<<i+1<<endl;
        tempPtr->getData();
        tempPtr++;
    }
    


    return 0;
}