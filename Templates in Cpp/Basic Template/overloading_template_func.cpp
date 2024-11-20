#include <iostream>
using namespace std;

void func(int a)
{
    cout << "This is simple func " << a << endl;
}

template <class T1>

void func(T1 a)
{
    cout << "This is template func " << a << endl;
}
template <class T1>

void func1(T1 a)
{
    cout << "This is template func1 " << a << endl;
}

int main()
{
    func(10); // It will give first priority to simple function
    func1(20);
    return 0;
}