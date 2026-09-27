#include<iostream>
using namespace std;
int main(){
    int x = 2;
    float y = 3.45;
    double z = 5.7856485;
    char ch = 'b';
    cout<<"Size of int : "<<sizeof(x)<<" bytes"<<endl;
    cout<<"Size of float : "<<sizeof(y)<<" bytes"<<endl;
    cout<<"Size of double : "<<sizeof(z)<<" bytes"<<endl;
    cout<<"Size of char : "<<sizeof(ch)<<" bytes"<<endl;

    return 0;
}