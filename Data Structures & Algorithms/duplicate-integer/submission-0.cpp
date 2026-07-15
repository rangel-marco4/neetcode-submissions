class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        // Brute Force = O(n^2) time and O(1) space
        for (int i = 0; i < nums.size(); i++)
        {
            for (int j = i+1; j < nums.size(); j++)
            {
                if (nums[i] == nums[j]) return true;
            }
        }
        return false;
    }
};