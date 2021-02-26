// https://codeforces.com/contest/1330/problem/A
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
    int t;
    cin >> t;
    while(t--){
        int n,x; cin >> n >> x;
        set<int> arr;
        for(int i=0;i<n;i++){
            int a;
            cin >> a;
            arr.insert(a);
        }
        set<int>::iterator it = arr.begin();
        int i = 1;
        while(1){
            if(*it == i){
                if(*it != *arr.rbegin()){
                    it++;
                }else{
                    i += x;
                    break;
                }
            }else{
                if(x==0){
                    i--;
                    break;
                }
                x--;
            }

            i++;
        }
        cout << i << endl;

    }
}
