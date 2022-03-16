// https://codeforces.com/contest/519/problem/B
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
    int n;cin>>n;
    int arr[n]; read(arr, n);
    int arr2[n-1]; read(arr2, n-1);
    sort(arr, arr+n);
    sort(arr2, arr2+(n-1));
    bool ans = 0;
    for(int i=0;i<n-1;i++){
        if(arr[i] != arr2[i]){
            ans = 1;
            cout << arr[i] << endl;
            break;
        }
    }
    if(!ans) cout << arr[n-1] << endl;

    int arr3[n-2]; read(arr3, n-2);
    sort(arr3, arr3+(n-2));
    ans = 0;
    for(int i=0;i<n-2;i++){
        if(arr2[i] != arr3[i]){
            ans = 1;
            cout << arr2[i] << endl;
            break;
        }
    }
    if(!ans) cout << arr2[n-2] << endl;


    return (0);
}

