class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        int n=nums.size();
        unordered_set<int> hs;

        for(int i=0;i<n;i++){
            if(hs.find(nums[i]) != hs.end()){
                return true;
            }
            hs.insert(nums[i]);
        }
        return false;

    }
};