#include <iostream>
#include <vector>

using namespace std;

int solution(vector<vector<int>> board){
    int max = 0;
    for(int i = 0; i<board.size(); i++){
        for(int j = 0; j<board[i].size(); j++){
            if((i!=0 && j!=0) && board[i][j]){
                board[i][j] = (board[i][j-1]<board[i-1][j])?board[i][j-1]:board[i-1][j];
                board[i][j] = ((board[i-1][j-1]<board[i][j])?board[i-1][j-1]:board[i][j])+1;
                if(max < board[i][j])
                    max = board[i][j];
            }
        	if(max < board[i][j])
                max = board[i][j];
        }
    }
    return max*max;
}