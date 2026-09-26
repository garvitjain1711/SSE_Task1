#include<iostream>
using namespace std;
int main(){
    int age;
    cout<<"Enter your age : ";
    cin>>age;
    if(age<20){
        cout<<"Child";
    }
    else if(age<60){
        cout<<"Adult";
    }
    else{
        cout<<"Retired";
    }
    return 0;
}