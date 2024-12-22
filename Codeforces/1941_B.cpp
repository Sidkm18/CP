#include <iostream>
#include <sstream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        if (n < 3) {
            cout << "NO\n";
            continue;
        }
        cin.ignore();
        int* arr = new int[n];
        string input;
        getline(cin, input);
        stringstream ss(input);
        for (int i = 0; i < n; i++) {
            ss >> arr[i];
        }
        int p = (n - 1) / 2;
        int flag = 0;

        while (flag <= n) {
            if (flag == n) {
                cout << "YES\n";
                break;
            }

            arr[p] -= 2;
            if (p + 1 < n) arr[p + 1] -= 1;
            if (p - 1 >= 0) arr[p - 1] -= 1;
            if (arr[p] < 0 || (p + 1 < n && arr[p + 1] < 0) || (p - 1 >= 0 && arr[p - 1] < 0)) {
                cout << "NO\n";
                break;
            }

            flag++;
            int maxIndex = 1;
            for (int h = 1; h < n - 1; h++) {
                if (arr[h] > arr[maxIndex]) {
                    maxIndex = h;
                }
            }
            p = maxIndex;
            if (p == 0 || p == n - 1) {
                cout << "NO\n";
                break;
            }
        }
        delete[] arr;
    }
    return 0;
}