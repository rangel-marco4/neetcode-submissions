class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int left = 0, longestSubStr = 0;
        unordered_set<int> hasDupes;

        for (int right = 0; right < s.size(); right++)
        {
            while (hasDupes.contains(s[right]))
            {
                hasDupes.erase(s[left]);
                left++;
            }
            hasDupes.insert(s[right]);
            longestSubStr = max(longestSubStr, right - left + 1);
        }

        return longestSubStr;
    }
};
