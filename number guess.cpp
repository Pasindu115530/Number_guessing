#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;

int main(){
    int x;
    int count = 5;

    srand(time(0));
    int guess = (rand() % 30) + 1;
    cout << "************Welcome to number guessing game********" << '\n';
  
   
do
{
    cout << "Can you guess the 1-30" << '\n';
    cin >> x;
    count=count-1;
    if (0>x || x>=30)
    {
      cout<<"Please dont do that dulan"<<'\n';
    }
    else{
    if (guess<x<30)
    {
        cout << "Too High"<<'\n';
        cout<<"Your remainig chance   :"<<count << '\n';
    }
    else if (guess>x>30)
    {       
        cout << "Too low!"<<'\n';
        cout<<"Your remainig chance   :"<<count << '\n';
    }
    else if (guess==x)
    {
        cout << "Congrates!You are correct!"<<'\n';
    }
    }
} while (guess!=x && count!=0);
cout<< "*******Thanks for Particpate******";

return 0;
}
