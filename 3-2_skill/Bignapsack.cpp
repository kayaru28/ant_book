#include  <iostream>
#include  <stdio.h>
#include <algorithm>
#include <map>
#include <math.h>

using namespace std;
#include <vector>
#define rep(i,n) for (int i = 0; i < (n) ; i++)
#define INF 1e9
#define llINF 1e18
#define base10_4 10000      //1e4
#define base10_5 100000     //1e5
#define base10_6 1000000    //1e6
#define base10_7 10000000   //1e7
#define base10_8 100000000  //1e8
#define base10_9 1000000000 //1e9

#define MOD 1000000007
#define pb push_back
#define ll long long
#define ull unsigned long long
#define vint vector<int>
#define vll vector<ll>

//#include <stack>
//#include <queue>

string ans_Yes = "Yes"; 
string ans_No = "No"; 
string ans_yes = "yes"; 
string ans_no = "no"; 

ll A[base10_6];
ll B;
ll C;
ll N;
ll W;
vll w,v;

int main(){

    
    cin >> N;
    rep(ni,N){
        int tmp;
        cin >> tmp;
        w.push_back(tmp);
    }
    rep(ni,N){
        int tmp;
        cin >> tmp;
        v.push_back(tmp);
    }

    ll left1,left2;
    ll right1,right2;

    left1 = 0;
    right1 = N/2;
    left2 = right1+1;
    right2 = N-1;
    

    cin >> W;
}