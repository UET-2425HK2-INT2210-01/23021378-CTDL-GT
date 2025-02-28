#include <bits/stdc++.h>
using namespace std;
int gcd(int a, int b){
    while (b != 0) {
        int remain = a % b;
        a = b;
        b = remain;
    }
    return a;
}
int main() {
    int A,B;
    cin >> A >> B;
    cout << gcd(A, B);
    return 0;
}
