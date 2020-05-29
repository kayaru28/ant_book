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
ll M;
ll K;

/*
max 448,000,000
count_map['0']=0;
for(auto x : count_map) {
    string key = x.first;
    ll value = x.second;
}
*/

map<ll,ll> count_map;

int main(){
    
    
    cin >> N;
    ll kind_num=0;
    rep(ni,N){
        cin >> A[ni];
        if(count_map.count(A[ni])==0){
            count_map[A[ni]]=0;
            kind_num++;
        }
    }
    cout << "kind " << kind_num << endl;

    ll num=0;
    ll res = N;

    ll left=0;
    ll right=0;
    rep(ni,N){
        
        right = ni;
        if(count_map[A[right]]==0){
            num++;
        }
        count_map[A[right]]++;
        cout << left << " " << right << " = " << num << endl;

        while(num==kind_num){
            res = min(res,right-left+1);

            count_map[A[left]]--;
            if(count_map[A[left]]==0){
                num--;
            }
            left++;
            cout << left << " " << right << " = " << num << endl;

        }

    }
    cout << res << endl;





}