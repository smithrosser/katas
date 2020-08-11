#include "katas.h"
#include <string>

std::string find_shortest(std::string input)
{
    // find shortest word from an input string
    // words delimited by spaces, look for the space 
    
    std::string temp = "";
    std::string longest = "";
    int stringLength = 0;
    int i = 0; 

    while (input[i] != '\0')
    {
        temp += input[i];
        
        if (input[i+1] == ' ' || input[i+1] == '\0')
        {
            longest = (temp.length() > longest.length()) ? temp : longest;
            temp = "";
            i++;
        }
        
        i++;
    }

    return longest;
}