#include <bits/stdc++.h>

using namespace std;

const int SIZE = 6;
int arr[SIZE] = {2,6,2,1,7,8};
int lower_bound_BS(int x){
    int l = -1, r=SIZE-1; // l <, r >=
    while(l+1 < r){
        int m = (l+r)/2;
        if(arr[m] < x) l = m;
        else r = m;
    }
    return r;
}
int upper_bound_BS(int x){
    int l = 0, r=SIZE; // l <=, r >
    while(l+1 < r){
        int m = (l+r)/2;
        if(arr[m] <= x) l = m;
        else r = m;
    }
    return l;
}
int BS(int x){
    int l = 0, r=SIZE;
	int ans = -1;
	while(l < r){
		int m = (l+r)/2;
		if(arr[m] == x) {ans = m;break;}
		else if(arr[m] > x) r = m;
		else l = m+1;
	}
    return ans;
}

int main(void){
    sort(arr, arr+6); // 1 2 2 6 7 8
	for(auto e: arr) cout << e << ' ';
	cout << endl;
	
	cout << "Different indices for lower and upper" << endl;
    cout << lower_bound_BS(2) << endl;
    cout << upper_bound_BS(2) << endl;

	cout << "Same indices for lower and upper" << endl;
	cout << lower_bound_BS(6) << endl;
	cout << upper_bound_BS(6) << endl;

	cout << "Not in array for lower" << endl;
	cout << lower_bound_BS(0) << endl;
	cout << upper_bound_BS(0) << endl;
	
	cout << "Not in array for upper" << endl;
	cout << lower_bound_BS(80) << endl;
	cout << upper_bound_BS(80) << endl;

	cout << "BS with duplicate numbers in array, does lower bound" << endl;
	cout << BS(2) << endl;

	cout << "BS with no duplicate numbers" << endl;
	cout << BS(6) << endl;

	cout << "BS Not in array lower and upper" << endl;
	cout << BS(0) << endl;
	cout << BS(80) << endl;

}
