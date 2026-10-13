// 3. Subtract the smaller half and add the larger half


#include <vector>
#include <algorithm>
#include <cmath>

class Solution {
public:
    long long maxAlternatingSum(std::vector<int>& nums) {
        int n = nums.size();
        std::vector<long long> squares(n);
        
        for (int i = 0; i < n; ++i){
            squares[i] = 1LL * nums[i] * nums[i];
        }
        
        std::sort(squares.begin(), squares.end());
        
        long long max_score = 0;
        int half = n / 2;
        
        for (int i = 0; i < n; ++i){
            if (i < half){
                max_score -= squares[i];
            } else {
                max_score += squares[i];
            }
        }
        
        return max_score;
    }
};
