class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        for(auto i : nums)
        {
            if(nums.count(i)>1) return false;
        }
        return true;
    }
};