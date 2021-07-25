#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<stdlib.h>
#include<string.h>
void show_record(); 
void reset_score();
void help();
void edit_score(float,char[]);
int main()
{
     int countr,r,r1,count,i,n;
     float score;
     char choice;
     char playername[20];
     mainhome:
     printf("\t\t\t  << KAUN BANEGA CARORPATI >>\n");
     printf("\n\t\t****************************************");
	 printf("\n\t\t\t\tWELCOME TO KBC");
     printf("\n\t\t****************************************");
     printf("\n\t\t   BECOME RICH EARN UPTO 10 Lakh Rupees :-) ");
     printf("\n\t\t****************************************");
     printf("\n\t\t > Press S to start the game");
     printf("\n\t\t > Press V to view the highest score  ");
     printf("\n\t\t > Press R to reset score");
     printf("\n\t\t > press H for help            ");
     printf("\n\t\t > press Q to quit             ");
     printf("\n\t\t________________________________________\n\n");
     choice=toupper(getch());
     
     if(choice=='V')
	 {
         system("cls");
         show_record();
         system("cls");
         goto mainhome;
	 }
     
     else if(choice=='H')
	 {
         system("cls");
         help();
         getch();
         system("cls");
	     goto mainhome;
	 }
	 
     else if(choice=='R')
	 {
         system("cls");
         reset_score();
	     getch();
	     goto mainhome;
      }
	 
     else if (choice=='Q')
	 {
         exit(1);
     }    
    
    else if(choice=='S')
    {
        system("cls");
        printf("\n\n\n\n\n\n\n\n\n\n\t\t\tResister your name:");
        gets(playername);

        system("cls");
        printf("\n\t\t**************** Welcome %s to KBC *****************",playername);
        printf("\n\n\t\tHere are some tips you might wanna know before playing:");
        printf("\n ********************************************************************************");
        printf("\n >> There are 2 rounds in this Quiz Game,WARMUP ROUND & CHALLANGE ROUND");
        printf("\n >> In warmup round you will be asked a total of 3 questions to test your");
        printf("\n    general knowledge. You are eligible to play the game if you give atleast 2");
        printf("\n    right answers, otherwise you can't proceed further to the Challenge Round.");
        printf("\n >> Your game starts with CHALLANGE ROUND. In this round you will be asked a");
        printf("\n    total of 10 questions. Each right answer will be awarded with 10 points!");
        printf("\n    By this way you can score upto 100 .....................");
        printf("\n >> You will be given 4 options and you have to press A, B ,C or D for the");
        printf("\n    right option.");
        printf("\n >> You will be asked questions continuously, till right answers are given");
        printf("\n >> No negative marking for wrong answers!");
        printf("\n\n\t!!!!!!!!!!!!! ALL THE BEST !!!!!!!!!!!!!");
        printf("\n\n\n Press Y  to start the game!\n");
        printf("\n Press any other key to return to the main menu!");
    
       if (toupper(getch())=='Y')
		{
            system("cls");
		    goto home;
        }
	
       else
		{
            system("cls");
            goto mainhome;
        }

     
     home:
     system("cls");
     count=0;
     
     
     for(i=1;i<=3;i++)
     {
        r1=i;
        switch(r1)
        {
                  case 1:
		          printf("\n\nWhich of the following is the capital of Arunachal Pradesh?");
		          printf("\n\nA.Itanagar\t\tB.Dispur\n\nC.Imphal\t\tD.Panaji");
		          if (toupper(getch())=='A')
		          {
	           		      printf("\n\nCorrect!!!");
                          count++;
			              getch();
			              system("cls");
			              break;
                   }
		else
	    {
	            printf("\n\nWrong!!! The correct answer is A.Itanagar");
		        getch();
		        system("cls");
		        break;
  	   	}
                  case 2:
		          printf("\n\nIndia is a federal union comprising twenty-nine states and how many union territories?");
		          printf("\n\nA.6\t\tB.7\n\nC.8\t\tD.9");
		          if (toupper(getch())=='B')
		          {
			        printf("\n\nCorrect!!!");
                    count++;
			        getch();
			        system("cls");
			        break;
                 }
		
        
        else
	    {
	            printf("\n\nWrong!!! The correct answer is B.7");
		        getch();
		        system("cls");
		        break;
  	   	}
        
        system("cls");
        
        case 3:
		printf("\n\n\nWhich state has the largest area?");
		printf("\n\nA.Maharashtra\t\tB.Madhya Pradesh\n\nC.Uttar Pradesh\t\tD.Rajasthan");
		
        
        if (toupper(getch())=='D')
		{
            printf("\n\nCorrect!!!");
            count++;
			getch();
			system("cls");
            break;
        }
		
        
        else
        {
               printf("\n\nWrong!!! The correct answer is D.Rajasthan");
		       getch();
		       system("cls");
               break;
        }
      }
  }

	
    if(count>=2)
	{
                goto test;
    }
	
    else
	{
            	system("cls");
            	printf("\n\nSORRY YOU ARE NOT ELIGIBLE TO PLAY THIS GAME, BETTER LUCK NEXT TIME");
            	getch();
            	goto mainhome;
	}
     
     test:
     system("cls");
     printf("\n\n\t*** CONGRATULATION %s you are eligible to play the Game ***",playername);
     printf("\n\n\n\n\t!Press any key to Start the Game!");
     if(toupper(getch())=='p')
     {
                              goto game;
     }
     
     
     game:
     countr=0;
     for(i=1;i<=10;i++)
     {
                       system("cls");
                       r=i;

     switch(r)
     {
		case 1:
		printf("\n\nThe Maratha and The Kesri were the two main newspapers started by :-");
		printf("\n\nA.Lala Lajpat Rai\t\tB.Gopal Krishna Gokhale\n\nC.Bal Gangadhar Tilak\t\tD.Madan Mohan Malviya");
		if (toupper(getch())=='C')
		{
                                  printf("\n\nCorrect!!!");countr++;getch();
			                      break;
                                  getch();
         }
		
        
        else
        {
                    			printf("\n\nWrong!!! The correct answer is C.Bal Gangadhar Tilak");
                                  getch();
		                          goto score;
		                          break;
        }

	
    	case 2:
		printf("\n\n\n Which web browser was the first web browser from the following?");
		printf("\n\nA.Mosaic\t\tB.Opera\n\nC.Safari\t\tD.MSIE");
		if (toupper(getch())=='A')
		{
                    printf("\n\nCorrect!!!");
                    countr++;
                    getch();
			        break;
         }
	
    
    	else
        {
                    printf("\n\nWrong!!! The correct answer is A.Mosaic");
                    getch();
	                goto score;
		            break;
	     }

        case 3:
		printf("\n\n\nA DVD is an example of a/an.. ");
		printf("\n\nA.Magnetic disk\t\tB.Hard disk\n\nC.Output device\t\tD.Optical disk");
		if (toupper(getch())=='D')
		{
                     printf("\n\nCorrect!!!");
                     countr++;
                     getch();
			         break;
                     }
		else
	    {
                    printf("\n\nWrong!!! The correct answer is D.Optical disk");
                    getch();
		            goto score;
		            break;
                    }

        case 4:
		printf("\n\n\nWho is he founder of facebook?");
		printf("\n\nA.Mark zuckerburg\tB.Tesla\n\nC.Steve jobs\t\tD.Bill gates");
		if (toupper(getch())=='A')
		{
                                  printf("\n\nCorrect!!!");
                                  countr++;
                                  getch();
			                      break;
                                  }
		
        else
        {
                printf("\n\nWrong!!! The correct answer is A.Mark zuckerburg");
                getch();
       	        goto score;
		        break;
		       }

        
        case 5:
		printf("\n\n\nLearning online through internet is also known as -");
		printf("\n\nA.E-teaching\t\tB.Chatting\n\nC.E-learning\t\tD.Video Conferencing");
		if(toupper(getch())=='C')
		{
                                 printf("\n\nCorrect!!!");
                                 countr++;
                                 getch();
                                 break;}
		else
        {
		       printf("\n\nWrong!!! The correct answer is C.E-learning");
		       getch();
		       goto score;
		       break;
		       }

        case 6:
		printf("\n\n\nWindows is an example of which of the following ?");
		printf("\n\nA.Operating System\t\tB.Hardware\n\nC. Active Desktop\t\tD.None of the above");
		if (toupper(getch())=='A')
		{
                                 printf("\n\nCorrect!!!");
                                 countr++;
                                 getch();
                                 break;}
		else
        {
		       printf("\n\nWrong!!! The correct answer is A.Operating System");
		       getch();
		       goto score;
		       break;
		       }
	
		case 7:
		printf("\n\n\nWhich of the following is an antivirus software?");
		printf("\n\nA.JAVA\t\t\tB.Tally\n\nC.Norton\t\tD.None of the above");
		if(toupper(getch())=='C')
		{
                                 printf("\n\nCorrect!!!");
                                 countr++;
                                 getch();
                                 break;}
		else
        {
		       printf("\n\nWrong!!! The correct answer is C.Norton");
		       getch();
		       goto score;
		       break;
		       }
        case 8:
		printf("\n\n\nThe World Largest desert is ?");
		printf("\n\nA.Thar\t\t\tB.Kalahari\n\nC.Sahara\t\tD.Sonoran");
		if(toupper(getch())=='C')
		{
                                 printf("\n\nCorrect!!!");
                                 countr++;
                                 getch();
                                 break;}
		else
        {
		       printf("\n\nWrong!!! The correct answer is C.Sahara");
		       getch();
		       goto score;
		       break;
		       }
        case 9:
		printf("\n\n\nMount Everest is located in ?");
		printf("\n\nA.India\t\tB.Nepal\n\nC.Tibet\t\tD.China");
		if(toupper(getch())=='B')
		{
                                 printf("\n\nCorrect!!!");
                                 countr++;
                                 getch();
                                 break;}
		else
        {
		       printf("\n\nWrong!!! The correct answer is B.Nepal");
		       getch();
		       goto score;
		       break;
		       }
        case 10:
     	printf("\n\n\nThe device used for measuring speed is ?");
		printf("\n\nA.Altimeter\tB.Galvanometer\n\nC.Audiometer\t\tD.Speedometer");
		if(toupper(getch())=='D')
		{
                                 printf("\n\nCorrect!!!");
                                 countr++;
                                 getch();
                                 break;
                                 
                                 }
		else
        {
		       printf("\n\nWrong!!! The correct answer is D.Speedometer");
		       getch();
		       goto score;
		       break;
		       }

		}
  }
  
  
	score:
    system("cls");
	score=(float)countr*100000;
	if(score>0.00 && score<1000000)
	{
	   printf("\n\n\t\t**************** CONGRATULATION *****************");
       printf("\n\t You won $%.2f",score);
       goto go;
    }

	 else if(score==1000000.00)
	 {
	    printf("\n\n\n \t\t**************** CONGRATULATION ****************");
	    printf("\n\t\t\t\t YOU ARE A MILLIONAIRE!!!!!!!!!");
	    printf("\n\t\t\t\t You won $%.2f",score);
	    printf("\n\t\t\t\t Thank You !!");
	 }
	 else
     {
	    printf("\n\n\t******** SORRY YOU DIDN'T WIN ANY CASH ********");
	    printf("\n\t\t Thanks for your participation");
	    printf("\n\t\t TRY AGAIN");
        goto go;
     }

	go:
	puts("\n\n Press Y if you want to play next game");
	puts(" Press any key if you want to go main menu");
	if (toupper(getchar())=='Y')
	{
		goto home;
    }
        else
	    {
	     	edit_score(score,playername);
		    goto mainhome;
        }
      }
}

void show_record()
{
     
	 char name[20];
	 float scr=0;
	 FILE *f;
	 f=fopen("score.txt","r");
	 fscanf(f,"%s%f",&name,&scr);
	 printf("\n\n\t\t*************************************************************");
	 printf("\n\n\t\t %s has secured the Highest Score %f",name,scr);
	 printf("\n\n\t\t*************************************************************");
	 fclose(f);
	 getch();
}

void reset_score()
{
    system("cls");
    float sc;
	char nm[20];
	FILE *f;
	f=fopen("score.txt","r+");
	fscanf(f,"%s%f",&nm,&sc);
	sc=0;
	fprintf(f,"%s,%.2f",nm,sc);
    fclose(f);
}

void help()
{
    system("cls");
    printf("\n\n                              HELP");
    printf("\n -------------------------------------------------------------------------");
    printf("\n ......................... KAUN BANEGA CROREPATI......................");
    printf("\n >> There are two rounds in the game, WARMUP ROUND & CHALLANGE ROUND");
    printf("\n >> In warmup round you will be asked a total of 3 questions to test your general");
    printf("\n    knowledge. You will be eligible to play the game if you can give atleast 2");
    printf("\n    right answers otherwise you can't play the Game...........");
    printf("\n >> Your game starts with the CHALLANGE ROUND. In this round you will be asked");
    printf("\n    total 10 questions each right answer will be awarded 10,00,000 Rs.");
    printf("\n    By this way you can win upto 10 Lakh cash prize in Indian Currency..........");
    printf("\n >> You will be given 4 options and you have to press A, B ,C or D for the");
    printf("\n    right option");
    printf("\n >> You will be asked questions continuously if you keep giving the right answers.");
    printf("\n >> No negative marking for wrong answers");

	printf("\n\n\t*********************BEST OF LUCK*********************************");
	printf("\n\n\t*****KBC GAME is developed by ASHUTOSH KUMAR AND ADITIYA TIWARI ********");}

void edit_score(float score, char playernm[20])
{
    system("cls");
	float sc;
	char nm[20];
	FILE *f;
	f=fopen("score.txt","r");
	fscanf(f,"%s%f",&nm,&sc);
	if (score>=sc)
	  { 
        sc=score;
	    fclose(f);
	    f=fopen("score.txt","w");
	    fprintf(f,"%s\n%.2f",playernm,sc);
	    fclose(f);
      }
}
