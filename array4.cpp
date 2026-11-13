#include<iostream>
using namespace std ;
int getmax(int arr[] , int n){
    int max = arr[0];
    for(int i = 0 ; i<n;i++){
    if(max <arr[i]){
        max = arr[i];
    }
}
return max;
}
int getmin(int arr[] , int n){
    int min = arr[0];
    for(int i = 0 ; i<n;i++){
    if(min >arr[i]){
        min = arr[i];
    }
}
return min;
}
int main(){
int arr[] = {12, 5, 8, 2, 19, 4};
int n = sizeof(arr)/sizeof(arr[0]);
cout<<"Maximum element is: "<<getmax(arr,n)<<endl;
cout<<"Minimum element is: "<<getmin(arr,n)<<endl;


    return 0;
}