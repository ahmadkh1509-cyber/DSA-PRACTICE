// move all zeros to the right 
#include<iostream>
using namespace std;
int main(){
    int arr[]={1,0,3,0,5,7,0};
    int size=sizeof(arr)/sizeof(arr[0]);
    int j=size-1;
    int i=0;

    while(i<j){
        {
         
         if(arr[j]==0){
            
            j--;
         }
         else if(arr[i]==0){

          int temp=arr[j];
          arr[j]=arr[i];
          arr[i]=temp;
          i++;
          j--;
          
         }
         else{
            i++;
         }


       
         
        }
    }
      for(int i=0;i<size;i++){
             cout<<arr[i];
          }
    
}
