#include "katas.h"

bool is_triangle(int a, int b, int c)
{
   // checks three sides of a shape against each other
   // returns true if 'triangle inequality' holds

   // not ideal this way lol (just rearrange the inequalities to subtraction)

   return (long)a + (long)b > (long)c && 
            (long)a + (long)c > (long)b && 
               (long)b + (long)c > (long)a;
}