#include <iostream>
#include<vector>
using namespace std;

int main()
{
    int nums[7] = {1, 2, 3, 4, 5, 6, 7};
    int k = 3;
    int n = 7;

     vector<int> temp(n);
    for (int i = 0; i < n; i++)
    {
       
      
            temp[(i+k)%n] = nums[i];
       
       
    }

    for(int i=0;i<n;i++) 
      {
        nums[i] = temp[i];
      }

    for(int i=0;i<n;i++) 
      {
        cout<<nums[i]<<" ";
      }




}