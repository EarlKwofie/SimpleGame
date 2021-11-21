/*
   This is a Header File Containing All Declarations for Player Stats and Functionality for "On My Way To Work"
   Credit to Wikibooks for Program Architecture
 */

#ifndef PLAYER_H
#define PLAYER_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Character
{

    char name[50];
    int health;
    int strength;
    int dexterity;
    int intelligence;
    int loc_x;
    int loc_y;

};

void initialize();
void move(char);
void setMiniMap();
void getMiniMap();
void setLocation(int,int);
int getLocation();


#endif /*PLAYER_H*/
