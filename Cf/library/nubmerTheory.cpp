#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
// ax + by = c
// ax + by = gcd(a,b)
template<typename T>
int gcd(T a, T b, T& x, T& y) {
    if (b == 0) {
        x = 1;
        y = 0;
        return a;
    }
    int x1, y1;
    int d = gcd(b, a % b, x1, y1);
    x = y1;
    y = x1 - y1 * (a / b);
    return d;
}

// Ax + By = C. Ex: 1027x+712y = 1
template<typename T>
bool diofantine_equation(T a, T b, T c, T &x0, T &y0, T &g) {
    g = gcd(abs(a), abs(b), x0, y0);
    if (c % g) {  // if c not divides gcd(a,b), there is no solution.
        return false;
    }

    x0 *= c / g;
    y0 *= c / g;
    if (a < 0) x0 = -x0;
    if (b < 0) y0 = -y0;
    return true;
}
template<typename T>
void shift_solution(T &x, T &y, T a, T b, T cnt)
{
    x += cnt * b;
    y -= cnt * a;
}

// https://codeforces.com/topic/85512/en4
// All solutions in a range
template<typename T = long long>
T find_all_solutions(T a, T b, T c, T min_x, T max_x, T min_y, T max_y) {
    if (min_x > max_x) return 0; /// Invalid range
    if (min_y > max_y) return 0; /// Invalid range

    if (a == 0 && b == 0) /// 0x + 0y = c
    {
        if (c != 0) return 0; /// No solution
        return 1LL * (max_x - min_x + 1) * (max_y - min_y + 1); /// Ways to select (x) and (y) in range
    }

    if (a == 0) /// 0x + by = c <=> y = c / b
    {
        if (c % b != 0) return 0; /// No solution
        if (1LL * min_y * b > c) return 0; /// Out of range: min > y
        if (1LL * max_y * b < c) return 0; /// Out of range: max < y
        return max_x - min_x + 1; /// Ways to select (x) in range    
    }

    if (b == 0) /// ax + 0y = c <=> x = c / a
    {
        if (c % a != 0) return 0; /// No solution
        if (1LL * min_x * a > c) return 0; /// Out of range: min > x
        if (1LL * max_x * a < c) return 0; /// Out of range: max < x
        return max_y - min_y + 1; /// Ways to select (y) in range    
    }

    T x, y, g;
    if (!find_any_solution(a, b, c, x, y, g)) return 0;
    a /= g;     
    b /= g;

    T sign_a = a > 0 ? +1 : -1;
    T sign_b = b > 0 ? +1 : -1;

    shift_solution(x, y, a, b, (min_x - x) / b);
    if (x < min_x) shift_solution(x, y, a, b, sign_b);
    if (x > max_x) return 0;
    T lx1 = x;

    shift_solution(x, y, a, b, (max_x - x) / b);
    if (x > max_x) shift_solution(x, y, a, b, -sign_b);
    T rx1 = x;

    shift_solution(x, y, a, b, -(min_y - y) / a);
    if (y < min_y) shift_solution(x, y, a, b, -sign_a);
    if (y > max_y) return 0;
    T lx2 = x;

    shift_solution(x, y, a, b, -(max_y - y) / a);
    if (y > max_y) shift_solution(x, y, a, b, sign_a);
    T rx2 = x;

    if (lx2 > rx2) swap(lx2, rx2);
    T lx = max(lx1, lx2);
    T rx = min(rx1, rx2);

    if (lx > rx) return 0;
    return (rx - lx) / abs(b) + 1;
}

ll count_nonegative_solution(int a, int b, int c)
{
    return find_all_solutions(ll(a), ll(b), ll(c), 0LL, ll(c / a + 1), 0LL, ll(c / b + 1));
}

int main(void){ // Example
	int x,y,g;
	int a = 1027, b = 712;
	diofantine_equation(a, b, 1, x, y, g);
	cout << x << ' ' << y << ' ' << g << endl;
	for(int i=-4;i<5;++i){
		cout << "Shift " << i << endl;
		shift_solution(x, y, a, b, i);
		cout << x << ' ' << y << ' ' << g << endl;
		cout << a*x + b*y << endl;
	}
	exit(0);
}