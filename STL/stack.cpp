#include<bits/stdc++.h>
using namespace std;


int main(){
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(3);
    st.push(5);

    cout << st.top();
    
    st.pop();

    cout << endl;
    cout << st.top();

     cout << endl;
     cout << st.size();

     cout << endl;
     cout << st.empty();

}