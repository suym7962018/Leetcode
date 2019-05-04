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

//sum
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int sum = 0, len = nums.size();
        for(int i = 0; i < nums.size(); i++){
        	sum += nums[i];
        }
        return len * (len + 1)/2 - sum;
    }
};