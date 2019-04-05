//not pass
class Solution {
public:
    string reverseVowels(string s) {
        unordered_set<char> vowel = {'a', 'e', 'i', 'o', 'u',
        							 'A', 'E', 'I', 'O', 'U'};
        int i = 0, j = s.size() - 1;
        while(i < j){
        	while(vowel.find(s[i]) == vowel.end())
        		i++;
        	while(vowel.find(s[j]) == vowel.end())
        		j--;
            if(i >= j)
                break;
        	swap(s[i], s[j]);
        	i++; 
        	j--;
        }
        return s;
    }
};