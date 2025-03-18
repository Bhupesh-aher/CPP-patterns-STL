#include<bits/stdc++.h>
using namespace std;


bool comp(pair<int, int> p1, pair<int, int> p2){
    if(p1.second < p2.second) return true;
    if(p1.second > p2.second) return false;

    
    
    if(p1.first > p2.first) return true;
    return false;
    
}



int main(){
    
//    int a[] = {3, 4, 1, 9, 8, 2};
//    int n = 6;
//    sort(a, a+n);
//    for(auto it: a){
//     cout << it << " ";
//    }

  //  vector<int> v = {10, 4, 7, 1, 9, 3};

  //  for(int i = 0; i<5; i++){
  //   v.push_back(i*2);
  //  }

  //     sort(v.begin(), v.end());

  //     for(int i = 0; i <v.size(); i++){
  //       cout << v[i] << " ";
  //     }


    
    

    pair<int, int> a[] = {{1,2}, {2, 1}, {4, 1}, {5,2}};
    int n = sizeof(a) / sizeof(a[0]);
    sort(a, a+n, comp);

    // for(auto it: a){
    //     cout << it.first << " " << it.second;
    //     cout << endl;
    // }

    for(int i = 0; i<n; i++){
        cout << a[i].first << " " << a[i].second;
        cout << endl;

    }

    
}