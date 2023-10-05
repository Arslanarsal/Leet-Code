class Solution {
public:
    int minBitFlips(int start, int goal) {
       int flip_count = 0;

    // XOR start and goal to find bits that need flipping
    int flip_bits = start ^ goal;

    // Count number of bits that need flipping using built-in function
    flip_count = __builtin_popcount(flip_bits);

    return flip_count;
    }
};