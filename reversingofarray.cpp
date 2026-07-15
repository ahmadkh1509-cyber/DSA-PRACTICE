//we will reverse an array and remember the timecomlexity
#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5,6,7};
    int s=sizeof(arr)/sizeof(arr[0]);
    int j=s-1;
    
    for (int i=0;i<s/2;i++){
      int temp=arr[i];
      arr[i]=arr[j];
      arr[j]=temp;
      j--; 
    }
    for (int k=0;k<s;k++){
        cout<<arr[k];
    }
}