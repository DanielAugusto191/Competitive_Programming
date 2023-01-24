#include <bits/stdc++.h>

using namespace std;

vector<string> allSubsequences(string l){
	vector<string> ans;
	int n = (int)l.size();
	int p = 1 << n;
	for(int k=1;k<p;++k) // k=0 subsequencia vazia
	{
		string s = "";
		for(int i=0;i<n;++i){
			if(k & (1 << i)) s += l[i];
		}
		ans.push_back(s);
	}
	return ans;
}
