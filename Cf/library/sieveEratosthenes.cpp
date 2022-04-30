
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

const int MAX = 1e9;
vector<bool> is_prime(MAX, true);

vector<ll> SE(int n){
    vector<ll> primes;
    is_prime[0] = is_prime[1] = false;
    for(ll i = 3; i <= n;++i){
        if(is_prime[i] && (ll)i*i <= n){
            primes.push_back(i);
            for(int j = i*i;j<=n;j+=i) is_prime[j] = false;
        }
    }
}


int main(void){
    vector<ll> v = SE(50);
    for(auto e: v) cout << e << ' ';
    cout << endl;
}