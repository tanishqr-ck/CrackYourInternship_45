class Solution {
public:
    void doit(vector<vector<int>>& image, int sr, int sc, int color,int th)
    {
        if(sr<0||sc<0||sr>=image.size()||sc>=image[0].size())
            return;
        if(image[sr][sc]!=th)
            return;
  
        image[sr][sc]=color;
         
        doit(image,sr-1,sc,color,th);
        doit(image,sr,sc-1,color,th);
        doit(image,sr+1,sc,color,th);
        doit(image,sr,sc+1,color,th);
        
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int th=image[sr][sc];
        if(th==color)
            return image;
        doit(image,sr,sc,color,th);
       return image;
        
    }
};