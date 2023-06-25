class Solution {
public:
	int maxArea(vector<int>& height) {
		int mx = INT_MIN;
		int left = 0;
		int right = height.size() - 1;
		while (left < right) {
			int area = (right - left) * min(height[left], height[right]);
			if (area > mx) {
				mx = area;
			}
			if (height[left] < height[right]) {
				left++;
			} else if (height[left] > height[right]) {
				right--;
			} else {
				left++;
				right--;
			}
		}

		return mx;
	}
};
