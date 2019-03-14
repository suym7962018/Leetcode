class Solution {
public:
    vector<int> sumEvenAfterQueries(vector<int>& A, vector<vector<int>>& queries) {
        vector<int> sum(queries.size());
        for(int i = 0; i < queries.size(); i++){
            A[queries[i][1]] = A[queries[i][1]] + queries[i][0];
            for(int j = 0; j < A.size(); j++){
                if(A[j] % 2 == 0)
                    sum[i] = sum[i] + A[j];
            }
        }
        return sum;
    }
};