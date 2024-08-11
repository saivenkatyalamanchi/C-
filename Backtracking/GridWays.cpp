#include<iostream>
#include<vector>
#include<string>
using namespace std;

void solve(vector<vector<int> >& matrix, string path, int m,int n,int row, int col){
                if(row < 0 || row >= m || col < 0 || col >= n){
                        return;
                }

                if(row == m-1 && col == n-1){
                        cout << path << endl;
                }

                solve(matrix, path+'R', m, n, row, col+1);
                solve(matrix, path+'D', m, n, row+1, col);
}

int main(){
        int n = 4;
        int m= 4;
        vector<vector<int> > matrix(m, vector<int>(n,1));
        string path = "";
        solve(matrix, path, m, n, 0 ,0);
        return 0;
}