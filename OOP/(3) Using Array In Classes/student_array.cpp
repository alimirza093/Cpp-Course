#include <iostream>
using namespace std;
class Students{

public:

int stdRollno[50];
int stdMarks[50];
void getInfo(void);
void displayInfo(void);
int  count = 0;

};

void Students :: getInfo(void){

cout<<"Enter the Rollno of student "<<count + 1<<endl;
cin>>stdRollno[count];
cout<<"Enter the Marks of student "<<count + 1<<endl;
cin>>stdMarks[count];
count++;

}

void Students :: displayInfo(void){
    for (int i = 0; i < count; i++)
    {
   
     cout<<"The marks of RollNo "<<stdRollno[i]<<" is "<<stdMarks[i]<<endl;

    }
    
}

int main() {

Students bscs;
int std;
cout<<"Enter the total students of class"<<endl;
cin>>std;
for (int i = 0; i < std; i++)
{
bscs.getInfo();
}
bscs.displayInfo();

return 0;
}
