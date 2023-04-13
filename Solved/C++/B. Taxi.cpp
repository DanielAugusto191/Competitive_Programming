// https://codeforces.com/contest/158/problem/B
#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define dbg(a) cout << a << " -- DEBUG -- "<< endl;
#define Adbg(a) for(auto e: a){cout << e << ' ';};cout << endl;
#define all(a) a.begin(),a.end()
#define read(arr, n) for(int i=0;i<n;i++) cin >> arr[i];

typedef long long ll;
using namespace std;

int it47(string s){
    bool ans = 1;
    for(int i=0;i<s.size();i++){
        if(s[i] != '4' && s[i] != '7'){
            ans = 0;
            break;
        }
    }
    return ans;
}

int main(void){
    int n;
    cin >> n;
    map<int, int> m;
    int l;
    for(int i=0;i<n;i++){
        int k;
        cin >> k;
        if(m.find(k) == m.end()){
            m.insert(make_pair(k,1));
        }else{
            m[k]++;
        }
    }
    l = m[4]+m[3];
    if(m[3] > m[1]){
        m[1] = 0;
    }else{
        m[1] = m[1]-m[3];
    }
    if(m[2]%2==0){
        l += m[2]/2;
        m[2] = 0;
    }else{
        l += (m[2]-1)/2;

        m[2] = 1;
    }
    l += m[1]/4;
    if(m[1]%4==0){
        l += m[2];
    }else{
        int r = m[1]%4;
        if(r<=2){
            l++;
        }else{
            l += 1+m[2];
        }
    }

    cout << l << endl;

    exit(0);
}
