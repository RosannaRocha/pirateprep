//
//  main.c
//  pirateprep
//
//  Created by Rosanna Rocha on 8/31/20.
//

#include <stdio.h>
#include <math.h>

// define constant
#define DISTANCE_SPAIN 7228

int main()
{
    // define and initialize variables
    int kilometers_per_day = 0;
    int num_crew = 0;
    float num_oranges = 0;
    float days_at_sea = 0;
    
    // get input from user
    printf("How many kilometers can your ship travel in one day? \n");
    scanf("%d", &kilometers_per_day);
    
    printf("\nHow many crew members can your ship hold? \n");
    scanf("%d", &num_crew);
    
    // calculations
    days_at_sea = ((float)DISTANCE_SPAIN / (float)kilometers_per_day);
    num_oranges = (days_at_sea * (float)num_crew / 2);
    
    // print output
    printf("\nYou will need %.2f oranges to make the trip! \n\n", num_oranges);
    
    // return statement
    return 0;
}
