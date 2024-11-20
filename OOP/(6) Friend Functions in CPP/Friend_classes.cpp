#include <iostream>
using namespace std;

// Forward Declaration
class Complex;

class calculator
{

public:
    int add(int a, int b)
    {
        return (a + b);
    }

    int sumRealPart(Complex, Complex);
    int sumImagPart(Complex, Complex);
};

class Complex
{

    int a;
    int b;

public:
    // friend int calculator ::sumRealPart(Complex o1, Complex o2);
    // friend int calculator ::sumImagPart(Complex o1 , Complex o2);
    //Here i can make friend whole class instead of making each function individually
     
     friend class calculator;

    void setData(int a1, int b1);
    void showData(void);
};

int calculator ::sumRealPart(Complex o1, Complex o2)
{
    return (o1.a + o2.a);
}

int calculator :: sumImagPart(Complex o1 , Complex o2){

return (o1.b + o2.b);

}

void Complex ::setData(int a1, int b1)
{
    a = a1;
    b = b1;
}

void Complex ::showData(void)
{

    cout << a << "+" << b << "i" << endl;
}

int main()
{
    Complex c1, c2;
    c1.setData(4, 5);
    c1.showData();

    c2.setData(9, 2);
    c2.showData();

    calculator cal;

    int res = cal.sumRealPart(c1, c2);
    cout << "The Sum of real part is " << res << endl;
    int res2 = cal.sumImagPart(c1 , c2);
    cout << "The Sum of Imaginary part is " << res2 << endl;
    return 0;
}