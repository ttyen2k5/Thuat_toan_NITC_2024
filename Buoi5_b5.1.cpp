// Bai toan quan hau
#include<bits/stdc++.h>
using namespace std;
const int MAX_N=10;
int n;
vector<int> col; // Lưu cột mỗi quân hậu đặt ở hàng thứ i
bool isSafe(int x, int y)
{
   for(int i=1; i<x; i++)
   {
      if(col[i]==y || (abs(i-x)==abs(col[i]-y)))
      {
         return false;
      }
   }
   return true;
}

//Hàm quay lui để đặt quân hậu từ hàng x trở đi
bool solveQueens(int x)
{
   if(x>n)
   {
      // Đã đặt n quân hậu thành công 
      for(int i=1; i<=n; i++)
      {
         cout << i << " " << col[i] << endl;
      }
      return true;
   }
   for(int y=1; y<=n; ++y)
   {
      if(isSafe(x,y))
      {
         col[x]=y;
         if(solveQueens(x+1))
         {
            return true;
         }
      }
   }
   return false;
}

// Hàm sinh ra tất cả các trường hợp 
void solveQueen(int x)
{
   if(x>n)
   {
      for(int i=1; i<=n; i++)
      {
         cout << i << " " << col[i] << endl;
      }
      cout << "---------------" << endl;
   }
   for(int y=1; y<=n; ++y)
   {
      if(isSafe(x,y))
      {
         col[x]=y;
         solveQueen(x+1);
      }
   }
}

int main()
{
    cin >> n;
    col.resize(MAX_N);
    if(!solveQueens(1))
    {
      cout << "Không có cách đặt " << n << " quân hậu thỏa mãn đề bài vào bàn cờ " << n << "x" << n << endl;
    }
}
