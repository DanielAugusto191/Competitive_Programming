// https://codeforces.com/contest/1399/problem/B
#include <bits/stdc++.h>
using namespace std;
 
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define dbg(a) cout << a << " -- DEBUG -- "<< endl;
#define Adbg(a) for(auto e: a){cout << e << ' ';};cout << endl;
#define Mdbg(a) for(auto e: a){cout << e.first << ' ' << e.second << endl;};cout << endl;
#define read(arr, n) for(int i=0;i<n;i++) cin >> arr[i];

typedef unsigned long long ll;
typedef pair<int, int> ii;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

int main(void){
    int t;cin>>t;
    while(t--){
        int n;cin >> n;
        int arr[n],arr2[n];
        int m1 = INF,m2 = INF;
        for(int i=0;i<n;i++){
            cin >> arr[i];
            if(arr[i] < m1){
                m1 = arr[i];
            }
        }for(int i=0;i<n;i++){
            cin >> arr2[i];
            if(arr2[i] < m2){
                m2 = arr2[i];
            }
        }
        ll nas = 0;
        for(int i=0;i<n;i++){
            int f1 = arr[i]-m1;
            int f2 = arr2[i]-m2;
            nas += max(f1,f2);
        }
        cout << nas << endl;
    }
}
