//A-Z==65-90，a-z==97-122
//calculate the num of capital
class Solution {
public:
    bool detectCapitalUse(string word) {
        int n = word.size();
        if(n == 1)
        	return true;
        int capital = 0;
        for(auto& ch : word){
        	if(ch < 'a')
        		capital++;
        }
        if(capital == 1)
        	return word[0] < 'a';
        else
        	return capital == 0 || capital == n;
    }
};