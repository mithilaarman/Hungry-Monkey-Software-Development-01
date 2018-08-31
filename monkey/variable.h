#ifndef VARIABLE_H_INCLUDED
#define VARIABLE_H_INCLUDED

int monkey_x=0,monkey_y=0;//co-ordinate
int v=0;//collision 

int m1,h,banana,bananapeel,bananatree,bluebanana,bom,greenbanana,purplebanana,s1,s2,s3,s4,s5,s6,s7,s8,s9,s10,s11,s12; 

int HalfPeeled_x=rand()%600 ;
int HalfPeeled_y=601;
int Tree_x=rand()%600;
int Tree_y=6000;
int Yellow_x=rand()%630;
int Yellow_y=601;               // of the co-ordinates
int Purple_x=rand()%630;
int Purple_y=601;               // of the falling
int Green_x=rand()%630;
int Green_y=601;       ;
int Bomb_x=rand()%600;
int Bomb_y=601;

int score=0, life=5 ,flag;
int mainx=800, mainy=600;

bool musicOn = true;

char str1[100], str2[100],str3[100], str4[100],str5[100], str6[100],str7[100], str8[100] ;
int checking = 0 ; 

int menu=1;
int coun=0;
int mode;
int n2 =0 ;  char ch2[1000] ;
int num=0 ;  char ch[1000] ;
int n1 =0 ;  char ch1[1000] ;

FILE *fp;
FILE *f1;
FILE *f2;
int n = 1 , len   ;   
int flaging = 0 ; 
int value=0;



#endif // VARIABLE_H_INCLUDED
