// https://codeforces.com/contest/1303/problem/A
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define dbg(a) cout << a << endl;

int main(void){
    int n;
    cin >> n;
    while(n--){
    	string s;
    	cin >> s;
    	int c = 0, t = 0;
    	int ini = 0, fin = 0;
    	for(int i=0;i<s.size();i++){
    		if(s[i] == '1'){
    			ini = i;
    			break;
    		}
    	}
    	for(int i=s.size()-1;i>=0;i--){
    		if(s[i] == '1'){
    			fin = i;
    			break;
    		}
    	}
    	for(int i=ini;i<fin;i++){
    		if(s[i] == '0'){
    			c++;
    		}
    	}
    	cout << c << endl;
    }
}
