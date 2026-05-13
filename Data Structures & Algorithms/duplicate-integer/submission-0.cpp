class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        for(auto i : nums)
        {
            if(count(nums)>1) return false;
        }
        return true;
    }
};