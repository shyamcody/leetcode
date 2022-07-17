class Solution {
public:
    int countServers(vector<vector<int>>& grid) {
        int count_communicators = 0;
        int m = grid.size();
        int n = grid[0].size();
        for(int i = 0; i<m; i++){
            for(int j = 0; j<n; j++){
                //cout<< "point" << i << j<< "\n";
                if(grid[i][j]!=0){
                    int grid_count = 0;
                    int anti_grid_count = 0;
                    for(int k=i+1;k<m;k++){
                        //cout<<"same column traversing"<<"\n";
                        if(grid[k][j]==1){
                            //cout<<k<<j<<"\n";
                            grid_count += 1;
                            grid[k][j] = -1;
                        }
                        else if(grid[k][j] == -1){
                            anti_grid_count +=1;
                        }
                    }
                    for(int l=j+1;l<n;l++){
                        //cout<<"same row traversing"<<"\n";
                        if(grid[i][l]==1){
                            //cout<<i<<l<<"\n";
                            grid_count += 1;
                            grid[i][l] = -1;
                        }
                        else if(grid[i][l] == -1){
                            anti_grid_count += 1;
                        }
                    }
                    if(grid_count>0 && grid[i][j] == 1)
                    {grid_count +=1;}
                    else if(anti_grid_count>0 && grid_count==0 && grid[i][j] == 1)
                    {grid_count +=1;}
                    count_communicators += grid_count;
                }
            }
        }
        return count_communicators;
    }
};
