#include<bits/stdc++.h>
using namespace std;


int main(){
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(4);

    q.back() += 5;
    cout << q.back() << endl;

    cout << q.front() << endl;

    q.pop();
    cout << q.front() << endl;

}