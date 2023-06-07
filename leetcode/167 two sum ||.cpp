class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        map<int,int> mp;
        vector<int> answer;
        for(int i=0;i<numbers.size();i++) {
            int element = target-numbers[i];
            if(mp[element]>0) {
                answer.push_back(mp[element]);
                answer.push_back(i+1);
            } else {
                mp[numbers[i]] = i+1;
            }
        } 

        return answer; 
    }
};
