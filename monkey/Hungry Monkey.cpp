#include "iGraphics.h"
#include "score.h"
#include"variable.h"
#include"banana.h"
#include"game_over.h"
#include<stdlib.h>
#include <stdio.h>
/*
       function iDraw() is called again and again by the system.
*/
void iDraw()
{        
        if(menu==1)   // HUNGRY MONKEY
		{
		   iClear();
		   iShowImage(0,0,mainx,mainy,h);
	  	   iSetColor(255,80,0);
		   iText(280, 250, "Click Anywhere to Continue", GLUT_BITMAP_TIMES_ROMAN_24);
		}
		if(menu==2)  // Menu - Option Selections 
		{
		   iClear();
		   iShowImage(0,0,mainx,mainy,s4);
		   iSetColor(0, 0, 0);
		   iText(350, 400, "New Game", GLUT_BITMAP_TIMES_ROMAN_24);
		   iText(350, 340, "High Score", GLUT_BITMAP_TIMES_ROMAN_24);
		   iText(350, 280, "Help", GLUT_BITMAP_TIMES_ROMAN_24);
		   iText(350, 220, "About", GLUT_BITMAP_TIMES_ROMAN_24);
		   iText(350, 150, "Exit", GLUT_BITMAP_TIMES_ROMAN_24);			
		}		
		if(menu==3)  //  easy level 
		{
	       iClear();
		   iShowImage(0,0,mainx,mainy,s8);
		   iShowImage(Yellow_x,Yellow_y,32,32,banana);
		   iShowImage(HalfPeeled_x,HalfPeeled_y,32,32,bananapeel);
		   iShowImage(Bomb_x,Bomb_y,32,32,bom);
		   iShowImage(monkey_x,monkey_y,32,98,m1);
		   scoring();
		   pointcounting();
		   game_over();
		}
		if(menu==4) // medium level 
		{
	       iClear();
		   iShowImage(0,0,mainx,mainy,s10);
		   iShowImage(HalfPeeled_x,HalfPeeled_y,32,32,bananapeel);
		   iShowImage(Purple_x,Purple_y,32,32,purplebanana);
		   iShowImage(Green_x,Green_y,32,32,greenbanana);
		   iShowImage(Tree_x,Tree_y,32,32,bananatree);
		   iShowImage(Bomb_x,Bomb_y,32,32,bom);
		   iShowImage(monkey_x,monkey_y,32,98,m1);
		   scoring();
           pointcounting();
		   game_over();		
		}
		if(menu==5)  // hard level 
		{
		   iClear();
		   iShowImage(0,0,mainx,mainy,s9);
		   iShowImage(HalfPeeled_x,HalfPeeled_y,32,32,bananapeel);
		   iShowImage(Yellow_x,Yellow_y,32,32,banana);
		   iShowImage(Purple_x,Purple_y,32,32,purplebanana);
		   iShowImage(Green_x,Green_y,32,32,greenbanana);
		   iShowImage(Tree_x,Tree_y,32,32,bananatree);
		   iShowImage(Bomb_x,Bomb_y,32,32,bom);
		   iShowImage(monkey_x,monkey_y,32,98,m1);
		   scoring();
           pointcounting();
		   game_over();
		}
		if(menu==6)  // level selections 
		{
           iClear();
		   iShowImage(0,0,mainx,mainy,s1);
		   iSetColor(248, 18, 104);
		   iText(220, 450 , "SELECT YOUR LEVEL TO PLAY",GLUT_BITMAP_TIMES_ROMAN_24) ;
		   iSetColor(0, 0, 0);
		   iText(350, 400, "Easy", GLUT_BITMAP_TIMES_ROMAN_24);
		   iText(350, 340, "Medium", GLUT_BITMAP_TIMES_ROMAN_24);
		   iText(350, 280, "Hard", GLUT_BITMAP_TIMES_ROMAN_24);
		   iText(380, 200, "Back", GLUT_BITMAP_TIMES_ROMAN_24);
		}
		if(menu==7)    // help page 
		{
			iClear();
			iShowImage(0,0,mainx,mainy,s1);
			iSetColor(0, 0, 0);
			iText(380, 500, "HELP ", GLUT_BITMAP_TIMES_ROMAN_24);
			iText(200, 460, "# Press Left and Right arrow keys ", GLUT_BITMAP_TIMES_ROMAN_24);
			iText(200, 410, "  to move the monkey.", GLUT_BITMAP_TIMES_ROMAN_24);			
			iText(200, 360, "# Eat colored bananas to score.", GLUT_BITMAP_TIMES_ROMAN_24);
			iText(200, 310, "# Eating banana tree will give life.", GLUT_BITMAP_TIMES_ROMAN_24);
			iText(200, 260, "# Eating bomb will decrease life points.", GLUT_BITMAP_TIMES_ROMAN_24);			
			iText(380, 120, "Back", GLUT_BITMAP_TIMES_ROMAN_24);
		}
		if(menu==8)   // about page 
		{
			iClear();
			iShowImage(0,0,mainx,mainy,s1);
			iSetColor(0, 0, 0);
			iText(380, 500, "About ", GLUT_BITMAP_TIMES_ROMAN_24);
			iText(200, 480, "Project by ", GLUT_BITMAP_TIMES_ROMAN_24);
			iText(200, 440, "Mithila Arman", GLUT_BITMAP_TIMES_ROMAN_24);
			iText(200, 400, "17.02.04.100", GLUT_BITMAP_TIMES_ROMAN_24);
			iText(200, 360, "Rahemin Ahmed Raiyan", GLUT_BITMAP_TIMES_ROMAN_24);
			iText(200, 320, "17.02.04.090", GLUT_BITMAP_TIMES_ROMAN_24);
			iText(200, 280, "Ahsanullah University of Science", GLUT_BITMAP_TIMES_ROMAN_24);
			iText(200, 240, "& Technology", GLUT_BITMAP_TIMES_ROMAN_24);
			iText(200, 200, "group 04", GLUT_BITMAP_TIMES_ROMAN_24);
			iText(380, 120, "Back", GLUT_BITMAP_TIMES_ROMAN_24);
		} 

		if(menu == 9) // highscore page 
		{
			iClear() ;
			iShowImage(0,0,mainx,mainy,s12);
			readFile();
			iSetColor(60 , 30 , 0);
	        iText(50,400,"Highest Score Holders",GLUT_BITMAP_TIMES_ROMAN_24);			   
			iText(55, 350, "(i)", GLUT_BITMAP_TIMES_ROMAN_24);						
			iText(98, 350 ,x[0].name, GLUT_BITMAP_TIMES_ROMAN_24) ;					
			iText(55, 300, "(ii)", GLUT_BITMAP_TIMES_ROMAN_24);						
            iText(98, 300 ,x[1].name , GLUT_BITMAP_TIMES_ROMAN_24) ;						
			iText(55, 250, "(iii)", GLUT_BITMAP_TIMES_ROMAN_24);						
            iText(98, 250 , x[2].name, GLUT_BITMAP_TIMES_ROMAN_24) ;		
				

	        iText(400,400,"Highest Scores",GLUT_BITMAP_TIMES_ROMAN_24);
			char temp1[100];
			sprintf(temp1,"%d",x[0].score);
		    iText(420, 350 ,temp1, GLUT_BITMAP_TIMES_ROMAN_24) ;
			char temp2[100];
			sprintf(temp2,"%d",x[1].score);
		    iText(420, 300 ,temp2, GLUT_BITMAP_TIMES_ROMAN_24) ;
			char temp3[100];
			sprintf(temp3,"%d",x[2].score);
		    iText(420, 250 ,temp3, GLUT_BITMAP_TIMES_ROMAN_24) ;								
            iSetColor(0 , 0, 0);
            iText(380, 100, "Back", GLUT_BITMAP_TIMES_ROMAN_24);

		}

}

/*
        function iKeyboard() is called whenever the user hits a key in keyboard.
        key- holds the ASCII value of the key pressed.
*/

void iKeyboard(unsigned char key)
{
        if(key == 'p')
	{
		iPauseTimer(0) ;  // pause half-peeled
		iPauseTimer(1) ;  // pause yellow
		iPauseTimer(2) ;  // pause purple
		iPauseTimer(3) ;  // pause green
		iPauseTimer(4) ;  // pause tree
		iPauseTimer(5) ;  // pause bomb
		flag = 0 ;
	}
	if(key == 'r')
	{ 
		iResumeTimer(0);  // resume half-peeled
		iResumeTimer(1);  // resume yellow
		iResumeTimer(2);  // resume purple 
		iResumeTimer(3);  // resume green
		iResumeTimer(4);  // resume tree
		iResumeTimer(5);  // resume bomb 
		flag = 1 ; 
	}
	if(mode == 1)
	{
		int i;
		if(key == 32  || key== '\r')
		{
			writeFile(str1,score);
			mode = 0;
			value = 1;
		}
		else if((key>='a' && key<='z' ) || (key>='a' && key<='z'))
		{
			int len = strlen(str1);
			str1[len] = key;
			str1[len+1] = '\0';

		}					
	}			
	//place your codes for other keys here
}
	/*
        function iMouseMove() is called when the user presses and drags the mouse.
        (mx, my) is the position where the mouse pointer is.
*/

void iMouseMove(int mx, int my)
{       
	//place your codes here
}
 /*
        function iMouse() is called when the user presses/releases the mouse.
        (mx, my) is the position where the mouse pointer is.
*/
void iMouse(int button, int state, int mx, int my)
{
        
        if(button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
        {
            //main menu
			if (mx>=0&&mx<=800 && my>=0&&my<=600 && menu==1)
			{menu=2;}  //cover
			else if (mx>=350&&mx<=470 && my>=390&&my<=430 && menu==2)
			menu=6 ;  //levels selection
			else if (mx>=350&&mx<=470 && my>=330&&my<=370 && menu==2)
			menu=9;  //high score
			else if (mx>=365&&mx<=430 && my>=270&&my<=310 && menu==2)
			menu=7; //help
			else if (mx>=370&&mx<=425 && my>=130&&my<=170 && menu==2)
			exit(2);  //exit			
			else if (mx>=365&&mx<=430 && my>=210&&my<=250 && menu==2)
			menu=8; // about
			else if (mx>=370&&mx<=425 && my>=110&&my<=170 && menu==8)
			menu=2;  //back

			//level select menu
			else if (mx>=350&&mx<=470 && my>=390&&my<=430 && menu==6)
			{
				menu=3;n=1;life=5;value = 0;	
				iResumeTimer(0);  // resume half-peeled
				iResumeTimer(1);  // resume yellow
				iResumeTimer(2);  // resume purple 
				iResumeTimer(3);  // resume green
				iResumeTimer(4);  // resume tree
				iResumeTimer(5);  // resume bomb 
				flag = 1 ;
				coun =0 ; 
			} //easy
			else if (mx>=350&&mx<=470 && my>=330&&my<=370 && menu==6)
			{
				menu=4;n=2;life=3;value = 0;	
			    iResumeTimer(0);  // resume half-peeled
		        iResumeTimer(1);  // resume yellow
		        iResumeTimer(2);  // resume purple 
		        iResumeTimer(3);  // resume green
		        iResumeTimer(4);  // resume tree
		        iResumeTimer(5);  // resume bomb 
		        flag = 1 ;
				coun=0;
			}  //med
			else if (mx>=350&&mx<=470 && my>=270&&my<=310 && menu==6)
			{
				menu=5;n=3;life=2;value = 0;	
			    iResumeTimer(0);  // resume half-peeled
		        iResumeTimer(1);  // resume yellow
		        iResumeTimer(2);  // resume purple 
		        iResumeTimer(3);  // resume green
		        iResumeTimer(4);  // resume tree
		        iResumeTimer(5);  // resume bomb 
		        flag = 1 ; 
				coun=0 ; 
			} //hard			
			else if (mx>=370&&mx<=425 && my>=190&&my<=230 && menu==6)
			menu=2;  //back to option page
			//help menu
			else if (mx>=370&&mx<=425 && my>=110&&my<=150 && menu==7)
			menu=2;  //back to option page
			else if(mx >= 50 && mx <= 300 && my >= 345 && my <= 380 && mode == 0)
			{
				mode = 1;				 
			}
			else if (mx>=370&&mx<=425 && my>=90&&my<=130 && menu==9)
			menu=2;  //back to option page
        }	
        if(button == GLUT_RIGHT_BUTTON && state == GLUT_DOWN)
        {
                //place your codes here
        }
}
/*
        function iSpecialKeyboard() is called whenver user hits special keys like-
        function keys, home, end, pg up, pg down, arraows etc. you have to use
        appropriate constants to detect them. A list is:
        GLUT_KEY_F1, GLUT_KEY_F2, GLUT_KEY_F3, GLUT_KEY_F4, GLUT_KEY_F5, GLUT_KEY_F6,
        GLUT_KEY_F7, GLUT_KEY_F8, GLUT_KEY_F9, GLUT_KEY_F10, GLUT_KEY_F11, GLUT_KEY_F12,
        GLUT_KEY_LEFT, GLUT_KEY_UP, GLUT_KEY_RIGHT, GLUT_KEY_DOWN, GLUT_KEY_PAGE UP,
        GLUT_KEY_PAGE DOWN, GLUT_KEY_HOME, GLUT_KEY_END, GLUT_KEY_INSERT
*/
void iSpecialKeyboard(unsigned char key)
{
	if(key == GLUT_KEY_LEFT)
        {
		    if(flag == 1)
			{
				if(monkey_x>16)
				{
					monkey_x-=10;  // moves the monkey to left 
				}
			}                
        }
    if(key == GLUT_KEY_RIGHT)
        {
			if(flag == 1)
			 {
				 if(monkey_x<600)
			     {
					 monkey_x+=10;  // moves the monkey to right 
				 }
			}
        }
		if(key == GLUT_KEY_F1)
		{
			menu=2; 	 
			flaging = 0 ;
			score = 0;
			str1[0] ='\0';
		}
		if( key == GLUT_KEY_END)
		{
                exit(1) ; 
		}
       
}
int main()
{
        //place your own initialization codes here 
	    len = 0;
    	mode = 0;
    	str1[0]= 0;
       
	    iSetTimer(20, BananaHalfPeeled);
		iSetTimer(20, BananaYellow);
		iSetTimer(20, BananaPurple);
		iSetTimer(20, BananaGreen);
		iSetTimer(20, BananaTree);
		iSetTimer(20, Bomb); 
		
		if(musicOn)
			PlaySound("music\\GameMusic2.wav", NULL ,SND_LOOP | SND_ASYNC);

        iInitialize(mainx,mainy, "HUNGRY MONKEY");

		m1 = iLoadImage("image\\m1.png");
		h = iLoadImage("image\\h.jpg");
		banana = iLoadImage("image\\banana.png");
		bananapeel = iLoadImage("image\\bananapeel.png");
		bananatree = iLoadImage("image\\bananatree.png");
		bluebanana = iLoadImage("image\\bluebanana.png");
		bom = iLoadImage("image\\bom.png");
		greenbanana = iLoadImage("image\\greenbanana.png");
		purplebanana = iLoadImage("image\\purplebanana.png");
		s1 = iLoadImage("image\\s1.jpg");
		s2 = iLoadImage("image\\s2.jpg");
		s3 = iLoadImage("image\\s3.jpg");
		s4 = iLoadImage("image\\s4.jpg");
		s5 = iLoadImage("image\\s5.jpg");
		s6 = iLoadImage("image\\s6.jpg");
		s7 = iLoadImage("image\\s7.jpg");
		s8 = iLoadImage("image\\s8.jpg");
		s9 = iLoadImage("image\\s9.jpg");
		s10 = iLoadImage("image\\s10.jpg");
	    s11 = iLoadImage("image\\s11.jpg");
		s12 = iLoadImage("image\\s12.jpg");

		iStart();
        return 0;
}



 

     