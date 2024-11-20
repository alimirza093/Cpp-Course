#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main() {
ofstream out;
out.open("new.txt");
out<<"These lines are sent by C++ Program"<<endl;
out<<"These lines are sent by C++ Program"<<endl;
out<<"These lines are sent by C++ Program"<<endl;
out.close();
string str;
ifstream in;
in.open("new.txt");
while (in.eof() == 0)
{
getline(in , str);
cout<<str<<endl;
}
in.close();

return 0;
}