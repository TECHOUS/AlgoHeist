#include<bits/stdc++.h>
using namespace std;

typedef long double ld;
constexpr double eps = 1e-9;

ld f(ld x) {
    return 3*x*x + 5*x + 7;    // example
}

int main() {
    cout << "The minimum of the function f is: f(";
    ld a = -1e9, b = 1e9;
    while (b - a > eps) {
        ld m1 = a + (b-a) / 3;
        ld m2 = b - (b-a) / 3;
        if (f(m1) < f(m2)) b = m2;
        else a = m1;
    }
    cout << fixed << setprecision(9) << a << ") = " << f(a) << '\n';
    return 0;
}