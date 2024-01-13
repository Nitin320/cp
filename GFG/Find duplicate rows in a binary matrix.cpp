class Solution
{   
    public:
    vector<int> repeatedRows(vector<vector<int>> &matrix, int M, int N) 
    { 
        map<vector<int>, int>m;
        vector<int> ans;
        
        for(int i=0; i<M; i++){
            if(m[matrix[i]]) ans.push_back(i);
            else m[matrix[i]]++;
        }
        
        return ans;
      
    } 
};
