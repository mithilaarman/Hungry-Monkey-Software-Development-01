#ifndef GAME_OVER_H_INCLUDED
#define GAME_OVER_H_INCLUDED
#include <string.h>
#include"variable.h"
#include <algorithm>
using namespace std;

void readFile();

struct Score{

	char name[100];
	int score;
	
	Score()
	{
		strcpy(name,"Empty");
		score = 0;
	
	}
};
Score x[1000];

bool sorting(Score a,Score b)
{
	if(a.score==b.score)
		return a.name>b.name;
	
	return a.score>b.score;
		
}
void readFile()
{
	FILE *fp = fopen("Player.bin","rb");
	int i=0;	
	while(fread(&x[i],sizeof(x[i]),1,fp)==1)
	{
		i++;
	}
	fclose(fp);
	sort(x,x+i,sorting);

}
void writeFile (char* name,int score)
{
    Score x;
    strcpy(x.name,name);
    x.score = score;
    FILE *fp = fopen("Player.bin","ab");
    fwrite(&x,sizeof(x),1,fp);
    fclose(fp);

}
void drawTextBox()
{ 
	iSetColor(150, 150, 150);         // function to draw rectangle where
	iRectangle(50, 345, 250, 30);     // player writes his/her name
}

void game_over()    /* GAME OVER FUNCTION */
{
	if(life<=0)
	{		
		iPauseTimer(0);
		iPauseTimer(1);    // pauses all the functions
		iPauseTimer(2);
		iPauseTimer(3);
		iPauseTimer(4);
		iPauseTimer(5);
		flag = 0 ;         // pauses the monkey
	    //score = 0 ; 		

	   	HalfPeeled_x=rand()%630, HalfPeeled_y=601,       
        Yellow_x=rand()%630,     Yellow_y=601,               
        Purple_x=rand()%630,     Purple_y=601,               // initials all the variables again
        Green_x=rand()%630,      Green_y=601,                
        Tree_x=rand()%630,       Tree_y=601,
        Bomb_x=rand()%630,       Bomb_y=601;
		
		iShowImage(0,0,mainx,mainy,s11);
		           
	    drawTextBox();  // calling the function to draw the rectangle inside which player writes name

	if(mode == 1)
	{
		iSetColor(255, 255, 255);  // shows the name typing in 
		iText(55, 355, str1);    
	}

	iSetColor(123, 111, 10);
	iText(50,380,"Enter your Name:",GLUT_BITMAP_HELVETICA_18);
	iText(10, 10, "Click to activate the box, space to finish.");


	if(value == 1 )
	{
		readFile();
	    	
		iSetColor(248, 18, 104);	       
		iText(50,220,"1st Highest Score Holder:",GLUT_BITMAP_HELVETICA_18);
		iText(270, 220 ,x[0].name, GLUT_BITMAP_HELVETICA_18) ;				
		iSetColor(248, 87, 18);
	    iText(460,220,"1st Highest Score:",GLUT_BITMAP_HELVETICA_18);
		char tempS1[100];
		sprintf( tempS1, "%d", x[0].score); 
        iText(633, 220 , tempS1 , GLUT_BITMAP_HELVETICA_18) ;		
		
		iSetColor(248, 18, 104);
	    iText(50,170,"2nd Highest Score Holder:",GLUT_BITMAP_HELVETICA_18);
		iText(270, 170 , x[1].name, GLUT_BITMAP_HELVETICA_18) ;		  
		iSetColor(248, 87, 18);
	    iText(460,170,"2nd Highest Score:",GLUT_BITMAP_HELVETICA_18);
		char tempS2[100];
		sprintf(tempS2,"%d",x[1].score);
		iText(633, 170 , tempS2, GLUT_BITMAP_HELVETICA_18) ;
		
		iSetColor(248, 18, 104);
	    iText(50,120,"3rd Highest Score Holder:",GLUT_BITMAP_HELVETICA_18);
		iText(270, 120 , x[2].name, GLUT_BITMAP_HELVETICA_18) ;
		iSetColor(248, 87, 18);
	    iText(460,120,"3rd Highest Score:",GLUT_BITMAP_HELVETICA_18);
		char tempS3[100];
		sprintf( tempS3, "%d",x[2].score); 
        iText(633, 120 ,tempS3 , GLUT_BITMAP_HELVETICA_18) ;
		
		iSetColor(248, 18, 104);
	    iText(50,300,"Your name:",GLUT_BITMAP_HELVETICA_18);
		iText(160, 300 , str1 , GLUT_BITMAP_HELVETICA_18) ;
		iSetColor(165, 87, 18);
	    iText(300,300,"Your Score :",GLUT_BITMAP_HELVETICA_18);
		char temp[100];
		sprintf(temp, "%d",score); 
        iText(410, 300 , temp , GLUT_BITMAP_HELVETICA_18) ;
		
	}
}

}


#endif // GAME_OVER_H_INCLUDED
