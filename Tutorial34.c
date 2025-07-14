// Write 10 programs on Strings
//1
//# include<stdio.h>
//void main(){
//	int i=0;
//	char name[] = "Suraj";
//	
//while(name[i]!='\0'){
//	printf("%c",name[i]);
//	i++;
//}	


//}
//2
//# include<stdio.h>
//void main(){
//	int i =0;
//	char fname[] = {'S','u','r','a','j','K','u','m','a','r','j','h','a'};
//	while(fname[i]!='\0'){
//		printf("%c",fname[i]);
//		i++;
//	}
//}
//3
//# include<stdio.h>
//void main(){
//	char mess[79];
//	printf("Enter something about you\n");
//	gets(mess);
//	puts(mess);
//}
//4
//# include<stdio.h>
//void main(){
//	char name[]= "Suraj";
//	
//	printf("The name is %s",name);
//}

//5
//# include<stdio.h>
//void main(){
//	char name[34];
//	printf("Enter something about you\n");
//	scanf("%s",&name);
//	puts(name);
//}
//6
//#include <stdio.h>
//void mess(char ma[]){
//	int i =0;
//	while(ma[i]!='\0')
//	{
//		printf("%c",ma[i]);
//		i++;
//		
//	}
//	
//}
//void main(){
//	char City[]= {'s','h','i','m','l','a','\0'};
//	
//mess(City);		
//}
//7
//# include<stdio.h>
//void san(char nami[]);
//void san(char nami[]){
//	printf("Enter something about your self\n");
//	gets(nami);
//	printf("Your secret information is:");
//	puts(nami);
//	printf("\n");
//	printf("Don't share with anyone'");
//}
//void main(){
//char mess[120];
//san(mess);
//}
//8
//# include<stdio.h>
//void met(char soft[]){
//int i =0;
//while(soft[i]!='\0'){
//	printf("%c",soft[i]);
//	i++;
//	
//}
//}
//void main(){
//	char name[100];
//	gets(name);
//	met(name);
//	
//}
//9
//# include<stdio.h>
//void mek( char ch[]);
//void mek(char ch[]){
//	gets(ch);
//	if(ch == "Suraj"){
//		printf("Welcome you can come");
//	}
//	else{
//		printf("Sorry! you can not go");
//	}
//	
//}
//void main(){
//	char identity[100];
//printf("Enter your name\n");
//mek(identity);
//
//}

//10

# include<stdio.h>
void main(){
	char mess[124];
	printf("Enter your message\n");
	gets(mess);
	printf("Your Secret message is:");
	puts(mess);
}



