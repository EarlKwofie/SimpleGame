
#include "player.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


#define MPSIZE_X 4
#define MPSIZE_Y 4


char miniMap[MPSIZE_Y][MPSIZE_X];
struct Character user;


void initialize()
{
        user.loc_x = 0;
        user.loc_y = 0;
}


void setMiniMap()
{   
    for(int i = 0; i < MPSIZE_Y; i++)
        {   for(int j = 0; j < MPSIZE_X; j++)
            {
                if(j == user.loc_x && i == user.loc_y)
                { miniMap[i][j] = 'P'; }
                else if(j == (MPSIZE_X - 1) && i == (MPSIZE_Y - 1))
                { miniMap[i][j] = 'O'; }
                else
                { miniMap[i][j] = 'X'; }                  
            }
        }
    
}

void getMiniMap()
{
    for(int i = 0; i < MPSIZE_Y; i++)
        {   for(int j = 0; j < MPSIZE_X; j++)
            {
                printf("%c ", miniMap[i][j]);
            }
            printf("\n\n");
        }
}


void setLocation(int x, int y)
{
    user.loc_x = x;
    user.loc_y = y;
}

void move(char dir)
{
    switch(dir)
    {
        case 'w':
        user.loc_y++;
        break;
        case 'a':
        user.loc_x--;
        break;
        case 'd':
        user.loc_x++;
        break;
        case 's':
        user.loc_y--;
        break;
    } 
    if(user.loc_x < 0 || user.loc_x > 3 || user.loc_y > 3 || user.loc_y < 0)
    {
        if(user.loc_x < 0)
        {
            user.loc_x = 0;
        }
        else if(user.loc_x > 3)
        {
            user.loc_x = 3;
        }
        else if(user.loc_y < 0)
        {
            user.loc_y = 0;
        }
        else
        {
            user.loc_y = 3;   
        }
    }
    
    setMiniMap();  
}
int getLocation()
{
    if(user.loc_x == MPSIZE_X-1 && user.loc_y == MPSIZE_Y-1)
    {
        return 1;  
    }
    else
    {
        return 0;
    }
}
