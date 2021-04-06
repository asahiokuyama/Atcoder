#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int N;
    int a[110];  // 最大 100 個ですが余裕をもたせます
    cin >> N;
    for (int i = 0; i < N; ++i) cin >> a[i];

    sort(a, a + N, greater<int>());  // a[0:N] を大きい順にソート
    int Alice = 0;
    int Bob = 0;
    for (int i = 0; i < N; ++i) {
        if (i % 2 == 0) { // Alice のターン
            Alice += a[i];
        }
        else { // Bob のターン
            Bob += a[i];
        }
    }
    cout << Alice - Bob << endl;
}