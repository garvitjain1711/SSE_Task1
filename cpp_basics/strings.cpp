#include<iostream>
#include<string>
using namespace std;
int main() {
    string name = "My name is Garvit Jain";
    cout<<name<<endl;
    cout<<"Enter your name : ";
    getline(cin,name);
    cout<<"Your name is "<<name;
    return 0;
}