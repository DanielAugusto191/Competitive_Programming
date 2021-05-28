// https://codeforces.com/contest/18/problem/A
#include <bits/stdc++.h>

using namespace std;
#define endl '\n'

int isSame(int x1,int y1,int x2,int y2,int x3,int y3){
    pair<int, int> a = {x1, y1}, b = {x2, y2}, c = {x3, y3};
    if(a==b||a==c||b==c){
        return 1;
    }else{
        return 0;
    }
}

int isOrt(int x1,int y1,int x2,int y2,int x3,int y3){
    pair<int,int> ab = {x2-x1, y2-y1}, ac = {x3-x1, y3-y1};
    if(isSame(x1,y1,x2,y2,x3,y3)){
        return 0;
    }
    if(ab.first*ac.first + ab.second*ac.second == 0){
        return 1;
    }
    ab = {x2-x3, y2-y3}, ac = {x1-x3, y1-y3};
    if(ab.first*ac.first + ab.second*ac.second == 0){
        return 1;
    }
    ab = {x1-x2, y1-y2}, ac = {x3-x2, y3-y2};
    if(ab.first*ac.first + ab.second*ac.second == 0){
        return 1;
    }
    return 0;
}

int main(void){
    int x1,y1,x2,y2,x3,y3;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
    if (isOrt(x1, y1, x2, y2, x3, y3)){
        cout << "RIGHT" << endl;
        return 0;
    }

    if(isOrt(x1+1, y1, x2, y2, x3, y3) || isOrt(x1-1, y1, x2, y2, x3, y3) || isOrt(x1, y1+1, x2, y2, x3, y3) || isOrt(x1, y1-1, x2, y2, x3, y3)){
        cout << "ALMOST" << endl;
        return 0;
    }
    if(isOrt(x2+1, y2, x1, y1, x3, y3) || isOrt(x2-1, y2, x1, y1, x3, y3) || isOrt(x2, y2+1, x1, y1, x3, y3) || isOrt(x2, y2-1, x1, y1, x3, y3)){
        cout << "ALMOST" << endl;
        return 0;
    }
    if(isOrt(x3+1, y3, x2, y2, x1, y1) || isOrt(x3-1, y3, x2, y2, x1, y1) || isOrt(x3, y3+1, x2, y2, x1, y1) || isOrt(x3, y3-1, x2, y2, x1, y1)){
        cout << "ALMOST" << endl;
        return 0;
    }
    cout << "NEITHER" << endl;
    return 0;

}
