#include<iostream>
using namespace std;
int sum(int a, int b, int c){
    return a+b+c;
}
int main(){
    int a,b,c;
    cout<<"Enter the values of a, b and c : ";
    cin>>a>>b>>c;
    int result = sum(a,b,c);
    cout<<"The sum of a, b and c is "<<result;
    return 0;
}