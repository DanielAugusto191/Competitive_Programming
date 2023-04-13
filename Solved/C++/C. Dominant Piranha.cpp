// https://codeforces.com/contest/1433/problem/C
#include <bits/stdc++.h>
using namespace std;
 
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define dbg(a) cout << a << " -- DEBUG -- "<< endl;
#define Adbg(a) for(auto e: a){cout << e << ' ';};cout << endl;
#define Mdbg(a) for(auto e: a){cout << e.first << ' ' << e.second << endl;}
#define read(arr, n) for(int i=0;i<n;i++) cin >> arr[i];
 
typedef long long ll;
typedef pair<int, int> ii;
 
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

int main(void){_
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        int arr[n];read(arr,n);
        int arr2[n];
        for(int i=0;i<n;i++){
            arr2[i] = arr[i];
        }
        sort(arr, arr+n);
        int ans = -1;
        for(int j=n-2;j>=0;j--){
            if(arr[j+1] > arr[j]){
                ans = arr[j+1];
                break;
            }
        }
        for(int i=0;i<n;i++){
            int x=INF,l=INF;
            if(i-1 >= 0){
                x = arr2[i-1];
            }
            if(i+1 < n){
                l = arr2[i+1];
            }
            if(arr2[i] == ans && (arr2[i] > x || arr2[i] > l)){
                ans = i+1;
                break;
            }
        }
        
        cout << ans << endl;

    }

    return (0);
}
