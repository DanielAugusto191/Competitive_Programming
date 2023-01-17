// https://codeforces.com/contest/1293/problem/A
#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main(){
	int t,n,k,s;
	cin >> t;
	while(t--){
		cin >> n >> s >> k;	
		vector<int> arr;
		for(int i=0;i<k;i++){
			int x;
			cin >> x;
			arr.push_back(x);
		}
		for(int i=0;i<=k;i++){
			if(s-i >= 1 && find(arr.begin(), arr.end(), s-i) == arr.end()){
				cout << i << endl;
				break;
			}
			if(s+i <= n && find(arr.begin(), arr.end(), s+i) == arr.end()){
				cout << i << endl;
				break;
			}
		}
	}
	return 0;
}
