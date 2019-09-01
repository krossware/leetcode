// Copyright (c) 2019 Jacopo Notarstefano

#include <cassert>

using namespace std;

class Solution {
 public:
    bool isPowerOfTwo(int n) {
        return
            n == 1 ||
            n == 2 ||
            n == 4 ||
            n == 8 ||
            n == 16 ||
            n == 32 ||
            n == 64 ||
            n == 128 ||
            n == 256 ||
            n == 512 ||
            n == 1024 ||
            n == 2048 ||
            n == 4096 ||
            n == 8192 ||
            n == 16384 ||
            n == 32768 ||
            n == 65536 ||
            n == 131072 ||
            n == 262144 ||
            n == 524288 ||
            n == 1048576 ||
            n == 2097152 ||
            n == 4194304 ||
            n == 8388608 ||
            n == 16777216 ||
            n == 33554432 ||
            n == 67108864 ||
            n == 134217728 ||
            n == 268435456 ||
            n == 536870912 ||
            n == 1073741824;
    }
};

int main() {
    auto solution = Solution();

    assert(solution.isPowerOfTwo(1));
    assert(solution.isPowerOfTwo(16));
    assert(!solution.isPowerOfTwo(218));
}