class Solution {
public:
    int search(vector<int>& nums, int target) {
        int left = 0, right = nums.size() - 1, pivot = nums.size() / 2;

        while (left <= right)
        {
            if (nums[pivot] > target)
            {
                right = pivot - 1;
                pivot = (left + right) / 2;
            }
            else if (nums[pivot] < target)
            {
                left = pivot + 1;
                pivot = (left + right) / 2;
            }
            else
            {
                return pivot;
            }
        }


        return -1;
    }
};
