#include<iostream>
using namespace std ;
int getsearch(int arr[],int n ,int target){
    for(int i = 0 ; i<n;i++){
        if (arr[i]==target){
return i;
cout << "target found at index: "<<i<<endl;        }
    }
    return -1; // Target not found
}
int main(){
int arr[] = {10, 25, 30, 45, 50};
int target ;
cout << "enter the target: ";
cin >> target;
int n = sizeof(arr)/ sizeof(arr[0]);
cout <<getsearch(arr,n,target)<<endl;
    return 0 ;
}