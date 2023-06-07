class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        map<int,int> mp;
        for(int i=0;i<nums.size();i++) {
            mp[nums[i]] = i;
        }

        auto it = mp.end();
        it--;
        return it->second; 
    }
};
