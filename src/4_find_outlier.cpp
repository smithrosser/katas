#include "katas.h"
#include <vector>

int find_outlier(std::vector<int> arr)
{
   // find the single outlier in an array of all even/all odd elements
   // loop through, find sum of 2 adjacent elements
   // odd + odd = even, even + even = even, odd + even = odd

   int sum_of_mod2;

   for (int i=1; i<arr.size()-1; i++)
   {
      if ((arr[i] + arr[i+1]) % 2 != 0) // if sum of adjacent elements is odd our outlier is in the pair
      {
         sum_of_mod2 = abs(arr[0] % 2) + abs(arr[i] % 2) + abs(arr[i+1] % 2);
         
         if(sum_of_mod2 > 1) // if sum of each mod2 > 1, outlier is even (use arr[0] as comparison element)
         {
            return !(arr[i] % 2) * arr[i] 
                        + !(arr[i+1] % 2) * arr[i+1];
         }
         else
         {
            return abs(arr[i] % 2) * arr[i] 
                        + abs(arr[i+1] % 2) * arr[i+1];
         }
      }
   }

   return arr[0];
}


