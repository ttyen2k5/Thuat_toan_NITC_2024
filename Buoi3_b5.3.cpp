#include<bits/stdc++.h>
using namespace std;
int main()
{
   vector< vector<int> >& mt;
   int col=mt[0].size();
   int row=mt.size();
   int colOne=-1;
   int rowOne=-1;
   int cnt=2;
   for(int i=0; i<row; i++)
   {
        for(int j=0; j<col; j++)
        {
            if(mt[i][j]==1)
            {
                colOne=j;
                rowOne=i;
            }
        }
   }
   if(colOne==-1 && rowOne==-1) cout << "false";
   while(cnt <= col + row)
   {
        if(rowOne+1 >= 0 && rowOne+1 < row && mt[rowOne+1][colOne]==cnt)
        {
            cnt++;
            rowOne++;
        }
        else if(rowOne-1 >= 0 && rowOne-1 < row && mt[rowOne-1][colOne]==cnt)
        {
            cnt++;
            rowOne--;
        }
        else if(colOne-1 >= 0 && colOne-1 <col && mt[rowOne][colOne-1]==cnt)
        {
            cnt++;
            colOne--;
        }
        else if(colOne+1 >= 0 && colOne+1 < col && mt[rowOne][colOne+1]==cnt)
        {
            cnt++;
            colOne++;
        }
        else cout << "false";

   }
   cout << "true";
}

