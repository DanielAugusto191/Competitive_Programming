// https://codeforces.com/contest/1296/problem/D
#include <bits/stdc++.h>
#define endl '\n'
#define dbg(a) cout << a << " -- DEBUG -- "<< endl;
#define Adbg(a) for(auto e: a){cout << e << ' ';};cout << endl;
#define all(a) a.begin(),a.end()
#define read(arr, n) for(int i=0;i<n;i++) cin >> arr[i];
typedef long long ll;
using namespace std;
 

int lessK(pair<int, int> a, pair<int, int> b){
    return a.second < b.second;
}
 
int main(void){
    int n,a,b,k, c = 0;
    cin >> n >> a >> b >> k;
    vector<pair<int, int>> resp;
    int arr[n];
    read(arr, n);

    for(int i=0;i<n;i++){
        int r = (arr[i] % (a+b));
        int q = 0;
        if(r == 0){
            r = b;
            q=1;
        }
        q += ceil((r*1.0/a) - 1);
        resp.push_back(make_pair(arr[i], q));
    }
    sort(resp.begin(), resp.end(), lessK);
    for(int i=0;i<n;i++){
        k -= resp[i].second;
        if(k<0){
            break;
        }
        c++;
    }
    cout << c << endl;
    
    return 0;
}
