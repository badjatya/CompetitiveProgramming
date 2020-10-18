#include <vector>

using namespace std;

class Solution {
public:
    // All permutations
    vector<vector<int>> answers;
    vector<int> set;
    
    vector<vector<int>> permute(vector<int>& nums) {
        // Permutation found
        if (nums.size() == 0) {
            answers.push_back(set);
        }
        
        for (int i = 0; i < nums.size(); i++) {
            vector<int> newNums = nums;
            newNums.erase(newNums.begin() + i);
            
            set.push_back(nums[i]);
            
            permute(newNums);
            
            set.pop_back();
        }
        
        return answers;
    }
};
