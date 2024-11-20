#include <iostream>
#include <string>
using namespace std;

class binary
{
    string str;

public:
    void readBinary(void);
    void checkBinary(void);
    void onesCompliment(void);
    void display(void);
};

void binary :: readBinary(void)
{
    cout << "Enter a binary number: ";
    cin >> str;
}

void binary :: checkBinary(void){
for (int i = 0; i < str.length(); i++)
{
    if (str.at(i)!='1' && str.at(i)!='0')
    {
        cout<<"Invalid Binary Format"<<endl;
        exit(0);
    }
}
}

void binary::onesCompliment(void) {
    for (int i = 0; i < str.length(); i++) {
        if (str.at(i) == '0') {
            str.at(i) = '1';
        } else if (str.at(i) == '1') {
            str.at(i) = '0';
        }
    }
}

void binary :: display(void){
  for (int i = 0; i < str.length(); i++)
  {
    cout<<str.at(i);
  }
  

}

int main()
{
  binary b;
  b.readBinary();
  b.checkBinary();
  cout<<endl;
  cout<<"Displaying Binary Number"<<endl;
  b.display();
  cout<<endl;
  b.onesCompliment();
  cout<<"Displaying Binary Number After Once Compliment"<<endl;
  b.display();


    return 0;
}
