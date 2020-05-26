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
ll sum[base10_6];


class BinarySearch
{
    public:
        int search(int left){
            int base = left;
            int right = N;
            int mid;

            while(left<right){
                mid = (left+right)/2;
                ll SS = sum[mid]-sum[base];
                if(sum[mid]==M){
                    right = mid;
                // 検索結果が条件に合致しない場合の処理
                }else if(sum[mid]>M){
                    right = mid;
                }else if(sum[mid]<M){
                    left = mid+1;
                }
            }
            return right;
        }
};

int main(){

    
    cin >> N;
    cin >> M;

    rep(ni,N) cin >> A[ni];

    BinarySearch binary_search; // int main の中で使う
    sum[0] = 0;
    for( int ni = 1 ; ni <=N ; ni++ ){
        sum[ni]=sum[ni-1] + A[ni-1];
    }


    if(sum[N]<M) cout << 0 << endl;
    else{
        int res = N;
        for( int ni = 1 ; ni <=N ; ni++ ){
            int tmp = binary_search.search(ni);
            if(sum[tmp] - sum[ni] >= M ) res = min(res,tmp-ni);
            cout << ni << " : " << tmp << endl;
        }
        cout << res << endl;   
    }

}