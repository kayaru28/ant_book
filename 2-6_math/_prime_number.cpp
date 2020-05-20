#include  <iostream>
#include  <stdio.h>
#include <algorithm>
using namespace std;
#include <vector>
#define rep(i,n) for (int i = 0; i < (n) ; i++)
#define INF 1e9
#define llINF 1e18
#define MOD 1000000007
#define pb push_back
#define ll long long
#define ull unsigned long long
#define vint vector<int>
#define vll vector<ll>



vector<ll> prime_numbers;
void setupPrimeNumbers(ll n_max){
    bool is_prime[n_max+1];

    for( int ni = 0 ; ni <=n_max ; ni++ ){
        is_prime[ni]=true;
    }
        
    is_prime[0]=is_prime[1]=false;
    for( int number = 2 ; number <=n_max ; number++ ){
        if(is_prime[number]){
            prime_numbers.push_back(number);
            for( int ni = number*2 ; ni <=n_max ; ni+=number ){
                is_prime[ni]=false;
            }
        }        
    }
}

int main(){
    ll n = 100000;

    setupPrimeNumbers(n);

    ll prime_cnt = prime_numbers.size();
    cout << "count : " << prime_cnt << endl;
    
    rep(ni,prime_cnt) {
        cout << prime_numbers[ni];
        cout << " ";
    }
    

}