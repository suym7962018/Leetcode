//like Fibonacci sequence
//2 step - [n-2], 1 step - [n-1]
class Solution {
public:
    int climbStairs(int n) {
    	if(n == 0) return 0;
        else if(n == 1) return 1;
        else if(n == 2) return 2;
        //if not add above, running time error
        vector<int> step(n + 1, 0);
        step[1] = 1;
        step[2] = 2;
        for(int i = 3; i <= n; i++){
        	step[i] = step[i - 1] + step[i - 2];
        }
        return step[n];
    }
};