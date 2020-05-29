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

ll A[base10_5];
ll B[base10_5];
ll C[base10_5];
ll D[base10_5];
ll N;
ll M;
ll K;

/*
max 448,000,000
map<string,ll> count_map;
count_map['0']=0;
for(auto x : count_map) {
    string key = x.first;
    ll value = x.second;
}
*/

int main(){

    
    cin >> N;

    rep(ni,N) cin >> A[ni];
    rep(ni,N) cin >> B[ni];
    rep(ni,N) cin >> C[ni];
    rep(ni,N) cin >> D[ni];

    map<ll,ll> map_AB;
    map<ll,ll> map_CD;

    cout << "---- AB ----------" << endl;
    rep(ai,N){
        rep(bi,N){
            cout << A[ai]+B[bi] << endl;
            if(map_AB.count(A[ai]+B[bi])){
                map_AB[A[ai]+B[bi]]=1;
            }else{
                map_AB[A[ai]+B[bi]]++;
            }
        }
    }

    cout << "---- CD ----------" << endl;
    rep(ci,N){
        rep(di,N){
            cout << C[ci]+D[di] << endl;
            if(map_CD.count(C[ci]+D[di])){
                map_CD[C[ci]+D[di]] = 1;
            }else{
                map_CD[C[ci]+D[di]]++;
            }
        }
    }

    ll cnt=0;
    for(auto x : map_AB) {
        ll key = x.first * -1;
        if(map_CD[key]){
            ll valueAB = x.second;
            ll valueCD = map_CD[key];
            cnt+= valueAB * valueCD;
        }
    }
    cout << cnt << endl;




}