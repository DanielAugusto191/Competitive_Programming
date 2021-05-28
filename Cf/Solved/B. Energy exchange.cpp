// https://codeforces.com/contest/68/problem/B
#include <bits/stdc++.h>
using namespace std;
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'

typedef long long ll;
typedef pair<int, int> ii;
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

int n;
double k;
vector<int> arr;

double f(double x){
	pair<double, int>  a={0, 0},b={0,0};
	for(int i=0;i<n;++i) if(x < arr[i]){
		a.first +=arr[i]; a.second++;
	}else{
		b.first += arr[i]; b.second++;
	}
	double m = (a.first- a.second * x)*(100.0-k)/100.0;
	double o = x * b.second - b.first;
	return m >= o;
}

int main(){
	
	cin>>n>>k;
	arr.resize(n);
	for(int i=0;i<n;++i) cin >> arr[i];
	double l =0, r=1e3;
	for(int i=0;i<100;++i){
		double m = (l+r)/2;
		if(f(m)) l=m;else r=m;
	}
	cout << fixed << setprecision(9);
	cout << l << endl;
	exit(0);
}

/*    ______ _   _ _____  
     |  ____| \ | |  __ \ 
     | |__  |  \| | |  | |
     |  __| | . ` | |  | |
     | |____| |\  | |__| |
     |______|_| \_|_____/ 
*/                        


