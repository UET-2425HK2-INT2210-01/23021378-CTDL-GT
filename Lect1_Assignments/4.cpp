#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int temp = 0;
    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            if(a[j] < a[i]) {
                temp = a[j];
                a[j] = a[i];
                a[i] = temp;
            }
        }
    }
    for (int i=0; i<n; i++){
        cout << a[i] << " ";
    }

    return 0;
}