// https://www.geeksforgeeks.org/batch/dsa-galgotia-2/track/DSASP-Matrix/problem/make-matrix-beautiful-1587115620

class Solution
{
    public:
    //Function to find minimum number of operations that are required 
    //to make the matrix beautiful.
    int findMinOpeartion(vector<vector<int> > matrix, int n)
    {
        vector<int> values(n);
        int need = 0;
        
        for(int i = 0;i<n;i++){
            int row,col;
            row = col = 0;
            
            for(int j = 0;j<n;j++){
                row += matrix[j][i];
                col += matrix[i][j];
            }
            need = max({need,row,col});
            values[i] = row;
        }
        
        int ans = 0;
        for(auto i : values){
            ans += need - i;
        }
        
        return ans;
    } 
};