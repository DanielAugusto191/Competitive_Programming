// https://codeforces.com/contest/1454/problem/A
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
	int t;cin>>t;
     while(t--){
          int x;cin>>x;
          int arr[x];
          for(int i=x, j = 1;i>=1;i--, j++) arr[i-1] = j;
          if(x%2 && arr[x/2] == (x+1)/2) swap(arr[0], arr[x/2]);
          for(int i=0;i<x;++i) cout << arr[i] << ' ';
          cout << endl;
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


