// 3499. Maximize Active Section with Trade I

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int maxActiveSectionsAfterTrade(string s) {
        int n = s.length();

        int count_ones = count(begin(s), end(s), '1');

        vector<int> count_zero_block;
        int i = 0;
        while(i < n){
            if (s[i] == '0'){
                int start = i;
                while (i < n && s[i] == '0'){
                    i++;
                }
                count_zero_block.push_back(i - start);
            }else {
                i++;
            }

        }
        int max_sum = 0;
        for (int i = 1; i < count_zero_block.size(); i++){
            max_sum = max(max_sum, count_zero_block[i] + count_zero_block[i - 1]);
        }

        return max_sum + count_ones;
    }
};