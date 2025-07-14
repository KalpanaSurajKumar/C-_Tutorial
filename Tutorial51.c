// Rock Paper Scissor Game 
# include<stdio.h>
#include<string.h>
# include<stdlib.h>
# include<time.h>
void main(){
	int i=1;
	int random;
	char *name;
	char * com_option;
	char *option;
	int score1 =0,score2 = 0;
	srand(time(NULL));
	printf("**********************Rock Paper Scissor Game**********************\n\n");
	printf("Enter Player name\n");
	printf("\n");
	gets(name);
	while(i<4){
		printf("%s's turn\n",name);
		printf("\n");
		printf("Choose Rock Paper or Scissors\n");
		gets(option);
		printf("\n");
		printf("YOU Choosed: %s\n",option);
		printf("\n");
		printf("Computer's turn\n");
		printf("\n");
		random = rand()%3+1;
		if(random ==1){
			com_option = "Rock";
		}
		else if(random == 2){
			com_option = "Paper";
		}
		
		else{
			com_option = "Scissors";
			
		}
		printf("Computer Choosed:%s\n",com_option);
		printf("\n");
		
	if((!strcmp(com_option,"Rock"))&&(!strcmp(option,"Rock") || !strcmp(option,"rock"))){
		printf("Match is drawn!\n");
		printf("\n");
		printf("YOU Scored : 0\n");
		printf("\n");
		printf("Computer Scored: 0\n");
		printf("\n");
		
	}
	
	if((!strcmp(com_option,"Paper"))&&(!strcmp(option,"Paper") || !strcmp(option,"paper"))){
		printf("Match is drawn!\n");
		printf("\n");
		printf("YOU Scored : 0\n");
		printf("\n");
		printf("Computer Scored: 0\n");
		printf("\n");
		
	}
	
	if((!strcmp(com_option,"Scissors"))&&(!strcmp(option,"Scissors") || !strcmp(option,"scissors"))){
		printf("Match is drawn!\n");
		printf("\n");
		printf("YOU Scored : 0\n");
		printf("\n");
		printf("Computer Scored: 0\n");
		printf("\n");
		
	}



    if((!strcmp(com_option,"Rock"))&&(!strcmp(option,"Scissors") || !strcmp(option,"scissors"))){
	score1 = score1+1;
	printf("You Scored:%d\n",score2);
	printf("\n");
	printf("Computer Scored:%d\n",score1);
	printf("\n");
}


    if((!strcmp(com_option,"Scissors"))&&(!strcmp(option,"Paper") || !strcmp(option,"paper"))){
	score1 = score1+1;
	printf("You Scored:%d\n",score2);
	printf("\n");
	printf("Computer Scored:%d\n",score1);
	printf("\n");
}

    if((!strcmp(com_option,"Paper"))&&(!strcmp(option,"Rock") || !strcmp(option,"rock"))){
	score1 = score1+1;
	printf("You Scored:%d\n",score2);
	printf("\n");
	printf("Computer Scored:%d\n",score1);
	printf("\n");
}


    if((!strcmp(com_option,"Scissors"))&&(!strcmp(option,"Rock") || !strcmp(option,"rock"))){
	score2 = score2+1;
	printf("You Scored:%d\n",score2);
	printf("\n");
	printf("Computer Scored:%d\n",score1);
	printf("\n");
}


if((!strcmp(com_option,"Paper"))&&(!strcmp(option,"Scissors") || !strcmp(option,"scissors"))){
	score2 = score2+1;
	printf("You Scored:%d\n",score2);
	printf("\n");
	printf("Computer Scored:%d\n",score1);
	printf("\n");
}

if((!strcmp(com_option,"Rock"))&&(!strcmp(option,"Paper") || !strcmp(option,"paper"))){
	score2 = score2+1;
	printf("You Scored:%d\n",score2);
	printf("\n");
	printf("Computer Scored:%d\n",score1);
	printf("\n");

}




i++;
	}
	printf("%s's Total Score:%d\n",name,score2);
	printf("\n");
	printf("Computers's Total  Score:%d\n",score1);
	printf("\n");
	
if(score2>score1){
	printf("Congratulations ! %s You Win\n",name);
	printf("\n");
}
else if(score2==score1){
	printf("You Both Played Well!\n");
	printf("\n");
	printf("The Match is Drawn!\n");
	printf("\n");
}
else{
	printf("Computer Wins !\n");
	printf("\n");
}
printf("**********************Created by Kalpana Studio**********************\n");
}
