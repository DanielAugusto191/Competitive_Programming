// https://codeforces.com/contest/977/problem/C
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
#define read(arr, n) for(int i=0;i<n;i++) cin >> arr[i];

typedef long long ll;
typedef pair<int, int> ii;
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

int main(){_
     int n,k;cin>>n>>k;
     int arr[n];
     read(arr, n);
     sort(arr, arr+n);
     if(k == 0) if(arr[0] > 1) cout << 1 << endl; else cout << -1 << endl;
     else if(arr[k] == arr[k-1] || arr[k-1] > 1e9 || arr[k-1] < 1) cout << -1 << endl; else cout << arr[k-1] << endl;

	exit(0);
}

/*    ______ _   _ _____  
     |  ____| \ | |  __ \ 
     | |__  |  \| | |  | |
     |  __| | . ` | |  | |
     | |____| |\  | |__| |
     |______|_| \_|_____/ 
*/                        

