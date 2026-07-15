class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        // sort for two-pointer solution
        sort(nums.begin(), nums.end());
        vector<vector<int>> result;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] > 0) break; // there are no negative elements, break because no solution
            
            if (i > 0 && nums[i] == nums[i - 1]) continue; 

            int left = i + 1, right = nums.size() - 1; // get left and right pointers
            while (left < right) { // while left is less than right index
                int sum = nums[i] + nums[left] + nums[right]; // current sum (utilize for loop variable i)
                // if sum is less than target, need to increment left pointer
                if (sum < 0) {
                    left++;
                }
                // else if sum is greater than target, need to decrement right pointer
                else if (sum > 0) {
                    right--;
                }
                // else then we have a good pair [i, j, k] to push to result vector and 
                // update left and right pointer accordingly
                else {
                    result.push_back({nums[i], nums[left], nums[right]});
                    left++;
                    right--;
                    // while left is less than right pointer AND
                    // element at left pointer is equal to previous element
                    // we increment left pointer
                    while (left < right && nums[left] == nums[left - 1]) {
                        left++;
                    }
                }
            }
        }
        return result;
    }
};
