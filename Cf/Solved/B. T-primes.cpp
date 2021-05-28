// https://codeforces.com/contest/230/problem/B
#include <bits/stdc++.h>
using namespace std;
 
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define dbg(a) cout << a << " -- DEBUG -- "<< endl;
#define Adbg(a) for(auto e: a){cout << e << ' ';};cout << endl;
#define all(a) a.begin(),a.end()
#define read(arr, n) for(int i=0;i<n;i++) cin >> arr[i];

typedef unsigned long long ll;
typedef pair<int, int> ii;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

void NPrimos(vector<ll>& pr){
    int mm = pow(10, 6);
    bool p[mm];
    memset(p, 1, sizeof(p));
    for(ll i=2;i<=mm;i++){
        if(p[i]){
            for(ll j=i;j<=mm;j+=i){
                p[j] = false;
            }
            pr.push_back(i*i);
        }
    }
}

int bs(vector<ll> &arr, ll x, int l, int r, int n){
	if(l > r){
		return 0;
	}
	int mid = (l+r)/2;
	if(arr[mid] == x){
		return 1;
	}
	if(arr[mid] > x){
		return bs(arr, x, l, mid-1, n);
	}else if(arr[mid] < x){
		return bs(arr, x, mid+1, r, n);
	}
}

int main(void){
    vector<ll> p;
    NPrimos(p);
    int x;cin>>x;
    for(int i=0;i<x;++i){
        ll k;cin>>k;
        if(bs(p, k, 0, p.size(), p.size())) cout << "YES" << endl;else cout << "NO" << endl;
    }
}
