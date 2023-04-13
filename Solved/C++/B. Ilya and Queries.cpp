// https://codeforces.com/contest/313/problem/B
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
	string s;cin>>s;
     int n;cin>>n;
     map<int, ii> m;
     int arr[(int)s.size()];
     arr[0] = 0;
     for(int i=1;i<(int)s.size();i++) arr[i] = arr[i-1] + (s[i-1] == s[i]);
     while(n--){
        int a,b;cin>>a>>b;a--;b--;
        cout << arr[b] - arr[a] << endl;     
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


