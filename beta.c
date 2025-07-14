// Write 5 programs to read from a file
//1
//# include<stdio.h>
//void main(){
//	FILE *ptr;
//	ptr = fopen("sava.txt","r");
//	char str[100];
//	while(fgets(str,100,ptr)){
//	
//	
//	puts(str);
//}
//	
//	
//	fclose(ptr);
//} 
//2
//# include<stdio.h>
//void main(){
//	char str[250];
//	FILE * ptr;
//	ptr = fopen("sava.txt","r");
//	while(fgets(str,250,ptr)){
//		puts(str);
//	}
//	fclose(ptr);
//}

////3
//# include<stdio.h>
//void main(){
//char str[250];
//FILE * ptr;
//ptr = fopen("sava.txt","r");
//while(fgets(str,250,ptr)){
//	puts(str);
//}
//	
//}

////4
//# include<stdio.h>
//void main(){
//char str[235];
//int i;
//FILE * ptr;
//ptr = fopen("sava.txt","r+");
//
//for(i=1;i<4;i++){
//	fgets(str,235,ptr);
//	puts(str);
//}
//str[235]= "\0";
//fseek(ptr,0,SEEK_SET);
//fprintf(ptr,"Maggie is the best food in the world of game and fame which is good");
//
//fclose(ptr);
//}
//5
//# include<stdio.h>
//void main(){
//	char str[1000];
//	FILE * ptr;
//	ptr = fopen("sava.txt","r");
//	while(fgets(str,1000,ptr)){
//		puts(str);
//	}
//	fclose(ptr);
//}



//# include<stdio.h>
//void main(){
//	FILE * ptr;
// 	ptr = fopen("sava.txt","w");
//	fputs("This is somethings which is good in the world game",ptr);
//	fclose(ptr);
//}
