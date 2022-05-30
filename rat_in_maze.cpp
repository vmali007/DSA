// { Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// User function template for C++

class Solution{
    private:
    bool isSafe(vector<vector<int>> &m,int x,int y,int n,vector<vector<int>> visited){
        if((x>=0 && x<n)&& (y>=0 && y<n) && visited[x][y]==0 && m[x][y]==1){
            return true;
        }
        return false;
    }
    
    void solve(vector<vector<int>> &m, int n,int x,int y,string path,vector<vector<int>> visited,vector<string>& ans){
        //base case
        if(x==n-1 && y==n-1){
            ans.push_back(path);
            return;
        }
        
        visited[x][y] = 1;
        
        //down
        int newx = x+1;
        int newy = y;
        if(isSafe(m,newx,newy,n,visited)){
            path.push_back('D');
            solve(m,n,newx,newy,path,visited,ans);
            path.pop_back();
        }
        
        //left
        newx = x;
        newy = y-1;
        if(isSafe(m,newx,newy,n,visited)){
            path.push_back('L');
            solve(m,n,newx,newy,path,visited,ans);
            path.pop_back();
        }
        //right
        newx = x;
        newy = y+1;
        if(isSafe(m,newx,newy,n,visited)){
            path.push_back('R');
            solve(m,n,newx,newy,path,visited,ans);
            path.pop_back();
        }
        //UP
        newx = x-1;
        newy = y;
        if(isSafe(m,newx,newy,n,visited)){
            path.push_back('U');
            solve(m,n,newx,newy,path,visited,ans);
            path.pop_back();
        }
        
        visited[x][y] = 0;
    }
    public:
    vector<string> findPath(vector<vector<int>> &m, int n) {
        vector<string> ans;
        
        if(m[0][0]==0){
            return ans;
        }
        
        vector<vector<int>> visited = m;
        int srcx = 0;
        int srcy = 0;
        string path = "";
        for(int i=0;i<n;i++)
            for(int j=0;j<n;j++)
                visited[i][j] = 0;
        
        solve(m,n,srcx,srcy,path,visited,ans);
        return ans;
    }
};
// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> m(n, vector<int> (n,0));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> m[i][j];
            }
        }
        Solution obj;
        vector<string> result = obj.findPath(m, n);
        sort(result.begin(), result.end());
        if (result.size() == 0)
            cout << -1;
        else
            for (int i = 0; i < result.size(); i++) cout << result[i] << " ";
        cout << endl;
    }
    return 0;
}  // } Driver Code Ends
