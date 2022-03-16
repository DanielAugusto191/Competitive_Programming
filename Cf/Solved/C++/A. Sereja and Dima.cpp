// https://codeforces.com/contest/381/problem/A
#include <bits/stdc++.h>
using namespace std;
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define f first
#define s second
#define pb push_back

typedef long long ll;
typedef pair<int, int> ii;
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

int main(){_
     int n;cin>>n;
     int arr[n];
     for(int i=0;i<n;++i) cin >> arr[i];
     int i=0, j = n-1;
     int p[2] = {0,0};
     int v=0;
     while(i <= j){
          p[v] += max(arr[i], arr[j]);
          if(arr[i] > arr[j]) i++; else j--;
          v = !v;
     }
     cout << p[0] << ' ' << p[1] << endl;
	exit(0);
}

/*    ______ _   _ _____  
     |  ____| \ | |  __ \ 
     | |__  |  \| | |  | |
     |  __| | . ` | |  | |
     | |____| |\  | |__| |
     |______|_| \_|_____/ 
*/                        


