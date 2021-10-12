#include<bits/stdc++.h>
using namespace std;

int firstMissingPositive(vector<int>& A) {
      int n=A.size();

      bool one = false;

      for(int x : A)
      if(x == 1)
      {
          one = true;
          break;
      }

      if(!one)
          return 1;

      if(n == 1)
          return 2;

      for(int i = 0; i < n; i++)
      {
          if(A[i] <= 0 || A[i] > n)
              A[i] = 1;
      }

      for(int i = 0; i < n; i++)
      {
          int x = abs(A[i]);

          if(A[x - 1] > 0)
              A[x - 1] *= -1;
      }

      for(int i = 0; i < n; i++)
      {
          if(A[i] > 0)
              return i + 1;
      }

      return n+1;
    }

int main()
{
  int n;
  cout<<"Enter the size of Array :- ";
  
  cin>>n;
  
  vector<int> A(n);
  
  for(int i = 0; i < n; i++)
    cin>>A[i];
  
  int ans = firstMissingPositive(A);
  
  cout<<"First Missing Positive number is "<<ans;
  
}
