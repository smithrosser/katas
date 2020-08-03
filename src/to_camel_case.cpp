#include "katas.h"
#include <string>
#include <iostream> 

std::string to_camel_case(std::string input)
{
    // convert string delimited by '-/_' to camelCase e.g. "to-camel_case" -> "toCamelCase"
    // if delimiter found, move to next letter & capitalise it
    
    std::string str = "";
    int i = 0;

    while( input[i] != '\0')
    {
        if(input[i] == '_' || input[i] == '-')
        {
            i++;
            str += input[i] - ( input[i] >= 97 && input[i] <= 122 ) * 32; // ensures capitals dont get -32 
        }
        else
        {
            str += input[i];
        }
        i++;
    }

    return str;
}