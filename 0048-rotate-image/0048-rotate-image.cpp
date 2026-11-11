class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int m = matrix.size();
        //just push each element n times to its right.
        //starting from the topleft.
        //can also first transpose and then reverse the rows.
        for(int i = 0 ; i < m; i++){
            for(int j = 0 ; j < m ; j++){
                if(i<j){
                    int temp = matrix[i][j];
                    matrix[i][j] = matrix[j][i] ;
                    matrix[j][i] = temp;
                }
            }
        }
        //above returns the transpose of the matrix.
        //reversing the rows.
        for(int i = m-1; i>=0  ; i--){
            reverse(matrix[i].begin(),matrix[i].end());
        }
                
        
    }
};