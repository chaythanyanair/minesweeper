/*                              Chaythanya
   If you are using turbo cpp compiler try to include conio.h ang uncomment the 
   function clrscr() for better looks */
#include<stdio.h>
#include<stdlib.h>
//#include<conio.h>
int minecount=0;
int won=0;
char a[5][5];
char pa[5][5];
int pc=0;
int r,c;
int win=0;
void intro(char* player);
void  winning_chance();
int rm;
int find(int choice);
void firstdisplay();
void make();
int play();
void display(char a[5][5]);
void intro(char* player)
{
	printf("\n\t Welcome %s.. here are the rules of the game\n",player);
	firstdisplay();
	printf("\n\t This is the board, there are no empty columns each column is filled with either mine or character "); 
	printf("\n\t choose the appropriate no: to open the block\n\t Game begins!!...\n\n\n");  
}


void make()
{
	int i,j;
	int d=65;
	int p=3;
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			pa[i][j]=' ';
			if(pc==1)
			{
			if(i*(i+j)%p==0)
				a[i][j]='X';
			else
			{
				if((d!=120)&&(d!=88))
				{
					a[i][j]=d;
					d++;
				}
			}
			}
			else
			{
			if((i+j)%(pc+1)==0)
                                a[i][j]='X';
                        else
                        {
                                if((d!=120)&&(d!=88))
                                {
                                        a[i][j]=d;
                                        d++;
                                }
                        }
			}

		}
	}
	firstdisplay();
}
void firstdisplay()
{
	printf("\t _____ _____ _____ _____ _____ \n");
        printf("\t|     |     |     |     |     | \n");
        printf("\t| 1   |  2  |  3  | 4   |  5  |\n");
        printf("\t|_____|_____|_____|_____|_____|\n");
        printf("\t|     |     |     |     |     |\n");
        printf("\t| 6   |  7  |  8  |  9  | 10  |\n");
        printf("\t|_____|_____|_____|_____|_____|\n");
        printf("\t|     |     |     |     |     |\n");
        printf("\t| 11  | 12  | 13  | 14  | 15  |\n");
        printf("\t|_____|_____|_____|_____|_____|\n");
	printf("\t|     |     |     |     |     |\n");
        printf("\t| 16  | 17  | 18  | 19  | 20  |\n");
        printf("\t|_____|_____|_____|_____|_____|\n");
	printf("\t|     |     |     |     |     |\n");
        printf("\t| 21  | 22  | 23  | 24  | 25  |\n");
        printf("\t|_____|_____|_____|_____|_____|\n");
}
void winning_chance()
{
	int i,j;
	for(i=0;i<5;i++)
	{	
		for(j=0;j<5;j++)
		{
			if(a[i][j]=='X')
				minecount++;
		}
	}
	rm= (25-minecount);
}
int play()
{
	int b;
	printf("\n\t Enter the block you want to open:");
	scanf("%d",&b);
	int success= find(b);
	if(!success)
	{   
		
		pa[r][c]=a[r][c];
		if(a[r][c]=='X')
		{
			display(a);
			return 1;
		}
		else
		{	
				
			win++;
			//display(a);
			//printf("\n\tremainig no:==%d\t mine count=%d\t win=%d",rm,minecount,win);
			//getch();
			display(pa);
			if(win==(rm))
			{
			
				printf("\n\n\tHURRAY!! your win the game...\n");
				return 0;
			}
			else
				play();
		}
	}
	else
	{
		printf("\n\n\t Wrong choice!!.. try again!!\n\n");
		display(pa);
		play();
	}
}

int find(int choice)
{
	if(choice==1){
                r=0;
                c=0;
		return 0;
        }
        else if(choice==2){
                r=0;
                c=1;
		return 0;

        }
        else if(choice==3){
                r=0;
                c=2;
		return 0;

        }
        else if(choice==4){
                r=0;
                c=3;
		return 0;

        }
        else if(choice==5){
                r=0;
                c=4;
		return 0;

        }
        else if(choice==6){
                r=1;
                c=0;
		return 0;

        }
        else if(choice==7){
                r=1;
                c=1;
		return 0;

        }
        else if(choice==8){
                r=1;
                c=2;
		return 0;

        }
        else if(choice==9){
                r=1;
                c=3;
		return 0;

        }
	else if(choice==10){
                r=1;
                c=4;
		return 0;

        }
        else if(choice==11){
                r=2;
                c=0;
		return 0;

        }
        else if(choice==12){
                r=2;
                c=1;
		return 0;

        }
        else if(choice==13){
                r=2;
                c=2;
		return 0;

        }
        else if(choice==14){
                r=2;
                c=3;
		return 0;

        }
        else if(choice==15){
                r=2;
                c=4;
		return 0;

        }
        else if(choice==16){
                r=3;
                c=0;
		return 0;

        }
        else if(choice==17){
                r=3;
                c=1;
		return 0;

        }
        else if(choice==18){
                r=3;
                c=2;
		return 0;

        }
        else if(choice==19){
                r=3;
                c=3;
		return 0;

        }
        else if(choice==20){
                r=3;
                c=4;
		return 0;

        }
        else if(choice==21){
                r=4;
                c=0;
		return 0;

        }
        else if(choice==22){
                r=4;
                c=1;
		return 0;

        }
        else if(choice==23){
                r=4;
                c=2;
		return 0;

        }
        else if(choice==24){
                r=4;
                c=3;
		return 0;

        }
        else if(choice==25){
                r=4;
                c=4;
		return 0;

        }
        else
		return 1;
}
   

void display(char a[5][5])
{
	

	printf("\t _____ _____ _____ _____ _____ \n");
        printf("\t|     |     |     |     |     | \n");
        printf("\t|  %c  |  %c  |  %c  |  %c  |  %c  |\n",a[0][0],a[0][1],a[0][2],a[0][3],a[0][4]);
        printf("\t|_____|_____|_____|_____|_____|\n");
        printf("\t|     |     |     |     |     |\n");
        printf("\t|  %c  |  %c  |  %c  |  %c  |  %c  |\n",a[1][0],a[1][1],a[1][2],a[1][3],a[1][4]);
        printf("\t|_____|_____|_____|_____|_____|\n");
        printf("\t|     |     |     |     |     |\n");
        printf("\t|  %c  |  %c  |  %c  |  %c  |  %c  |\n",a[2][0],a[2][1],a[2][2],a[2][3],a[2][4]);
        printf("\t|_____|_____|_____|_____|_____|\n");
        printf("\t|     |     |     |     |     |\n");
        printf("\t|  %c  |  %c  |  %c  |  %c  |  %c  |\n",a[3][0],a[3][1],a[3][2],a[3][3],a[3][4]);
        printf("\t|_____|_____|_____|_____|_____|\n");
        printf("\t|     |     |     |     |     |\n");
        printf("\t|  %c  |  %c  |  %c  |  %c  |  %c  |\n",a[4][0],a[4][1],a[4][2],a[4][3],a[4][4]);
        printf("\t|_____|_____|_____|_____|_____|\n");

}
void main()
{
	char player,choice,ch;
	printf("\t\t MINE SWEEPER------> DEMO");
        printf("\n\t\t*************************");
        printf("\n\n\tEnter the name of the player:");
        scanf(" %s",&player);
	do
	{
	pc++;
	minecount=0;
	win=0;
//	clrscr();	
	l1:
	printf("\n\n\t1-introduction\n\t2-play\n\t3-credits\n\t4-exit\n\tEnter your choice:");
	scanf(" %c",&ch);
	if(ch=='1')
	{
		char men;
		intro(&player);
		l2:
		printf("\n\tpress 'b' to return to main menu");
                scanf(" %c",&men);
                if(men=='b' || men=='B')
                        goto l1;
                else
                {
                        printf("\n\twrong choice try agin\n\n");
                        goto l2;
                }
	}		
	else if(ch=='2')
	{
		make();
		winning_chance();
		int end=play();
		if(end==1)
			printf ("\n\n\t GAME OVER!!\n\n");
       		 printf("\n\n\tDo you wish to continue?(Y/n)");
	       	 scanf(" %c",&choice);
		if(pc>=3)
       		 {
       	        	 printf("\n\n\tOOops!! You have exceeded your maximum no: of chances well.. Better luck next time..\n\n");
       		         exit(1);
        	 }
	}
	else if(ch=='3')
	{
		char men;
		printf("\n\n\t\t CREDITS");
		printf("\n\t\t***************");
		printf("\n\t player name: %s\n\n\t no of games played:%d\n\n\t no: of games won:%d",&player,pc,won);
		printf("\n\tpress 'b' to return to main menu");
		scanf(" %c",&men);
		if(men=='b' || men=='B')
			goto l1;
		else
		{
			printf("\n\t thank you for playing bye!!\n\n");
			exit(1);
		}
	}
	else if(ch=='4')
	{
		printf("\n\t thank you for playing.. bye!!\n\n");
		exit(1);
	}
	else
	{
		printf("\n\tOops that is an invalid entry.. try again!!\n\n");

		goto l1;
	}
	}
    	while((choice=='Y'||choice=='y'));

	                      	
}







































