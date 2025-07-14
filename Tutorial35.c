// Strings Functions
//1. strlen()

//(i) 
//# include<stdio.h>
//void main(){
//	int len;
//	char name[] = "Suraj wants to understand the universe";
//	printf("The length of the above sentence is %d",strlen(name));
//}
//(ii)
//# include<stdio.h>
//void main(){
//	int str[125];
//	printf("Enter your sentences to find its length\n");
//	gets(str);
//	printf("The length of your string is %d",strlen(str));
//}


//2. strcat()
//(i)
//# include<stdio.h>
//void main(){
//	char str1[] = "Ethical Hacking ";
//	char str2[] = "Course";
//	strcat(str1,str2);
//	puts(str1);
//
//}


//(ii)
//# include<stdio.h>
//void main(){
//	int str1[100];
//	int str2[200];
//	int str3[300];
//	gets(str1);
//	gets(str2);
//	gets(str3);
//	strcat(str1,str2);
//	strcat(str1,str3);
//	puts(str1);
//}

//3. strcpy()
//(i)
//# include<stdio.h>
//void main(){
//char str1[] = "Suraj wants to understand the world of super games";
//char str2[600];
//strcpy(str2,str1);
//puts(str1);
//puts(str2);
//}
//(ii)
//# include<stdio.h>
//void main(){
//char str1[] = "This is not in the world of game of which is some india in the";
//char str2[125]= "Pagal in the world of space and time";
//strcpy(str2,str1);
//puts(str1);
//
//}

//4. strrev()
//(i)
//# include<stdio.h>
//# include<string.h>
//void main(){
//	char name[] = "12345";
//	puts(strrev(name));
//}
//(ii)
//# include<stdio.h>
//# include<string.h>
//void main(){
//	char name[] = "Suraj kumar jha";
//	puts(strrev(name));
//}


//5. strcmp()
//(i)
//# include<stdio.h>
//void main(){
//	char str1[] = "Mobile";
//	char str2[] = "Recharge";
//	puts(strcmp(str2,str1));
//}
//(ii)
//# include<stdio.h>
//void main(){
//	char str1[] = "Temper";
//	char str2[] = "Gamer";
//	puts(strcmp(str1,str2));
//}



//6. strstr()
//(i)
//# include<stdio.h>
//void main(){
//	char name[] = "Surajkumarjha";
//	char time[]= "kumar";
//	char *p ;
//	p = strstr(name,time);
//	puts(p);
//	
//}
//(ii)

# include<stdio.h>
void main(){
	char name[] = "This is the best things which is something which i like the most";
	char time [] = "best";
	char *p;
	p = strstr(name,time);
	puts(p);
	
}
