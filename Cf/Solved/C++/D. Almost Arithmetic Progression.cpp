// https://codeforces.com/contest/978/problem/D
#include <bits/stdc++.h>
using namespace std;
 
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define dbg(a) cout << a << " -- DEBUG -- "<< endl;
#define Adbg(a) for(auto e: a){cout << e << ' ';};cout << endl;
#define Mdbg(a) for(auto e: a){cout << e.first << ' ' << e.second << endl;}
#define read(arr, n) for(int i=0;i<n;i++) cin >> arr[i];
 
typedef unsigned long long ll;
typedef pair<int, int> ii;
 
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;
 
int main(void){
    _
    int t;cin>>t;
    int arr[t]; read(arr, t);
    if(t == 1 || t == 2) {cout << 0 << endl; return 0;}
    int resp[9], l=0;
    int ini1 = arr[0], ini2 = arr[1];
    for(int x=-1;x<2;x++){
        arr[0] = ini1;
        arr[0] += x;
        for(int y=-1;y<2;y++){
            arr[1] = ini2;
            arr[1] += y;
            resp[l] = abs(x)+abs(y);
            int k = arr[1]-arr[0];
            // Adbg(arr);
            int ant = arr[1];
            for(int i=2;i<t;i++){
                int j = arr[i]-ant;
                if(j == k){
                    ant = arr[i];
                }else if(j+1 == k){
                    resp[l]++;
                    ant = arr[i]+1;
                }else if(j-1 == k){
                    resp[l]++;
                    ant = arr[i]-1;
                }else{
                    resp[l] = INF;
                    break;
                }
                
            }
            l++;
        }
    }
    int k = *min_element(resp, resp+9);
    if(k == INF) cout << -1 << endl; else cout << k << endl;


    exit(0);
}

