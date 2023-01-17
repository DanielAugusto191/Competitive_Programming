// https://codeforces.com/contest/1288/problem/B
#include <iostream>
#include <vector>

using namespace std;

int main(void){

    int t;
    cin >> t;
    vector<long long int> v;
    for(int i=0;i<t;i++){
        long long a,b;
        long long n = 0;
        cin >> a >> b;
        string l = to_string(b);
        long long int x = l.size()-1;
        long long int k = 1;
        for(int j=0;j<l.size();j++){
            if(l[j]-'0' != 9){
                k=0;
                break;
            }
        }
        n = a*(x+k);
        v.push_back(n);
    }
    for(auto e: v){
        cout << e << endl;
    }    

    return 0;
}
