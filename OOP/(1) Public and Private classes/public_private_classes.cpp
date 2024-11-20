#include <iostream>
using namespace std;
class Employee{


  private:
  int a,b,c;

  public:
  int d,e,f;
  void getData();
  void showData(){
  cout<<"The value of a is "<<a<<endl;
  cout<<"The value of b is "<<b<<endl;
  cout<<"The value of c is "<<c<<endl;
  }
};
  void Employee :: getData(){
    cout<<"Enter the value of a"<<endl;
    cin>>a;
    cout<<"Enter the value of b"<<endl;
    cin>>b;
    cout<<"Enter the value of c"<<endl;
    cin>>c;
  }
int main() {
Employee Ali;
Ali.getData();
Ali.showData();
return 0;
}