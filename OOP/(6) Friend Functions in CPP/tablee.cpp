// #include <iostream>
// using namespace std;

// class table{
// int sum = 0;
// int pro;
// int n;

// public:

// friend int printSum(table);

// table(int);

// void printTable();

// };

// table :: table(int x){

// n = x;

// }

// void table :: printTable(){
// for (int i = 1; i <= 10; i++)
// {
//     pro = n * i;
//     cout<<n<<" X "<<i<<" = "<<pro<<endl;
//     sum = sum + pro;
// }


// }


// int printSum(table val){
// return val.sum;
// }

// int main() {

// int no;
// cout<<"Enter a number you want to print table"<<endl;
// cin>>no;

// table t1(no);
// t1.printTable();

// int sum = printSum(t1);
// cout<<"Sum of the last occurances of table "<<no<<" is "<<sum<<endl;

// return 0;
// }


#include <iostream>
using namespace std;

class table{

int x;
int sum = 0;
int pro;

public:
friend int printSum(table);
table(int a){
    x = a;
}
void printTable(void){
    for (int i = 1; i <= 10; i++)
    {
    pro = x*i;
    cout<<x<<" X "<<i<<" = "<<pro<<endl;
    sum = sum + pro;
    }
    
}

};


int printSum(table x){
    return x.sum;
}

int main() {
int n;
cout<<"Enter a Number"<<endl;
cin>>n;
table t1(n);
t1.printTable();
int sum = printSum(t1);
cout<<"Sum of the last occurances of table "<<n<<" is "<<sum<<endl;
return 0;
}