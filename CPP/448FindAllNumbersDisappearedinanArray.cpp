//exchange nums[i] to the corresponding position
//[4, 3, 2, 7, 8, 2, 3, 1] --> [1, 2, 3, 4, 3, 2, 7, 8]
//then compare with i+1
//use while instead of if
//since 1 --> 8, but 1 in nums[6], not in nums[0]
class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> result;
        for(int i = 0; i < nums.size(); i++){
        	while(nums[i] != nums[nums[i] - 1])
        		swap(nums[i], nums[nums[i] - 1]);
        }

        for(int i = 0; i < nums.size(); i++){
        	if(nums[i] != i + 1)
        		result.push_back(i + 1);
        }
        return result;
    }
};