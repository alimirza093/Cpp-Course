// #include <iostream>
// using namespace std;       
// int count = 0;
// class num{

// public:
// num(){
//     count ++;
//     cout<<"This is the time my Constructer is called "<<count<<endl;
// }

// ~num(){
//     cout<<"This is the time my Destructor is called "<<count<<endl;
//     count --;
// }




// };

// int main() {

// cout<<"Entering Main Function"<<endl;
// cout<<"Creating an object n1"<<endl;
// num n1;
// {
// cout<<"Entering in object n1"<<endl;
// cout<<"Creating two more objects n2 and n3"<<endl;
// num n2 , n3;
// cout<<"Exiting in object n1"<<endl;

// }
// cout<<"Back to the Main Function"<<endl;


// return 0;
// }

#include <iostream>
using namespace std;
int main() {
double sum = 2;
for (int i = 4; i <= 100; i=i+2)
{
    sum = sum + 2.0/i;
}
cout<<"sum = "<<sum;
return 0;
}