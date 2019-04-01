//brute force
//O(n^2)
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> result;
        for(int i = 0; i < nums.size(); i++){
        	for(int j = i + 1; j < nums.size(); j++){
        		if(nums[i] + nums[j] == target){
        			result.push_back(i);
        			result.push_back(j);
        		}
        	}
        }
        return result;
    }
};

//hash table
//O(n)
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> map;
        for(int i = 0; i < nums.size(); i++){
        	auto p = map.find(target - nums[i]);
        	if(p != map.end())
        		return {p -> second, i};
        	map[nums[i]] = i;
        }
        return {};
    }
};