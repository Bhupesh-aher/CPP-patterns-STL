#include<bits/stdc++.h>
using namespace std;

int main(){
    // vector<int> v;

    // v.push_back(5);
    // v.emplace_back(6);

    // cout << v[0] << " " << v[1];
    // cout << endl;

    // vector<pair<int, int>> vec;

    // vec.push_back({2, 3});
    // vec.emplace_back(8,6);

    // cout << vec[0].second;
    // cout << endl;
    // cout << vec[1].first;
    // cout << endl;

    // vector<int> v1(5, 100);
    // cout << "v1 - " <<  v1[0] << " " << v1[1] << " " << v1[2] << " " << v1[3]  << " " << v1[4]; 

    // cout << endl;

    // vector<int> v10(5);
    // cout << "v10 - " << v10[0] << " " << v10[1] << " " << v10[2] << " " << v10[3]  << " " << v10[4]; 
    // cout << endl;



    // cout << endl;

    // vector<int> v2(5, 20);
    // cout << "v2 - " << v2[0] << " " << v2[1] << " " << v2[2] << " " << v2[3]  << " " << v2[4]; 

    // cout << endl;

    
    // vector<int> v3(v2);
    // cout << "v3 - " << v3[0] << " " << v3[1] << " " << v3[2] << " " << v3[3]  << " " << v3[4]; 


    // use of iterator in vector --

    // vector<int> v;
    // v.push_back(10);
    // v.push_back(20);
    // v.push_back(30);
    // v.push_back(40);
    // v.push_back(50);
    // v.push_back(60);
    // v.push_back(90);

    // vector<int>::iterator it = v.begin();
    // cout << *(it) << endl;
    // it++;
    // cout << *(it) << endl;

    // it = it + 2;
    // cout << *(it) << endl;

    // vector<int>::iterator item = v.end();
    
    // item--;
    // cout << *(item) << endl; 


    // vector<int>::iterator itm = v.back();
    // cout << *(itm);


    // printing the vector --
    // there are couple of ways --

    // for(vector<int>::iterator it = v.begin();  it != v.end(); it++){
    //     cout << *(it) << " ";
    // }

    // cout << endl;

    // for(auto it = v.begin(); it != v.end(); it++){
    //     cout << *(it) << " ";
    // }

    // cout << endl;

    // // for each loop
    // for(auto it: v){
    //     cout << it << " ";
    // }

    


    // erase function (delete element from vector) -- 

    // vector<int> v;
    // v.push_back(10);
    // v.push_back(20);
    // v.push_back(30);
    // v.push_back(40);
    // v.push_back(50);
    // v.push_back(60);
    // v.push_back(90);


    // v.erase(v.begin());

    // v.erase(v.begin()+3, v.begin()+5);
    
    // for(auto it: v){
    //     cout << it << " ";
    // }
 

    // insert function --

    // v.insert(v.begin()+1, 5);

    // v.insert(v.begin(), 300);

    // v.insert(v.begin() + 3, 2, 400);

    // vector<int> v2(2, 50);
    // v.insert(v.begin()+1, v2.begin(), v2.end()--);

    // for(auto it: v){
    //     cout << it << " ";
    // }

    


    // size, popback, clear, empty functions --

    vector<int> v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    v.push_back(50);

   int size = v.size();
   cout << size << endl;

   v.pop_back();

   for(auto it: v){
    cout << it << " ";
   }
   cout << endl;
   
  bool isEmpty = v.empty();
  cout << isEmpty << endl;

  v.clear();


  bool isEmpty2 = v.empty();
  cout << isEmpty2;



}