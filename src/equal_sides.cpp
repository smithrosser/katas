#include "katas.h"
#include <iostream>

int getSumBetweenIndices(const std::vector<int> nums, int a, int b)
{
   int sum = 0;
   for (int i=a; i<b; i++)
   {
      sum += nums[i];
   }
   return sum;
}

int find_even_index(const std::vector<int> nums)
{
   // find element of array where sum of indices either side is equal
   // i.e. {1, 2, 3, 4, 3, 2, 1} returns index 3

   int sumLeft;
   int sumRight;
   int limit = nums.size();

   for (int i=0; i<limit; i++) // iterate through
   {
      sumLeft = getSumBetweenIndices(nums, 0, i);
      sumRight = getSumBetweenIndices(nums, i+1, limit);

      std::cout << "index " << i << ", " << sumLeft << " " << sumRight << std::endl;

      if(sumLeft == sumRight)
      {
         return i;
      }
   }

   return -1;
}