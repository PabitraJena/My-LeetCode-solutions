// 78. Subsets

class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums){
        vector<vector<int>> ans;
        vector<int> curr;

        function<void(int)> backtrack = [&](int start){
            ans.push_back(curr);

            for (int i = start; i < nums.size(); i++){
                curr.push_back(nums[i]);
                backtrack(i + 1);
                curr.pop_back();
            }
        };

        backtrack(0);
        return ans;
    }
};