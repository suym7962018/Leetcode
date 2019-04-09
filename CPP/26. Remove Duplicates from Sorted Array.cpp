//in place
//use a new index to store distinct nums from 0th to len th
//final length is len+1
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int len = 0;
        if(!nums.size())
        	return 0;
        for(int i = 0; i < nums.size(); i++){
        	if(nums[i] != nums[len])
        		nums[++len] = nums[i];
        }
        return len + 1;
    }
};