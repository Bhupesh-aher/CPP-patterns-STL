#include<bits/stdc++.h>
using namespace std;


int main(){
    set<int> st;
    st.insert(1);
    st.insert(2);
    st.insert(2);
    st.insert(40);
    st.insert(5);

    auto it = st.find(5);
    cout << *(it);

    cout << endl;
    st.erase(5);
    
    auto it2 = st.find(5);
    cout << *(it2);

    cout << endl;
    auto it3 = st.find(40);
    cout << *(it3) << " va";
    st.erase(it3);

    cout << endl;

    auto ele = st.find(40);
    cout << *(ele) << " value";
}