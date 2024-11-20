#include <iostream>
#include <fstream>

using namespace std;
int main() {
string name;
cout<<"Enter Name"<<endl;
getline(cin , name);
ofstream Aout("sample.txt");
Aout<<name;


return 0;
}
