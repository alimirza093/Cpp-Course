#include <iostream>
#include <cmath>
using namespace std;

class simpleCalculator
{

    int a, b;
    char op;

public:
    void setData(int, int, char);
    void calculate();
};

void simpleCalculator ::setData(int x, int y, char operater)
{
    a = x;
    op = operater;
    b = y;
}
void simpleCalculator ::calculate()
{

    switch (op)
    {
    case '+':
        cout << a << " + " << b << " = " << a + b << endl;
        break;
    case '-':
        cout << a << " - " << b << " = " << a - b << endl;
        break;
    case '*':
        cout << a << " * " << b << " = " << a * b << endl;
        break;
    case '/':
        if (b == 0)
        {
            cout << "Invalid Input !!!" << endl;
            cout << "Can't divide by 0" << endl;
        }
        else
        {

            cout << a << " / " << b << " = " << a / b << endl;
        }
        break;

    default:
        cout << "Invalid Input !!!" << endl;
        break;
    }
}

class scientficCal
{

public:
    void sinc(double);
    void cosc(double);
    void tanc(double);
    void expc(double);
};

void scientficCal ::sinc(double x)
{
    cout << "sin(" << x << ") = " << sin(x * M_PI / 180) << endl;
}
void scientficCal ::cosc(double x)
{

    cout << "cos(" << x << ") = " << cos(x * M_PI / 180) << endl;
}
void scientficCal ::tanc(double x)
{

    cout << "tan(" << x << ") = " << tan(x * M_PI / 180) << endl;
}
void scientficCal ::expc(double x)
{

    cout << "exp(" << x << ") = " << exp(x) << endl;
}

class hybriccalculator : public simpleCalculator, public scientficCal
{
};

int main()
{
    int choice;
    int a, b;
    char op;
    double angle;
    cout << "Welcome To Calculater" << endl;
    cout << "Menu......" << endl;
    cout << "1. Addition" << endl;
    cout << "2. Subtraction" << endl;
    cout << "3. Multplication" << endl;
    cout << "4. Division" << endl;
    cout << "5. Sin" << endl;
    cout << "6. Cos" << endl;
    cout << "7. Tan" << endl;
    cout << "8. Exponential" << endl;
    cin >> choice;
    if (choice >= 1 && choice <= 4)
    {
        hybriccalculator simpleCal;
        cout << "Enter first Number then enter an operator then enter second number" << endl;
        cin >> a >> op >> b;
        simpleCal.setData(a, b, op);
        simpleCal.calculate();
    }
    else if (choice == 5)
    {

        cout << "Enter Angle" << endl;
        cin >> angle;
        hybriccalculator scientfic1;
        scientfic1.sinc(angle);
    }
    else if (choice == 6)
    {

        cout << "Enter Angle" << endl;
        cin >> angle;
        hybriccalculator scientfic2;
        scientfic2.cosc(angle);
    }
    else if (choice == 7)
    {

        cout << "Enter Angle" << endl;
        cin >> angle;
        hybriccalculator scientfic3;
        scientfic3.tanc(angle);
    }

    else if (choice == 8)
    {

        cout << "Enter the value of x" << endl;
        cin >> angle;
        hybriccalculator scientfic4;
        scientfic4.expc(angle);
    }
    else
    {
        cout << "Invalid Input" << endl;
    }

    return 0;
}
