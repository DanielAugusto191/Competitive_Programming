// https://codeforces.com/contest/1294/problem/B
#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main(void){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<pair<int, int> > v;
        for(int i=0;i<n;i++){
            int a,b;
            cin >> a >> b;
            v.push_back(make_pair(a,b));
        }
        sort(v.begin(), v.end());
        int m = 0;
        int i = 0;
        int h = 0;
        string s;

        for(i=0;i<n;i++){
            if(v[i].first > h){
                for(int j=0;j<v[i].first-h;j++){
                    s+='R';
                }
                h = v[i].first;
            }
            if (v[i].second < m){
                break;
            }else if(v[i].second > m){
                for(int j=0;j<v[i].second - m;j++){
                    s+='U';
                }
                m = v[i].second;
            }else{

            }
        }
        if(i==n){
            cout << "YES" << endl;
            cout << s << endl;
        }else{
            cout << "NO" << endl;
        }
    }

    return 0;
}
