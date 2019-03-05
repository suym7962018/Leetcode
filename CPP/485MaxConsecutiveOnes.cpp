//multiplication with 0 resets sum
//max to store the max sum, or sum will be covered
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int max = 0, sum = 0;
        for(int i = 0; i < nums.size(); i++){
        	sum = (sum + nums[i]) * nums[i];
        	if(max < sum)
        		max = sum;
        }
        return max;
    }
};

//solution 2
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int max = 0, sum = 0;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] == 1)
                sum++;
            else
                sum = 0;
            if(max < sum)
                max = sum;
        }
        return max;
    }
};