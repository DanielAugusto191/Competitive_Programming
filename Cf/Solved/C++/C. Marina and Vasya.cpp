// https://codeforces.com/contest/584/problem/C
#include <bits/stdc++.h>
using namespace std;
#define _ ios_base::sync_with_stdio(0);cin.tie(0);

#define endl '\n'
#define dbg(a) cout << a << " -- DEBUG -- "<< endl;
#define Adbg(a) for(auto e: a){cout << e << ' ';};cout << endl;
#define Mdbg(a) for(auto e: a){cout << e.first << ' ' <<  e.second;cout << endl;}

typedef long long ll;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;
const int MAX = 1e9;

int main(){_
	int n,t;cin>>n>>t;
	string s1,s2;cin>>s1>>s2;
	int diff = 0;
	for(int i=0;i<n;++i) diff += (s1[i] != s2[i]);
	if(t < (diff+1)/2) {cout << -1 << endl; exit(0);}
	char ans[n];
	int k = 0;
	if(diff <= t){
		k = t-diff;
		for(int i=0;i<n;++i){
			if(s1[i] != s2[i]){
				if(s1[i] != 'a' && s2[i] != 'a') ans[i] = 'a';
				else if(s1[i] != 'b' && s2[i] != 'b') ans[i] = 'b';
				else ans[i] = 'c';
			} else {
				if(k){
					if(s1[i] == 'a') ans[i] = 'b';
					else ans[i] = 'a';
					k--;
				}else ans[i] = s1[i];
			}
		}
	}else if(diff == t+1){
		int v = 0;
		for(int i=0;i<n;++i){
			if(s1[i] != s2[i]){
				if(v==0) ans[i] = s1[i], v++;
				else if(v==1) ans[i] = s2[i], v++;
				else{
					if(s1[i] != 'a' && s2[i] != 'a') ans[i] = 'a';
					else if(s1[i] != 'b' && s2[i] != 'b') ans[i] = 'b';
					else ans[i] = 'c';
				}
			}else ans[i] = s1[i];
		}	
	}else{
		k = max(0, t-(diff+1)/2);
		if(diff%2==0){ // Choose one
			int v = 0;
			for(int i=0;i<n;++i){
				if(s1[i] != s2[i]){
					if(v) ans[i] = s2[i];
					else ans[i] = s1[i];
					v = !v;
				} else {
					if(k){
						if(s1[i] == 'a') ans[i] = 'b';
						else ans[i] = 'a';
						k--;
					}else ans[i] = s1[i];
				}
			}
		}else{
			int v = 2;
			for(int i=0;i<n;++i){
				if(s1[i] != s2[i]){
					if(v==2){
						if(s1[i] != 'a' && s2[i] != 'a') ans[i] = 'a';
						else if(s1[i] != 'b' && s2[i] != 'b') ans[i] = 'b';
						else ans[i] = 'c';
						v = 0;
					}else{
						if(v) ans[i] = s2[i];
						else ans[i] = s1[i];
						v = !v;
					}
				}else {
					if(k){
						if(s1[i] == 'a') ans[i] = 'b';
						else ans[i] = 'a';
						k--;
					}else ans[i] = s1[i];
				}	
			}
		}
	}
	if(k) cout << -1 << endl;
	else{
		for(auto e: ans) cout << e;
		cout << endl;
	}
	


	exit(0);
}

/*

abc
def

abh
8 t
aaaabcdh
aaaaefgi

*/