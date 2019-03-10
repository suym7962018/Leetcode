//linear scan
//O(n)
class Solution {
public:
    int peakIndexInMountainArray(vector<int>& A) {
        for(int i = 1; i < A.size(); i++){
        	if(A[i] < A[i - 1])
        		return i - 1;
        }
        return -1;
    }
};

//binary search
//not work
class Solution {
public:
    int peakIndexInMountainArray(vector<int>& A) {
        int low = 0, high = A.size() - 1;
        while(low < high){
        	int mid = low + (high - low) / 2;
        	if(A[mid] < A[mid + 1])
        		low = mid;
        	else
        		if(A[mid] > A[mid - 1])
        			high = mid;
        		else
        			return mid;
        }
        return 0;
    }
};