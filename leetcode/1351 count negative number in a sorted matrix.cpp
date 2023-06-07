class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int count = 0;
        for(int i=0;i<grid.size();i++) {
            int answer =countNegative(grid[i]);
            count+=answer;
        }  

        return count;  
    }
private:
    int countNegative(vector<int> v) {
        reverse(v.begin(),v.end());
        int count = binarySearch(v);
        return count+1;
    }

    int binarySearch(vector<int> v) {
        int low = 0;
        int high = v.size()-1;
        int result = -1;
        while(low<=high) {
            int mid = (high+low)/2;
            if(v[mid]<0) {
                result = mid;
                low = mid+1;
            } else if(v[mid]>=0) {
                high = mid-1;
            } else {
                low = mid+1;
            }
        }

        return result;
    }
};
