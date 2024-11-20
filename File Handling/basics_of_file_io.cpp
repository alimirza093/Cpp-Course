#include <iostream>
#include <fstream>
using namespace std;
int main() {
//Writing In File
string st = "This is Tutorial for File Handling In C++";
ofstream out("sample.txt");
out<<st;

//Reading from File
string st2;
ifstream in("sample2.txt");
getline(in , st2);
cout<<st2;


return 0;
}