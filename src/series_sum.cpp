#include "katas.h"
#include <string>
#include <iostream>

std::string series_sum(int n)
{
    // sum terms of series 1, 1/4, 1/7, 1/10, 1/13, 1/16, ...
    if (n <= 0)
    {
        return "0.00";
    }
    
    float sum = 1;

    if (n > 1)
    {
        for (int i=1; i<n; i++) 
        { 
            sum += 1 / (float) 3*i + 1; 
        }
    }

    return std::to_string(sum);
}