// find the secound largest element in array
#include <iostream>
#include <climits>
using namespace std;

int main() {
int arr[]={2,3,5,6,4};
int large= INT_MIN;
int sec =INT_MIN;
for(int i=0;i<5;i++){
    if(large<arr[i]){
    sec = large;
    large = arr[i];
}
else if( sec<arr[i] && large>arr[i]){
     sec = arr[i];
}
}
    cout<<"largest is "<<large<<endl;
    cout << "secound is "<<sec<<endl;
    return 0;
}