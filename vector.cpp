#include<iostream>
#include<vector>
using namespace std;
// int main(){
//     vector<int > vec={1,2,3,4,5,6};
//     cout<<vec[0];
//     for(int i:vec){
//       cout<<i<<endl;
//     }
// }

//function for vector

// int main(){
//     vector<int > vec={1,2,3,4,5,6};
    
//     cout<<vec.size();
//     vec.push_back(25);// add at lsdt of the vector
//     vec.pop_back();// remove the last one 
// }



//practice


//if we want to reverse the number so we used the two pointer tecqnique

int main(){
    vector<int >vec={1,2,3,4,5};
    int start=0;
    int end=(vec.size()-1);
    while(start<end){
        swap(vec[start],vec[end]);
        start++;end--;
    }
    for(int i=0;i<vec.size();i++){
        cout<<vec[i]<<",";
    }

}