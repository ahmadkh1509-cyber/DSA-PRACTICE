
// we HAVE THIS PROBLEM IN EHICH WE HAVE TO MAKE THE MAKE CONTAINER BY USING TWO ARRAYS INDEX AND CHECH THAT WHICH CONTAINER HAD MORE WATER MEANS THERE AREA WHICH WILL BE CALCULATED WITH THE HELP OF WIDTH AND HEIGHT SO WE WILL HAVE AN ARRAY SO WE WILL MAKE THE CONTAINER ACCORDIGNLIY SO WE WILL USE THE TWO PONTER APPROCH IN ORDER TO MANAGE THE TIMECOPLEXITY 
#include<iostream>
using namespace std;
int main(){
    int arr[]={1,4,7,8,9,6,5,9,8};
    int n=sizeof(arr)/sizeof(arr[0]);
    int lind=0,rind=n-1;int maxheight=0;
    // hum isko 2 loops se b kr skty hian but humei time complexity lo b dekhna hai to hum apna concept yad rakhen gay agr hum chaty hian ke array ke agy or peachy waly index cpmare ho to hum 2 pointer approach use krtu hain

    while(lind<rind){
        int width=rind-lind;
        int height=min(arr[lind],arr[rind]);
        int area =width*height;
        
        maxheight=max(maxheight,area);
        arr[lind]<arr[rind]?lind++:rind--;

    }
    cout <<maxheight;
}