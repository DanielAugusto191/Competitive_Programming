
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

// O(N)
std::vector <int> prime;
const int MAXN = 1e9;
bool is_composite[MAXN];

void sieve (int n) {
	std::fill (is_composite, is_composite + n, false);
	for (int i = 2; i < n; ++i) {
		if (!is_composite[i]) prime.push_back (i);
		for (int j = 0; j < prime.size () && i * prime[j] < n; ++j) {
			is_composite[i * prime[j]] = true;
			if (i % prime[j] == 0) break;
		}
	}
}