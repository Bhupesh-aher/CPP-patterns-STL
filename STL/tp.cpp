#include<bits/stdc++.h>
using namespace std;


int main(){
    list<int> ls;

    ls.push_back(1);
    ls.push_back(2);
    ls.push_back(3);
    ls.push_back(4);
    ls.push_front(5);

   

    // for(auto ele: ls){
    //     cout << ele << " ";
    // }
    // cout << endl;

    // ls.pop_back();
    // ls.pop_front();

    // for(auto ele: ls){
    //     cout << ele << " ";
    // }
    // cout << endl;
 
    // int ll = ls.back();
    // cout << ll;


    // vector<int> v;

    // v.push_back(10);
    // v.push_back(5);


    // int f = v[0];
    // cout << f;
    // auto frontGuy = v.begin();
    // cout << *(frontGuy) << endl;

    // auto lastGuy = v.end();
    // lastGuy--;
    // cout << *(lastGuy);



    // queue<int> q;

    // q.push(1);
    // q.push(2);
    // q.push(3);
    // q.push(4);

    // int ll = q.front();
    // cout << ll;

    // priority_queue<int> pq;

    set<int> st;

    // st.insert(5);
    // // st.insert(0);
    // st.insert(40);
    // st.insert(3);
    // st.insert(2);

    // auto ll = st.begin();
    // cout << *(ll);


    // auto ele = st.find(6);
    // // ele --;
    // cout << *(ele);

    // int cnt = st.count(40);
    // cout << cnt;
    
    // auto up = st.upper_bound(3);
    // cout << *(up);

    // auto ll = st.lower_bound(3);
    // cout << *(ll);


    // multiset<int> ms;
    // ms.insert(1); 
    // ms.insert(1); 
    // ms.insert(1); 
    // ms.insert(2); 
    // ms.insert(4); 
    // ms.insert(5); 

    // ms.erase(4);
    // int cnt = ms.count(1);
    // cout << "before deletion " << cnt << endl;

    // ms.erase(ms.find(1));
    // int cnt2 = ms.count(1);
    // cout  << "after deletion " << cnt2;

    // for(auto it: ms){
    //     cout << it << " ";
    // }

    // cout <<endl;
    // ms.erase(ms.find(1));
    // int cnt2 = ms.count(1);

    // for(auto it: ms){
    //     cout << it << " ";
    // }

    // auto up = ms.upper_bound(4);
    // cout << *(up);


    map<int, int> mpp;
    mpp[7] = 2;
    mpp.insert({1,2});
    mpp.insert({3,2});
    mpp.insert({2,4});
    mpp.insert({5,10});
    mpp.insert({4,1});
    mpp.insert({6,1});
    mpp.insert({5,4});

    // for(auto it: mpp){
    //    cout << it.first << " " << it.second;
    //    cout << endl;
    // }

    // cout << mpp[5] << endl;

    // int cnt = mpp.count(10);
    // cout << cnt << endl;

    // // cout << "value - " << mpp[5];


    // unordered_map<int, int> mpp2;

     
    // mpp2.insert({1,3}); 
    // mpp2.insert({1,2});
    // mpp2.insert({1,20});
    // mpp2.insert({3,4});
    // mpp2.insert({4,1});
    // mpp2.insert({2,1});
    // mpp2.insert({2,10});
    // mpp2.insert({8,10});
    // mpp2.insert({4,1});

    // // int cnt = mpp2.count(3);
    // // cout << cnt << endl;


    // for(auto it: mpp2){
    //     cout << it.first << " " << it.second;
    //     cout << endl;
    //  }


    // vector<int> v = {2, 5, 1, 3};
    // sort(v.begin(), v.end());

    // for(int i = 0; i<v.size(); i++){
    //     cout << v[i] <<  " ";
    // }


    int n;
    cin >> n;
    // int cnt = 0;

    // while(n > 0){
    //    int lastDigit = n % 10;
    //     n = n / 10;
    //     cnt++;
    // }

    // cout << cnt;

    int cnt1 = (int) (log10(n) + 1);
    cout << cnt1;








    
}