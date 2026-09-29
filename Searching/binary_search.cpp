#include<iostream>
using namespace std;
int binary_search(int arr[],int n,int x){
    int low = 0;
    int high = n-1;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(arr[mid]==x){
            return mid;
        }
        else if(arr[mid]>x){
            high = mid - 1;
        }
        else if(arr[mid]<x){
            low = mid + 1;
        }
    }
    return -1;
}
int main(){
    int n;
    cout<<"Enter the number of elements in the array : ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter the target element : ";
    int target;
    cin>>target;
    int res = binary_search(arr,n,target);
    if(res==-1){
        cout<<"The given element is not present in the array.";
    }
    else{
        cout<<"The given element is present at position "<<res;
    }
    return 0;
}