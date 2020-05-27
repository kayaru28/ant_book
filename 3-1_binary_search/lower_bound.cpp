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
#define base10_4 1e4 //10000
#define base10_5 1e5 //100000
#define base10_6 1e6 //1000000
#define base10_7 1e7 //10000000
#define base10_8 1e8 //100000000
#define base10_9 1e9 //1000000000

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

ll A;
ll B;
ll C;
ll N;
ll M;
ll K;

int ans;
vector<ll> values;
class BinarySearch
{
    private:
        // 検索対象を判定する条件を設定
        int CODE_MARCH = 0;
        int judge(int target_value,int comparison_index){
            if(target_value==values[comparison_index]) return CODE_MARCH;
            else if(target_value > values[comparison_index]) return 1;
            else return 2;
        }
    public:
        int search(int target){
            int left  = 0;
            int right = values.size();
            int mid;

            while(left<right){
                mid = (left+right)/2;
                int tmp_val = values[mid];

                if(tmp_val>=target){
                    // more under
                    right = mid;
                }else{ // tmp_val < target
                    // more bigger
                    left = mid+1;
                }
            }
            return left;
        }
        
};

int main(){

    cin >> N;
    rep(ni,N){
        ll tmp;
        cin >> tmp;
        values.push_back(tmp);
    }
    cin >> K;
    if(K>values[N-1]){
        cout << N << endl;
    }else{
        BinarySearch binary_search; // int main の中で使う
        ans = binary_search.search(K);
        cout << ans << endl;
    }

}