// #include <iostream>
// using namespace std;

// class bank{

// int principleAmmount;
// int years;
// int returnValue;
// float intersterate;
// public:

// bank(){};
// bank(int p , int y , float r);
// bank(int p , int y , int R);
// void show(void);

// };

// bank :: bank(int p , int y , float r){

// principleAmmount = p;
// years = y;
// intersterate = r;
// returnValue = principleAmmount;

// for (int i = 0; i < y; i++)
// {

// returnValue = returnValue * (1+intersterate);

// }

// }

// bank :: bank(int p , int y , int R){

// principleAmmount = p;
// years = y;
// intersterate = float(R)/100;
// returnValue = principleAmmount;

// for (int i = 0; i < y; i++)
// {

// returnValue = returnValue * (1+intersterate);

// }

// }

// void bank :: show(void){

// cout<<"You deposit RS "<<principleAmmount<<" for "<<years<<" years "<<" and now you will get RS "<<returnValue<<endl;

// }

// int main() {
// int years;
// int principleAm;
// float interst;
// int Interst;

// cout<<"Enter amount of money you want to deposit"<<endl;
// cin>>principleAm;
// cout<<"Enter years you want to keep money"<<endl;
// cin>>years;
// cout<<"Enter Interste rate"<<endl;
// cin>>interst;

// bank b1(principleAm , years , interst);
// b1.show();

// cout<<"Enter amount of money you want to deposit"<<endl;
// cin>>principleAm;
// cout<<"Enter years you want to keep money"<<endl;
// cin>>years;
// cout<<"Enter Interste rate"<<endl;
// cin>>Interst;

// bank b2(principleAm , years , Interst);
// b2.show();

// return 0;
// }

#include <iostream>
using namespace std;

class bank
{
    int years;
    int principleAmount;
    float intrestRate;
    int returnMoney;

public:
    bank(int y, int p, float r);
    bank(int y, int p, int R);
    void show(void);
};

bank ::bank(int y, int p, float r)
{
    years = y;
    principleAmount = p;
    intrestRate = r;
    returnMoney = principleAmount;
        for (int i = 0; i < y; i++)
        {
            returnMoney = returnMoney * (1 + intrestRate);
        }
}
bank ::bank(int y, int p, int R)
{
    years = y;
    principleAmount = p;
    intrestRate = float(R)/100;
    returnMoney = principleAmount;
        for (int i = 0; i < y; i++)
        {
            returnMoney = returnMoney * (1 + intrestRate);
        }
}
void bank :: show(void){
    if (intrestRate>=0 && intrestRate<1)
    {
    cout<<"You deposit RS: "<<principleAmount<<" and you will get RS: "<<returnMoney<<" after "<<years<<" years on the Intrest rate of "<<intrestRate*100<<"%"<<endl;
    }
    else if (intrestRate>=1)
    {
    cout<<"You deposit RS: "<<principleAmount<<" and you will get RS: "<<returnMoney<<" after "<<years<<" years on the Intrest rate of "<<intrestRate<<"%"<<endl;
        
    }
    
    
}
int main()
{
int year;
int priAmount;
float intrest;
int Intrest;

cout<<"Enter amount of money you want to deposit"<<endl;
cin>>priAmount;
cout<<"Enter years you want to keep money"<<endl;
cin>>year;
cout<<"Enter Interste rate (as a float, e.g., 0.05 for 5%)"<<endl;
cin>>intrest;
bank b1(year , priAmount , intrest);
b1.show();

cout<<"Enter amount of money you want to deposit"<<endl;
cin>>priAmount;
cout<<"Enter years you want to keep money"<<endl;
cin>>year;
cout<<"Enter Interste rate (as an int, e.g., 5 for 5%)"<<endl;
cin>>Intrest;
bank b2(year , priAmount , Intrest);
b2.show();
    return 0;
}