// #include <iostream>
// using namespace std;

// class Employee{

// int id;

// public:

// void getID(void){
//     cout<<"Enter ID"<<endl;
//     cin>>id;
// }

// void showID(void){
//     cout<<"ID of this employee is = "<<id<<endl;
// }

// };

// int main() {

// Employee fb[5];
// for (int i = 0; i < 5; i++)
// {
//  fb[i].getID();
//  fb[i].showID();

// }


// return 0;
// }
 #include <iostream>
 using namespace std;

class batsmen{

int score;
int static count;
public:

void getScore(void){
cout<<"Enter the score of Batsman "<<count+1<<endl;
cin>>score;
count ++;
}
void displayScore(void){
    cout<<"The score of batsman "<<count<<" is "<<score<<endl;
}


};
int batsmen :: count;

 int main() {
 batsmen pak[11];
 for (int i = 0; i < 11; i++)
 {
    pak[i].getScore();
    pak[i].displayScore();
 }
 
 return 0;
 }

