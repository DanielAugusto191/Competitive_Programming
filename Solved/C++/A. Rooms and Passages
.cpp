// https://codeforces.com/gym/102215/problem/A
#include <bits/stdc++.h>
using namespace std;
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'

typedef long long ll;
typedef pair<int, int> ii;
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

int main(){_
	int n;cin>>n;
	int arr[n];for(auto& e: arr) cin >> e;
	int ant = 0;
	map<int, int> m;
	vector<int> resp;
	for(int i=n-1;i>=0;--i){
		if(arr[i] > 0 || !m[-arr[i]]){resp.push_back(++ant); m[arr[i]] = i;}
		else{
			if(ant+1 < m[-arr[i]] - i) resp.push_back(++ant);
			else {resp.push_back(m[-arr[i]] - i); ant = m[-arr[i]]-i;}
		}
	}
	for(int i=n-1;i>=0;--i) cout << resp[i] << ' ';
	cout << endl;
	exit(0);
}

/*    ______ _   _ _____  
     |  ____| \ | |  __ \ 
     | |__  |  \| | |  | |
     |  __| | . ` | |  | |
     | |____| |\  | |__| |
     |______|_| \_|_____/ 
*/                        


