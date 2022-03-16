// https://codeforces.com/contest/1574/problem/B
#include <bits/stdc++.h>
using namespace std;
#define _ ios_base::sync_with_stdio(0);cin.tie(0);

#define endl '\n'
#define dbg(a) cout << a << " -- DEBUG -- "<< endl;
#define Adbg(a) for(auto e: a){cout << e << ' ';};cout << endl;

typedef long long ll;
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

int main(){_
     int t;cin>>t;
     while(t--){
          int arr[3], m;
          cin >> arr[0] >> arr[1] >> arr[2] >> m;
          sort(arr, arr+3);
          int k = max(0, arr[2]-(arr[1]+arr[0]) - 1);
          int l = (arr[0]-1 + arr[1]-1 + arr[2]-1);
          if(k <= m && m <= l) cout << "YES" << endl; else cout << "NO" << endl;

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

