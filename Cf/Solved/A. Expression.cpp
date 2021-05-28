// https://codeforces.com/contest/479/problem/A
#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define dbg(a) cout << a << " -- DEBUG -- "<< endl;
#define Adbg(a) for(auto e: a){cout << e << ' ';};cout << endl;
#define all(a) a.begin(),a.end()
#define read(arr, n) for(int i=0;i<n;i++) cin >> arr[i];

typedef long long ll;
using namespace std;

int main(void){
    int a,b,c;
    cin >> a >> b >> c;
    int s5 = a+b+c;
    int s1 = a+b*c;
    int s4 = (a+b)*c;
    int s6 = a*b+c;
    int s2 = a*(b+c);
    int s3 = a*b*c;
    cout << max(max(max(s1,s2),max(s3,s4)),max(s5,s6)) << endl;
}
