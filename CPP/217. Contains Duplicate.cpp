//sort
//if size=0/1, false
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        if(nums.size() < 2)
        	return false;
        else{
        	sort(nums.begin(), nums.end());
        	for(int i = 0; i < nums.size() - 1; i++){
        		if(nums[i] == nums[i + 1])
        			return true;
        	}
        return false;
        } 
    }
};

//hashtable
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int, bool> map;
        for(auto& num : nums){
        	if(map.find(num) != map.end())
        		return true;
        	else
        		map[num] = true;
        }
        return false;
    }
};