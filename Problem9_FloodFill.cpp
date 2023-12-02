//link: leetcode.com/problems/flood-fill
class Solution {
public:
    void dfs(vector<vector<int>>& image, int sr, int sc, int prevColor, int color){
        int dx[4] = {-1, 0, 0, 1};
        int dy[4] = {0, -1, 1, 0};
        image[sr][sc] = color;
        for(int i = 0; i < 4; i++){
            int x = sr+dx[i];
            int y = sc+dy[i];
            if(x >= 0 && x < image.size() && y >= 0 && y < image[0].size()&&image[x][y] == prevColor)
            {
                
             	dfs(image, x, y, prevColor, color);   	
			}
        }
    }
vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color){
        if(image[sr][sc] == color)
        	return image;
        int prevColor = image[sr][sc];
        dfs(image, sr, sc, prevColor, color);
        return image;
    }

};
