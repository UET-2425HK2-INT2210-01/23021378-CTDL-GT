#include <iostream>
using namespace std;

int main() {
    int n, X; // n: vật; x: trọng lượng
    cin >> n >> X;

    int w[100], v[100]; // Mảng trọng lượng w và giá trị v của vật

    for (int i = 0; i < n; i++) {
        cin >> w[i] >> v[i];
    } // nhập trọng lượng và giá trị

    // Mảng arr lưu giá trị lớn nhất có thể đạt được tại mỗi mức trọng lượng từ 0 đến X
    int arr[101] = {0}; // Khởi tạo tất cả giá trị ban đầu là 0

    // Duyệt qua từng vật phẩm
    for (int i = 0; i < n; i++) {
        // Duyệt ngược từ X về w[i] để không dùng lại vật phẩm i
        for (int j = X; j >= w[i]; j--) {
            // Cập nhật giá trị lớn nhất nếu chọn vật phẩm i
            if (arr[j] < arr[j - w[i]] + v[i]) {
                arr[j] = arr[j - w[i]] + v[i];
            }
        }
    }

    // tìm giá trị lớn nhất trong mảng arr
    int result = 0;
    for (int i = 0; i <= X; i++) {
        if (arr[i] > result) {
            result = arr[i];
        }
    }

    cout << result << endl;

    return 0;
}