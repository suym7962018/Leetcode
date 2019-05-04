//bit manipulation
//XOR
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int res = nums.size();
        for(int i = 0; i < nums.size(); i++){
        	res ^= nums[i];
        	res ^= i;
        }
        return res;
    }
};

//binary search
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int left = 0, right = nums.size(), mid = (left + right) / 2;
        while(left < right){
        	if(nums[mid] > mid)
        		right = mid;
        	else
        		left = mid + 1;
        }
        return left;
    }
};