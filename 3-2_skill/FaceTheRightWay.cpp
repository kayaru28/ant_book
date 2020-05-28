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

ll N;
ll flag[base10_6];
ll beef[base10_6];
ll tmp_beef[base10_6];

void showbeef(){
    rep(ni,N) cout << tmp_beef[ni];
    cout  << endl;
}

int main(){

    
    cin >> N;
    string S;
    cin >> S;
    rep(si,S.length()){
        string tmp;
        tmp = S.substr(si,1);
        if(tmp=="F"){
            beef[si]=0;
        }else{
            beef[si]=1;
        }
    }

    ll resM = N;
    ll resK;
    for( int ki =1  ; ki <=N ; ki++ ){
        cout << ki << "------------------" << endl;
        ll sum = 0;

        ll cnt = 0;
        rep(ni,N) tmp_beef[ni]=beef[ni];

        for( int ni = 0 ; ni <ki ; ni++ ){
            if((beef[ni]+sum)%2==1){
                tmp_beef[ni]=0;
                flag[ni]=1;
                cnt++;
            }else{
                tmp_beef[ni]=0;
                flag[ni]=0;
            }
            sum = sum + flag[ni];
            showbeef();
        }

        for( int ni = ki ; ni <=N-ki ; ni++ ){
            sum = sum - flag[ni-ki];
            if((beef[ni]+sum)%2==1){
                tmp_beef[ni]=0;
                flag[ni]=1;
                cnt++;
            }else{
                tmp_beef[ni]=0;
                flag[ni]=0;
            }
           sum = sum + flag[ni];
            showbeef();
        }
        
        for( int ni = N-ki+1 ; ni <N ; ni++ ){
            sum = sum - flag[ni-ki];
            if((beef[ni]+sum)%2==1){
                tmp_beef[ni]=0;
            }
            showbeef();
        }

        ll cntB=0;
        rep(ni,N) cntB+=tmp_beef[ni];
        cout << "cntB is " << cntB << endl;
        if(cntB==0){
            cout << ki << " is all front" << endl;
            cout << "cnt is " << cnt << endl;
            if(resM>cnt){
                resM = cnt;
                resK = ki;
            }

        }
    }

    cout << resK << endl;
    cout << resM << endl;

}