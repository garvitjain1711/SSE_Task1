#include<iostream>
using namespace std;
int linear_search(int arr[],int x,int n){
    for(int i=0;i<n;i++){
        if(arr[i]==x){
            return i;
            break;
        }
    }
    return -1;
}
int main(){
    int n;
    cout<<"Enter the number of elements of the array : ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int target;
    cout<<"Enter the target element : ";
    cin>>target;
    int res = linear_search(arr,target,n);
    if(res==-1){
        cout<<"The given element is not present in the array"<<endl;
    }
    else{
        cout<<"The given element is present at position "<<res;
    }
    return 0;
}