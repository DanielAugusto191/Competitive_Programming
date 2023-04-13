#include <bits/stdc++.h>
using namespace std;

int main(){
	vector<int> a = {1,2,3};
	a.erase(a.end()-1);
	cout << *(a.end()-2) << endl;
}
