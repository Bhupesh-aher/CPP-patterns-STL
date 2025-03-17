#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int p = 2;
    string p1 = "bhupesh";
    char p2 = 'A';
    cout << p << " " <<  p1 << " " << p2;
    cout << endl;
    
    pair<int, int> p4 = {5,6};
    cout << p4.first << " " << p4.second;

    pair<int, pair<int, int>> p5 = {1, {2, 3}};

    cout << endl;

    cout << p5.first << " " << p5.second.first << " " << p5.second.second;

    cout << endl;
    int arr[2] = {100,200};
    cout << arr[1];

    string arr2[2]; 
    cout << endl;

    pair<int, int> arr3[] = { {3,2}, {7,9}, {2,5} };
    cout << arr3[1].second;

}