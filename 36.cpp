//This code is made by Lovedeep singh
#include<bits/stdc++.h>
using namespace std;
int main(){
vector<vector<char>>board = {
{'8','3','.','.','7','.','.','.','.'}
,{'6','.','.','1','9','5','.','.','.'}
,{'.','9','8','.','.','.','.','6','.'}
,{'8','.','.','.','6','.','.','.','3'}
,{'4','.','.','8','.','3','.','.','1'}
,{'7','.','.','.','2','.','.','.','6'}
,{'.','6','.','.','.','.','2','8','.'}
,{'.','.','.','4','1','9','.','.','5'}
,{'.','.','.','.','8','.','.','7','9'}
};
for (int i = 0; i < board.size(); i++)
{
    for (int j = 0; j < board[i].size(); j++)
    {
        if(board[i][j]=='.'){
            continue;
        }
        else {
            for (int k = 0; k < board[i].size(); k++)
            {
                if(board[i][k]==board[i][j]&&k!=j){
                    return false;
                }
            }
            for (int k = 0; k < board.size(); k++)
            {
                if(board[k][j]==board[i][j]&&k!=i){
                    return false;
                }
            }
            int x = i/3;
            int y = j/3;
            for (int k = 3*x; k < 3*x+3; k++)
            {
                for (int l = 3*y; l < 3*y+3; l++)
                {
                    if(board[k][l]==board[i][j]&&k!=i&&l!=j){
                        return false;
                    }
                }
                
            }
            
        }
    
}

}return true;
}