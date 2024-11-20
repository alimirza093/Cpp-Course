#include <iostream>
using namespace std;
class complex;
class calculator
{

public:
    int sumRealPart(complex, complex);
    int sumImaginaryPart(complex, complex);
};

class complex
{

    int x;
    int y;

public:
    friend int calculator ::sumRealPart(complex o1, complex o2);
    friend int calculator ::sumImaginaryPart(complex o1, complex o2);
    void setData(int a, int b)
    {
        x = a;
        y = b;
    }
    void showData(void)
    {
        cout << x << "+" << y << "i" << endl;
    }
};

int calculator ::sumRealPart(complex a1, complex a2)
{
    return a1.x + a2.x;
}
int calculator::sumImaginaryPart(complex a1, complex a2)
{
    return a1.y + a2.y;
}

int main()
{

complex c1 , c2;
c1.setData(3,4);
c2.setData(6,9);
c1.showData();
c2.showData();

calculator cal;

int res1  = cal.sumRealPart(c1,c2);
cout<<"Sum of the Real part is "<<res1<<endl;
int res2 = cal.sumImaginaryPart(c1,c2);
cout<<"Sum of the Imaginary part is "<<res2<<endl;

    return 0;
}
