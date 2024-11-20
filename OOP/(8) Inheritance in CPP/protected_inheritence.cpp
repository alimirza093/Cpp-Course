#include <iostream>
using namespace std;

class base
{

protected:
    int a;

private:
    int b;

public:
    int c;
};

class derived : protected base
{
public:
void setdata(){
    a = 8;
    c = 10;
}
void show(){
    cout<<"A = "<<a<<endl<<"C = "<<c<<endl;
}

};

int main()
{

derived d;
base b;
d.setdata();
d.show();
// cout<<b.a;

    return 0;
}