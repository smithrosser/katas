#include "katas.h"
#include <iostream>
#include <vector>
#include <string>

int main()
{
   std::vector<int> arr;
   arr.push_back(-2161);
   arr.push_back(4843);
   arr.push_back(9075);
   arr.push_back(-7369);
   arr.push_back(827);
   arr.push_back(-7351);
   arr.push_back(4741);
   arr.push_back(-8431);
   arr.push_back(10397);
   arr.push_back(16458);

   std::cout << find_outlier(arr) << std::endl;
}
