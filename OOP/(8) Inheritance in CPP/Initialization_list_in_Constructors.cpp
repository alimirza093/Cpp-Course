#include <iostream>
using namespace std;

class Ali{

int b;
int a;

public:

Ali(int i ,int j) : b(j),a(b*i){
    cout<<"Constructor Executed !!!"<<endl;
    cout<<"The value of a is "<<a<<endl;
    cout<<"The value of b is "<<b<<endl;
}


};

int main() {


Ali Hamda(2,5);

return 0;
}