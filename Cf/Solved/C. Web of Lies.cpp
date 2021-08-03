// https://codeforces.com/contest/1549/problem/C
#include <bits/stdc++.h>
using namespace std;
#define _ ios_base::sync_with_stdio(0);cin.tie(0);

#define endl '\n'
#define pb push_back
#define f first
#define s second
int mdc(int a, int b) {return b==0 ? a : mdc(b, a%b);}
typedef long long ll;
typedef pair<int, int> ii;
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;
const int MAX = 2e5 + 50;

int n,m;
int arr[MAX], k;
void add(){
	int a,b;cin>>a>>b;
	if(a>b)swap(a,b);
	arr[a]++;
	if(arr[a]==1) k++;
}
void rem(){
	int a,b;cin>>a>>b;
	if(a>b)swap(a,b);
	arr[a]--;
	if(arr[a]==0) k--;
}

int main(){
	cin>>n>>m;
	for(int i=0;i<m;++i) add();
	int t;cin>>t;
	while(t--){
		int x;cin>>x;
		if(x == 1) add();
		else if(x==2) rem();
		else cout << n-k << endl;
	}
	exit(0);
}

/*    ______ _   _ _____  
     |  ____| \ | |  __ \ 
     | |__  |  \| | |  | |
     |  __| | . ` | |  | |
     | |____| |\  | |__| |
     |______|_| \_|_____/ 
*/                        

