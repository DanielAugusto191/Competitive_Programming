// https://codeforces.com/contest/1352/problem/D
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
        int n;
        cin >> n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin >> arr[i];
        }
        int mt=1, la=arr[0], lb=0, sa=arr[0], sb=0, cont = 1, c=1;
        for(int i=1, j=n-1;i<=j;){
            if(cont){ // BOB
                if(c){
                    mt++;
                    c=0;
                }
                lb+=arr[j];
                sb+=arr[j];
                if(lb > la){
                    cont = 0;
                    la = 0;
                    c=1;
                }
                j--;
            }else{ // ALICE
                if(c){
                    mt++;
                    c=0;
                }
                la+=arr[i];
                sa+=arr[i];
                if(la > lb){
                    cont = 1;
                    lb = 0;
                    c=1;
                }
                i++;
            }
        }
        cout << mt << ' ' << sa << ' ' << sb << endl;
    }
    return 0;
}
