#include <iostream>
using namespace std;

class base1
{

    int data1;

public:
    base1(int a)
    {
        data1 = a;
        cout << "Base1 constructer called !!!" << endl;
    }

    void showBase1(void)
    {
        cout << "The value of data1 is " << data1 << endl;
    }
};

class base2
{

    int data2;

public:
    base2(int a)
    {
        data2 = a;
        cout << "Base2 constructer called !!!" << endl;
    }

    void showBase2(void)
    {
        cout << "The value of data2 is " << data2 << endl;
    }
};

class derived : public base1 , public base2{

    int derived1;
    int derived2;

public:

derived(int a, int b , int c , int d):base1(a),base2(b){
    cout<<"Derived class counstructer called"<<endl;
    derived1 = c;
    derived2 = d;
}

void showDerived(void){
    cout<<"The value of derived1 is "<<derived1<<endl;
    cout<<"The value of derived2 is "<<derived2<<endl;
}

};

int main()
{

    derived d(1, 2, 3, 4);
    d.showBase1();
    d.showBase2();
    d.showDerived();

    return 0;
}