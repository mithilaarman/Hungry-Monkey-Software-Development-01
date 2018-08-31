#ifndef SCORE_H_INCLUDED
#define SCORE_H_INCLUDED
#include"variable.h"

void pointcounting();

void scoring()
{
        char str[100];
 
        // score print
        iSetColor( 0, 0, 0 );
        iText( 660, 550, "SCORE:", GLUT_BITMAP_TIMES_ROMAN_24 );
        sprintf( str, "%d", score );                              // prints score
        iText( 760, 550, str, GLUT_BITMAP_TIMES_ROMAN_24 );
		char stri[100];
        // life print
        iText( 660, 520, "Life: ", GLUT_BITMAP_TIMES_ROMAN_24 );
        sprintf( stri, "%d", life );                                // prints life 
        iText( 760, 520, stri, GLUT_BITMAP_TIMES_ROMAN_24 );
        
}

void pointcounting()
{
	 // half peeled bananas - increases score points

	if((monkey_x>=HalfPeeled_x && monkey_x<=HalfPeeled_x+32)||(monkey_x+32>=HalfPeeled_x && monkey_x+32<=HalfPeeled_x+32))
	{
			   if((HalfPeeled_y>=monkey_y && HalfPeeled_y<= monkey_y+98) || (HalfPeeled_y+32>=monkey_y && HalfPeeled_y<=monkey_y+98))
                {
				    	v=1 ;
                        HalfPeeled_y=601;
                        HalfPeeled_x=rand()%600;
                        if(v==1)
							score=score+1; 
						     
                }
	}
	// yellow bananas - increases score points

	if((monkey_x>=Yellow_x && monkey_x<=Yellow_x+32)||(monkey_x+32>=Yellow_x && monkey_x+32<=Yellow_x+32))
	{
			   if((Yellow_y>=monkey_y && Yellow_y<= monkey_y+98) || (Yellow_y+32>=monkey_y && Yellow_y<=monkey_y+98))
                {
				    	v=1 ;
                        Yellow_y=601;
                        Yellow_x=rand()%630;
                        if(v==1)score=score+1;    
                }
	}
    // purple bananas - increases score points

	if((monkey_x>=Purple_x && monkey_x<=Purple_x+32)||(monkey_x+32>=Purple_x && monkey_x+32<=Purple_x+32))
	{
			   if((Purple_y>=monkey_y && Purple_y<= monkey_y+98) || (Purple_y+32>=monkey_y && Purple_y<=monkey_y+98))
                {
				    	v=1 ;
                        Purple_y=601;
                        Purple_x=rand()%630;
                        if(v==1)score=score+1;   
                }
	}
    // green bananas - increases score points

	if((monkey_x>=Green_x && monkey_x<=Green_x+32)||(monkey_x+32>=Green_x && monkey_x+32<=Green_x+32))
	{
			   if((Green_y>=monkey_y && Green_y<= monkey_y+98) || (Green_y+32>=monkey_y && Green_y<=monkey_y+98))
                {
				    	v=1 ;
                        Green_y=601;
                        Green_x=rand()%630;
                        if(v==1)score=score+1;    
                }
	}
    // banana trees - increases life points

	if((monkey_x>= Tree_x && monkey_x<= Tree_x+32)||(monkey_x+32>= Tree_x && monkey_x+32<= Tree_x+32))
	{
			   if((Tree_y>=monkey_y && Tree_y<= monkey_y+98) || (Tree_y+32>=monkey_y && Tree_y<=monkey_y+98))
                {
				    	v=1 ;
                        Tree_y=6000;
                        Tree_x=rand()%600;
                        if(v==1)
							life=life++;    
                }
	}
	//bomb

	if((monkey_x>= Bomb_x && monkey_x<= Bomb_x+32)||(monkey_x+32>= Bomb_x && monkey_x+32<= Bomb_x+32))
	{
			   if((Bomb_y>=monkey_y && Bomb_y<= monkey_y+98) || (Bomb_y+32>=monkey_y && Bomb_y<=monkey_y+98))
                {
				    	v=1 ;
                        Bomb_y=601;
                        Bomb_x=rand()%600;
                        if(v==1)
							life=life--;    
                }
	}
	/*if(coun==8)    
	{
        life = life--;
		coun = 0 ;
	}*/
	
}
#endif // SCORE_H_INCLUDED
