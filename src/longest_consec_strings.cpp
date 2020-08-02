#include "katas.h"
#include <string>
#include <iostream>
#include <vector>

std::string longest_consec(const std::vector<std::string>& strarr, int k)
{
   // find longest 2 concatened consecutive strings i.e. {"hello","world","hi"} -> helloworld if k = 2
   // if string array is empty, k > n or k < 1 return ""

   int n = strarr.size();

   if (n == 0 || k > n || k < 1)
   {
      return "";
   }

   std::string temp;
   std::string longest = "";

   for (int i=0; i<n-(k-1); i++)
   {
      temp = "";

      for(int j=i; j<i+k; j++)
      {
         temp += strarr[j];
      }

      if (temp.length() > longest.length())
      {
         longest = temp;
      }
   }

   return longest;
}