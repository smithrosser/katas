#include "katas.h"
#include <vector>


unsigned int count_passengers(const std::vector< std::pair<int, int> >& busStops)
{
   // array of bus stops, each with people entering and exiting
   // keep tally of total number of people on the bus after each stop

   unsigned int sum = 0;

   for (int i=0; i<busStops.size(); i++)
   {
      sum += busStops[i].first;
      sum -= busStops[i].second;
   }

   return sum;
}