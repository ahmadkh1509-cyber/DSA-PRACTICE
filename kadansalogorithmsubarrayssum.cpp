#include<iostream>
using namespace std;
int main(){
    int cs=0;int mxsum=INT_MIN;
    int n=7;
    int arr[]={1,2,-3,4,-5,5,6,-1};
    for (int i=0;i<=n;i++){
      cs+=arr[i];
      mxsum=max(cs,mxsum);
    } 
    cout<<mxsum;
}