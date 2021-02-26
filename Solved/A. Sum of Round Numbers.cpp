// https://codeforces.com/contest/1352/problem/A
#include <bits/stdc++.h>
#include <iomanip>
 
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
    while(n--){
        string s;
        cin >> s;
        int c = 0;
        vector<string> arr;
        for(int i=0;i<s.size();i++){
            if(s[i] != '0'){
                c++;
                string k = "";
                k += s[i];
                for(int j=0;j<s.size()-i-1;j++){
                    k+='0';
                }
                arr.push_back(k);
            }
        }
        cout << c << endl;
        for(int i=0;i<arr.size();i++){
            cout << arr[i] << ' ';
        }
        cout << endl;
    }

    return 0;
}
