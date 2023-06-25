class Solution {
public:
	vector<vector<int>> threeSum(vector<int>& nums) {
		vector<vector<int>> answer;
		int n = nums.size();
		if (n < 3) {
			return answer;
		}

		sort(nums.begin(), nums.end());

		for (int i = 0; i < n - 2; i++) {

			// if a number is greater than zero at first place
			// it can not make triplet that sum to zero
			if (nums[i] > 0) {
				break;
			}

			// skipping duplicated
			if (i > 0 and nums[i] == nums[i - 1]) {
				continue;
			}

			int j = i + 1;
			int k = n - 1;

			while (j < k) {
				int sum = nums[i] + nums[j] + nums[k];
				if (sum < 0) {
					j++;
				} else if (sum > 0) {
					k--;
				}
				else {
					answer.push_back({nums[i], nums[j], nums[k]});

					// skipping duplicates
					while (j < k and nums[j] == nums[j + 1]) {
						j++;
					}
					j++;
					while (j < k and nums[k] == nums[k - 1]) {
						k--;
					}
					k--;
				}
			}
		}

		return answer;
	}

};
