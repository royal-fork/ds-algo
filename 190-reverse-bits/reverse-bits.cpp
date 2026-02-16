class Solution {
public:
    uint32_t reverseBits(uint32_t n) {

        uint32_t reversed = 0;

        for (int i = 0; i < 32; i++) {

            // shift left to make space
            reversed <<= 1;

            // add last bit of n
            reversed |= (n & 1);

            // shift n right
            n >>= 1;
        }

        return reversed;
    }
};