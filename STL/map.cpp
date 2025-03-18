#include<bits/stdc++.h>
using namespace std;


int main(){
    
   map<int, int> mpp;

   mpp[5] = 10;
   mpp.insert({1, 2});
   mpp.insert({3, 1});
   mpp.insert({2, 4});
   mpp[6] = 2;

    for(auto it: mpp){
        cout << it.first << " " << it.second;
        cout << endl;
    }

    cout << "Value of particlaur key " << endl;
    cout << mpp[5] << endl;    



    // map<pair<int, int>, int> mpp2;

    // mpp2[{1,3}] = 4;
    // mpp2[{1,2}] = 10;
    // mpp2.insert({{7,8}, {10}});

    // for(auto it: mpp2){
    //     cout << "keys " << it.first.first << ", " << it.first.second << " value - " << it.second;
    //     cout << endl;
    // }
}