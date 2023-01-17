// https://codeforces.com/contest/1554/problem/A
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
const int MAX = 1e5;
ll arr[MAX];
int main(){_
     int t;cin>>t;
     while(t--){
          int n;cin>>n;
          for(int i=0;i<n;++i) cin >> arr[i];
          ll m = -1;
          for(int i=0;i<n-1;i++) m = max(m, arr[i]*arr[i+1]);
          cout << m << endl;
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

