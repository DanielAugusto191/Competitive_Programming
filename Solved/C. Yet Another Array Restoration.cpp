// https://codeforces.com/contest/1409/problem/C
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
 
int main(void){
    int t;cin>>t;
    while(t--){
        int n,x,y;cin>>n>>x>>y;
        vector<int> p;
        if(n==2){
            cout << x << ' ' << y << endl;
            continue;
        }
        for(int i=1;i<y;i++){
            if((y-x) % i == 0){
                if(x+(n-1)*i == y){
                    cout << x << ' ';
                    while(x != y){
                        x += i;
                        cout << x << ' ';
                    }
                    cout << endl;
                    break;
                }else if(x+(n-1)*i > y){
                    // dbg("?");
                    int sob = (x+(n-1)*i) - y;

                    p.push_back(x);
                    int x1 = x;
                    while(x1 != y){
                        x1 += i;
                        p.push_back(x1);
                    }
                    x1 = x-i;
                    // dbg(x1);
                    // dbg(sob);
                    while(x1 > 0 && sob){
                        p.push_back(x1);
                        x1 -= i;
                        sob -= i;
                    }

                    while(sob){
                        y += i;
                        sob -= i;
                        p.push_back(y);
                    }
                    for(int e: p){
                        cout << e << ' ';
                    }
                    cout << endl;
                    break;
                }
            }

        }

    }
    

    exit(0);
}

