// https://codeforces.com/gym/101972/problem/A
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

int misterio(int k) {
    // printf("%d\n", k);
    if(k <= 1)
    return k;
    int ajuste = k%2;
    return k + misterio( (k + ajuste)/2 );
}

int main(void){
    int n;cin>>n;
    while(n--){
        string a,b;cin>>a>>b;
        int ra = 1, rb = 1;
        if(a[0] == '-'){ra = -1; a.erase(a.begin());}
        if(b[0] == '-'){rb = -1; b.erase(b.begin());}
        int sa = a.size(), sb = b.size();
        vector<int> pa, pb;
        for(int i=0;i<sa;i++) if(a[i] != '0') pa.push_back((a[i]-'0' )* pow(10, sa-i-1));
        for(int i=0;i<sb;i++) if(b[i] != '0') pb.push_back((b[i]-'0') * pow(10, sb-i-1)*rb);
        
        if(ra == -1) cout << '-';
        for(int i=0;i<pa.size();i++){
            for(int j=0;j<pb.size();j++){
                cout << pa[i] << " x " << pb[j];
                if(i == pa.size()-1 && j == pb.size()-1){
                }else{
                    if(ra == 1){
                        cout << " + ";
                    }else{
                        cout << " - ";
                    }
                }
            }
        }
        cout << endl;
    }
    return 0;
 
}
