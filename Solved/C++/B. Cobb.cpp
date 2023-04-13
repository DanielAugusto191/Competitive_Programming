// https://codeforces.com/contest/1554/problem/B 
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
int arr[MAX];

int main(){_
	int t;cin>>t;
     while(t--){
          int n, k;cin>>n>>k;
          for(int i=0;i<n;++i) cin >> arr[i];
          int l = (n-200 > 0) ? n-200: 0;
          ll ans = -LINF;
          for(int i=l;i<n;++i){
               for(int j=i+1;j<n;++j){
                    ll p = 1LL * (i+1)*(j+1) - 1LL * k * (arr[i] | arr[j]);
                    ans = max(ans, p);
               }
          }
          cout << ans << endl;

     }
	exit(0);
}

/*
1
6 6
3 2 0 0 5 6    ______ _   _ _____  
     |  ____| \ | |  __ \  
     | |__  |  \| | |  | |
     |  __| | . ` | |  | |
     | |____| |\  | |__| |
     |______|_| \_|_____/ 
*/                        

