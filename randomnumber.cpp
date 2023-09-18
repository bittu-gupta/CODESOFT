#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main(){
  int rand_num , guess_num ,tries=0;
  srand(time(0)) ;  //  seed number generator provide a different random number each time
  rand_num = 1 + (rand() % 100) ; //Random number generator between 1 to 100
  while(rand_num != guess_num){
    tries++;
    cout<<"Enter the guess number by user"<<endl;
    cin>>guess_num;
    if(rand_num < guess_num){
      cout<<"you guessed Too high"<<endl;

    }
    else if(rand_num > guess_num){
        cout<<"you guessed Too low"<<endl;
    }
    else{
      cout<<" Correct , you guessed correct in tries of "<<tries<<endl;
    }
  }
  return 0;
}