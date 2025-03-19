#include<bits/stdc++.h>
using namespace std;


int main(){

    // int n;
    // cin >> n;
    // int cnt = 0;

    // while(n > 0){
    //    int lastDigit = n % 10;
    //     n = n / 10;
    //     cnt++;
    // }

    // cout << cnt << endl;
    

    // int cnt1 = (int) (log10(n) + 1);
    // cout << cnt1;



    // revserse Number  -

    // int n;
    // cin >> n;
    // int reverseNum = 0;
    // while(n > 0){
    //     int lastDigit = n % 10;
    //     reverseNum = (reverseNum * 10) + lastDigit;
    //     n = n / 10;
    // }

    // cout << n << endl;
    // cout << reverseNum;



    // Palindrom or not of Number  - 

   
    // int n;
    // cin >> n;
    // int dumpNo = n;
    // int reverseNum = 0;
    // while(n > 0){
    //     int lastDigit = n % 10;
    //     reverseNum = (reverseNum * 10) + lastDigit;
    //     n = n / 10;
    // }
    // if(dumpNo == reverseNum) cout << "true";
    // else cout << "false";
    
    
    // Armstrong Number -

    // int n;
    // cin >> n;
    // int duplicate = n;
    // int sum = 0;
    // while(n > 0){
    //     int lastDigit = n % 10;
    //     sum += lastDigit * lastDigit * lastDigit;
    //     n = n / 10;
    // } 
    // if(duplicate == sum) cout << "true";
    // else cout << "false";



    // Print All Divisions 
    // int n;
    // cin >> n;

    // for(int i = 1; i<=n; i++){
    //     if(n % i == 0){
    //         cout << i << " ";
    //     } 
    // }




    // optimize way 

    // vector<int> v;
    // for(int i = 1; i<=sqrt(n); i++){
    //     if(n % i == 0){
    //         v.push_back(i);
    //         if((n / i) != i){
    //             v.push_back(n/i);
    //         }
    //     }
    // }
    // sort(v.begin(), v.end());
    // for(auto it: v){
    //     cout << it << " ";
    // }




    // Prime number

    // int n;
    // cin >> n;
    // int cnt = 0;
    // for(int i = 1; i<=n; i++){
    //     if(n % i == 0){
    //         cout << i << " ";
    //         cnt++;
    //     }
    // }
    // cout << endl;

    // if(cnt == 2) cout << n << " is prime Number";
    // else cout <<  n << " is Not a Prime Number";



    // optimize way 

    // for(int i = 1; i<=sqrt(n); i++){
    //     if(n % i == 0){
    //         cnt ++;
    //         if((n / i) != i){
    //             cnt++;
    //         }
    //     }
    // }
    // if(cnt == 2) cout << n << " is prime Number";
    // else cout <<  n << " is Not a Prime Number";




    // GCD -

    // int n1;
    // int n2;
    // cin >> n1;
    // cin >> n2;
 
    // int gcd = 1;
    
    // for(int i = 1; i<=min(n1, n2); i++){
        //   if(n1 % i == 0 && n2 % i == 0){
            //   gcd = i;
            //    }
            //}
            
            
            
        // cout << gcd;
            
            
            
    // optimize way - 
    int n1;
    int n2;
    cin >> n1;
    cin >> n2;
    int cnt = 0;
    
    int gcd = 1;
    for(int i = min(n1, n2); i>=1; i--){
        if(n1 % i == 0 && n2 % i == 0){
            gcd = i;
            cnt++;
            break;
        }
    }
    cout << cnt << endl;
    cout << gcd;
            
}