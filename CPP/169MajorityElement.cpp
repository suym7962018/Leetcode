//since the majority element appears more than n/2 times
//the n/2 th element in the sorted nums must be the majority one
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        return nums[nums.size() / 2];
    }
};

//Moore Voting Algorithm
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int major, count = 0;
        for(int i = 0; i < nums.size(); i++){
        	if(!count){
        		major = nums[i];
        		count = 1;
        	}
        	else
        		count += (nums[i] == major) ? 1 : -1;
        }
        return major;
    }
};
