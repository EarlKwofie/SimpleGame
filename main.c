#include "player.h"

int main(void)
{
        
        char dir;
       
        initialize();
    
        setMiniMap();
   
    while(getLocation() == 0)
    {   
        dir = getchar();
 
        move(dir);

        if( dir == 10 )
             continue;
        else if(dir == 'a' || dir == 'w' || dir == 'd' || dir == 's')
             getMiniMap();
        else
             printf("Invalid");
    }
        
}
