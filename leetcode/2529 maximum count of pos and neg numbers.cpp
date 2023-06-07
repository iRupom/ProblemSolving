class Solution {
public:
    int maximumCount(vector<int>& nums) {
        map<string,int> mp;
        for(int i=0;i<nums.size();i++) {
            if(nums[i]>0) {
                mp["pos"]++;
            } else if(nums[i]<0){
                mp["neg"]++;
            }
        }

        return max(mp["pos"],mp["neg"]);
    }
};
