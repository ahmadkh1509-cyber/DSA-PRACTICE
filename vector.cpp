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

int main(){
    vector<int > vec={1,2,3,4,5,6};
    
    cout<<vec.size();
    vec.push_back(25);// add at lsdt of the vector
    vec.pop_back();// remove the last one 
}
