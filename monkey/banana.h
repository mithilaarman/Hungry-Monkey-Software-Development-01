#ifndef BANANA_H_INCLUDED
#define BANANA_H_INCLUDED
#include"variable.h"
//bananas
void BananaHalfPeeled()
{
 
        HalfPeeled_y-=4 ;//speed
        if(HalfPeeled_y<=0)
        {
                HalfPeeled_x=rand()%600;
                HalfPeeled_y=601;
				coun++ ;
			
        }
}
void BananaTree()
{
 
        Tree_y-=7 ;//speed
        if(Tree_y<=0)
        {
                Tree_x=rand()%600;
                Tree_y=6000;
				coun++ ;
        }
}
void BananaYellow()
{
 
        Yellow_y-=4  ;
        if(Yellow_y<=0)
        {
                Yellow_x=rand()%630;
                Yellow_y=608 ;
				coun++ ;
        } 
}

void BananaPurple()
{
 
        Purple_y-=2 ;
        if(Purple_y<=0)
        {
                Purple_x=rand()%630;
                Purple_y=615;
				coun++ ;
	
        } 
}

void BananaGreen()
{
 
        Green_y-=-3 ;
        if(Green_y<=0)
        {
                 Green_x=rand()%630;
                 Green_y=630;
				 coun++ ;
		
        }
}

void Bomb()
{
 
        Bomb_y-=5;//speed
        if(Bomb_y<=0)
        {
                Bomb_x=rand()%600;
                Bomb_y=650;
				coun++ ;
        }
}


#endif // BANANA_H_INCLUDED
