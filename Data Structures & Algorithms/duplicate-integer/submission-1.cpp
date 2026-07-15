class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        // sort then use two pointers = slow fast pointer
        // Time = O(nlogn) Space = O(1)
        int left = 0, right = left+1;
        sort(nums.begin(), nums.end());

        while (right < nums.size())
        {
            if (nums[left] == nums[right])
            {
                return true;
            }
            left++;
            right++;
        }

        return false;
    }
};