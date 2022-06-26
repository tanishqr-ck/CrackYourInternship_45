class Solution{
    public:
    vector<string> ans;
    string temp="";
    void dfs(vector<vector<int>> &m, int n,int i,int j,string st)
    {
        if(i<0||j<0||i>=n||j>=n)
        return ;
        if(m[i][j]==0)
        return;
        if(i==n-1&&j==n-1){
        ans.push_back(st);
        return;}
        m[i][j]=0;
        dfs(m,n,i+1,j,st+"D");
        dfs(m,n,i,j+1,st+"R");
        dfs(m,n,i-1,j,st+"U");
        dfs(m,n,i,j-1,st+"L");
        m[i][j]=1;
    }
    vector<string> findPath(vector<vector<int>> &m, int n) {
        dfs(m,n,0,0,"");
       return ans;
    }
};