class Solution {
public:
    int mySqrt(int x) {
        if (x == 0 || x == 1) {
            return x;
        }
        
        int low = 1;
        int high = x;
        int ans = 0;
        
        while (low <= high) {
            int mid = low + (high - low) / 2;
            
            // Using division (mid <= x / mid) instead of multiplication (mid * mid <= x)
            // prevents integer overflow when mid is large.
            if (mid <= x / mid) {
                ans = mid;     // Store mid as a potential answer
                low = mid + 1; // Try to find a larger value in the right half
            } else {
                high = mid - 1; // mid is too large, search the left half
            }
        }
        
        return ans;
    }
};
    