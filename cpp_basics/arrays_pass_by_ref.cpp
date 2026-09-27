#include<iostream>
using namespace std;
void changeValue(int arr[],int n){
    arr[1]=3;
    cout<<"Value of second element inside function : "<<arr[1]<<endl;
}
int main(){
    int n=5;
    int arr[n] = {1,2,3,4,5};
    changeValue(arr,n);
    cout<<"Value of second element inside int main : "<<arr[1]<<endl;
    return 0;
}