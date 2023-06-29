#include <bits/stdc++.h>
using namespace std;

int hammingWeight(uint32_t n) {
    int count = 0;
    while (n != 0) {
        if (n & 1) count++;
        n = n >> 1;
    }
    return count;
}

int main() {
    cout << hammingWeight(11111111111111111111111111111101);
    return 0;
}
