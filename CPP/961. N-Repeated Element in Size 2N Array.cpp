//A.length is even
//[x,y,x,z,x] or [x,y,y,z]
//loop not include A[0], [x,y,z,x],[x,x,y,z]
//O(n)
class Solution {
public:
    int repeatedNTimes(vector<int>& A) {
        for(int i = 2; i < A.size(); i++){
        	if(A[i] == A[i - 1] || A[i] == A[i-2])
        		return A[i];
        }
        return A[0];
    }
};