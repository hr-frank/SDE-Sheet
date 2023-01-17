class Solution {
public:


   bool isSafe(int row, int col, vector<string>&board, int n)
   {
         int duprow= row;
         int dupcol = col;
         // For check upper diagonal
         while(row>=0 and col>=0)
         {
             if(board[row][col]=='Q') return false;
             row--;
             col--;
         }

         // check parallel
         col= dupcol;
         row = duprow;
         while(col>=0)
         {
             if(board[row][col]=='Q') return false;
             col--;
         }

         col = dupcol;
         row = duprow;

         while(row<n and col>=0)
         {
             if(board[row][col]=='Q') return false;
             row++;
             col--;
         }
     return true;

   }

   void NQueen(int col, vector<string>&board, vector<vector<string>>&ans, int n)
   {
        if(col == n) 
        {
            ans.push_back(board);
            return;
        }

        for(int row=0; row<n; row++)
        {
            if(isSafe(row,col,board,n))
            {
                board[row][col]='Q';
                NQueen(col+1, board, ans, n);
                board[row][col]='.';
            }
        }
   }



    vector<vector<string>> solveNQueens(int n) 
    {
        vector<vector<string>>ans;
        vector<string>board(n);
        string s(n,'.');
        for(int i=0; i<n; i++)
        {
            board[i]=s;
        }
        NQueen(0,board,ans,n);
        return ans;
    }
};
