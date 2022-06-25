class Solution {
public:
    void doit(int i,int j,vector<vector<char>>& grid)
    {
        if(i==-1||j==-1||i>=grid.size()||j>=grid[0].size())
            return;
      if(grid[i][j]=='0'||grid[i][j]=='2')
          return;
        grid[i][j]='2';
        doit(i-1,j,grid);
        doit(i,j-1,grid);
        doit(i+1,j,grid);
        doit(i,j+1,grid);
        
        
    }
    int numIslands(vector<vector<char>>& grid) {
        int count=0;
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[0].size();j++)
            {
                if(grid[i][j]=='1')
                {count++;
                
                 doit(i,j,grid);
                
                }
            }
        }
        return count;
    }
};