	int longestConsecutive(vector<int>& nums) {
		if(nums.size()==0) return 0;
		sort(nums.begin(), nums.end());
		int curLen = 1;
		int maxLen = 0;
		int curNum = nums[0];
		for (int i = 1; i < nums.size(); i++) {
			if (curNum + 1 == nums[i]) {
				curLen++;
			}
			else if(curNum == nums[i]) {
				continue;
			}
			else {
				curLen = 1;

			}

			maxLen = max(maxLen, curLen);
			curNum = nums[i];
		}

		return max(maxLen,curLen);
	}
