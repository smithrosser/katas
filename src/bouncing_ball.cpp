#include "katas.h"

int bouncing_ball(double h, double bounce, double window)
{
    // ball dropped from height, bounces a fraction of the height
    // every bounce, check whether height >= window
    
    int sightings = 0;
    
    while(h >= window)
    {
        sightings++;                    // falls past window
        h = h * bounce;                 // bounces on ground
        sightings += (h >= window);     // goes up past window
    } 

    return sightings;
}