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

ll A;
ll B;
ll C;
ll N;
ll M;
ll K;
double L[base10_6];

double ans;
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
        double search(double left,double right){
            double mid;
            cout << K << endl;

            while(left<right){
                mid = (left+right)/2;
                int cnt = 0;
                rep(ni,N){
                     cnt = cnt +  int(  L[ni] / mid   );
                     cout << cnt << endl;
                }
                cout << "------------" << endl;
                cout << mid << endl;
                cout << left << endl;
                cout << right << endl;
                cout << cnt << endl;
                
                if(cnt==K){
                    // more longer
                    left = mid;
                }else if(cnt>K){
                    // more longer
                    left = mid+0.001;
                }else{
                    // more shorter
                    right = mid-0.001;
                }
            }
            return int(mid*100)/100.0;
        }
        
};

int main(){

    cin >> N;
    cin >> K;
    rep(ni,N){
        double tmp;
        cin >> tmp;
        L[ni] = tmp;
    }

    BinarySearch binary_search; // int main の中で使う
    ans = binary_search.search(0,10000);
    cout << "ans is" << endl;
    cout << ans << endl;

}