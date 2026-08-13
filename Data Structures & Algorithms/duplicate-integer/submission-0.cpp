class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        int n = nums.size();
        bool foo = false;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++){
        if(nums[i]==nums[i-1]){
            foo = true;
            break;
        }
        }
        return foo;
    }
};