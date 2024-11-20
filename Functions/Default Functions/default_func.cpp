#include <iostream>
using namespace std;
int marksCal(int marks , float factor = 1.3){
    return marks*factor;
}
int main() {
    int marks;
    cout<<"Enter Marks"<<endl;
    cin>>marks;
for (int i = 500; i <= 560; i++)
    {
        if (i==536 || i==520 || i==542)
        {
            cout<<"Your Roll no is "<<i<<" So you got "<<marksCal(marks , 1.4)<<" marks"<<endl;
        }
        else{
            cout<<"Your Roll no is "<<i<<" So you got "<<marksCal(marks)<<" marks"<<endl;
        }
        
    }
return 0;
}