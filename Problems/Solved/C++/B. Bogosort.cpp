// https://codeforces.com/contest/1312/problem/B
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define dbg(a) cout << a << endl;

void check(int arr[], int n){
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(j-i == arr[j]-arr[i]){
				swap(arr[j], arr[i]);
				check(arr, n);
			}
		}
	}
}

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
    	check(arr, n);
    	for(int i=0;i<n;i++){
    		cout << arr[i] << ' ';
    	}
    	cout << endl;
    	
    }
    return 0;
}
