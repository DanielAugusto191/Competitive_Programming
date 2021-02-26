// https://codeforces.com/contest/785/problem/A
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
    int n;
    cin >> n;
    int sm = 0;
    while(n--){
        string s;
        cin >> s;
        if(s=="Tetrahedron"){
            sm += 4;
        }else if(s == "Cube"){
            sm += 6;
        }else if(s == "Octahedron"){
            sm += 8;
        }else if(s == "Dodecahedron"){
            sm += 12;
        }else if(s == "Icosahedron"){
            sm += 20;
        }
    }
    cout << sm << endl;
    
    return 0;
}

