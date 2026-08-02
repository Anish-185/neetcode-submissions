class Solution {
public:
    int findDuplicate(vector<int>& nums) {

        unordered_set<int> hmap;
        for(int i=0;i<nums.size();i++){
            if(hmap.find(nums[i])!=hmap.end()){
                return nums[i];
            }
            else{
                hmap.insert(nums[i]);
            }
        }
        return -1;
    }
};
