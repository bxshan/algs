#include <bits/stdc++.h>
using namespace std;

vector<int> v = {1, 3, 4, 5, 6};
int N;

void binarySearch(vector<int> v, int N) {
    int min = 0, max = v.size() - 1;
    while (max - min > 1) {
        int mid = (max + min) / 2;
        if (v[mid] < N) {
            min = mid + 1;
        } else {
            max = mid;
        }
    }
    if (v[min] == N) {
        cout << min << endl;
    } else if (v[max] == N) {
        cout << max << endl;
    } else {
        cout << -1 << endl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    N = 1;
    binarySearch(v, N);
    N = 6;
    binarySearch(v, N);
    N = 10;
    binarySearch(v, N);
    return 0;
}
