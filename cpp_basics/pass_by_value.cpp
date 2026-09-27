#include<iostream>
using namespace std;
void increment_Counter(int counter){
    counter+=5;
    cout<<"Value inside function : "<<counter<<endl;
}
int main(){
    int counter = 5;
    increment_Counter(counter);
    cout<<"Value inside int main : "<<counter<<endl;
    return 0;

}