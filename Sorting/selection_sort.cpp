#include<bits/stdc++.h>
using namespace std;
void selection_sort(int arr[], int n){
    for(int i=0;i<=n-2;i++){
        int minimum=i;
        for(int j=i;j<=n-1;j++){
            if(arr[minimum]>arr[j]){
                minimum=j;
                swap(arr[i],arr[minimum]);
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int n;
    cout<<"Enter the number of elements in the array : ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    selection_sort(arr,n);
    return 0;
}