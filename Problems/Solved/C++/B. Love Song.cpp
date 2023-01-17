// https://codeforces.com/contest/1539/problem/B
#include <bits/stdc++.h>
using namespace std;
#define _ ios_base::sync_with_stdio(0);cin.tie(0);

#define endl '\n'
#define pb push_back
#define f first
#define s second
#define dbg(a) cout << a << " -- DEBUG -- "<< endl;
#define Adbg(a) for(auto e: a){cout << e << ' ';};cout << endl;
#define all(a) a.begin(),a.end()
#define read(arr, n) for(int i=0;i<n;++i) cin >> arr[i];

typedef long long ll;
typedef pair<int, int> ii;
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

int main(){
     int n,t;cin>>n>>t;
     string s;cin>>s;
     int arr[n];
     arr[0] = s[0]-96;
     for(int i=1;i<n;++i) arr[i] = arr[i-1] + (s[i]-96);
     while(t--){
          int l,r;cin>>l>>r;
          if(l == 1) cout << arr[r-1] << endl;
          else cout << arr[r-1]-arr[l-2] << endl;
     }
	exit(0);
}
/*    ______ _   _ _____  1 3 4 7 8 10 11
     |  ____| \ | |  __ \ 
     | |__  |  \| | |  | |
     |  __| | . ` | |  | |
     | |____| |\  | |__| |
     |______|_| \_|_____/ 
*/                        

