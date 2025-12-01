#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "輸入 n: ";
    cin >> n;

    int sum = 0;

    for (int i = 1; i <= n; i++) {
        sum += i;
    }

    cout << "1 到 " << n << " 的加總 = " << sum << endl;

    return 0;
}
