#include<iostream>
#include <algorithm>
using namespace std;
int n, X;
int a[1000]; // mảng a chứa các số nguyên
bool check(int i, int sum){
    if ( i == n) return X == sum; //điều kiện dừng, nếu i == n thì kiểm tra xem sum có bằng X không
    if (check(i+1, sum + a[i])) return true; //trường hợp chọn a[i]
    if (check(i+1, sum)) return true; //trường hợp không chọn a[i]
    return false;
    
}
int main(){
    cin >> n >> X;
    for (int i=0; i<n; i++){
        cin >> a[i];
    }
    if (check(0, 0)) cout << "YES"; // xét từ phần tử đầu tiên, tổng là 0
    else cout << "NO"; // nếu không có tổng nào bằng X thì in ra NO
    return 0;
}