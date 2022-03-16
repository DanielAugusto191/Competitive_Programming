// https://codeforces.com/contest/242/problem/A
#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main(void){
    int x,y,a,b;
    cin >> x >> y >> a >> b;
    pair<int, int> arr[x*y];
    int h = 0;
    for(int i=a;i<=x;i++){
        for(int j=b;j<=y;j++){
            if(i>j){
                arr[h] = make_pair(i, j);
                h++;
            }
        }
    }
    cout << h << endl;
    for(int i=0;i<h;i++){
        cout << arr[i].first << " " << arr[i].second << endl;
    }

}
