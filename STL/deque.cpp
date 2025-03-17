#include<bits/stdc++.h>
using namespace std;



int main(){
 
    deque<int> dq;
    dq.push_back(1);
    dq.emplace_back(2);

    dq.push_front(4);
    dq.emplace_front(3);

    for(auto it: dq){
        cout << it << " "; 
    }
    cout << endl;
  
    dq.pop_back();
    dq.pop_front();

    for(auto it: dq){
        cout << it << " ";
    }

    cout << endl;
    
    int firstEle = dq.front();
    cout << firstEle << endl;
    
    int lastEle  = dq.back();
    cout << lastEle;
}