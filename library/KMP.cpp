// 
#include <bits/stdc++.h>
using namespace std;
#define _ ios_base::sync_with_stdio(0);cin.tie(0);

#define endl '\n'
#define dbg(a) cout << a << " -- DEBUG -- "<< endl;
#define Adbg(a) for(auto e: a){cout << e << ' ';};cout << endl;
#define Mdbg(a) for(auto e: a){cout << e.first << ' ' e.second;};cout << endl;

typedef long long ll;
typedef pair<int,int> ii;
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;
const int MAX = 1e9;

// vetor com posição inicial de cada match
vector<int> KMP(string s, string pat){
	vector<int> v;
	int m = s.size();
	int n = pat.size();
	if(n == 0 || m < n) return v;
	vector<int> prox(n+1,0);
	for(int i=1;i<n;++i){
		int j = prox[i+1];
		while(j > 0 && pat[j] != pat[i]) j = prox[j];
		if(j > 0 || pat[j] == pat[i]) prox[i+1] = j+1;
	}
	for(int i=0,j=0;i<m;++i){
		if(s[i] == pat[j]){
			if(++j == n){
				v.push_back(i-j+1);
			}
		}else if(j > 0){
			j = prox[j];
			i--;
		}
	}
	return v;
}

int main(){_
	string text = "ABCABAABCABAC";
    string pattern = "CAB";
    vector<int> k = KMP(text, pattern);
	for(auto e: k){
		cout << e << endl;
	}
	exit(0);
}
