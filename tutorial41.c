# include<stdio.h>
void parser(char * pa){
	int i,j=0,cout=0;
	for(i=0;i<=strlen(pa);i++){
		if(pa[i]=='<'){
			cout=0;
			
			 
		}
		else if(pa[i]=='>'){
	
		cout = 1;
		continue;
	}
	
	if(cout ==1){
		pa[j] = pa[i];
		j++;
	}
	
		
	}
	while(pa[0] == ' '){
		for(i=0;i<=strlen(pa);i++){
			pa[i]= pa[i+1];
		}
	}
		
i = strlen(pa);
while(pa[i-1]==' '){
	pa[i-1] = '\0';
}

}

void main(){
	char text[] = "                               <p> He is  Amazing cool </p>                            ";
	parser(text);
	printf("%s",text);
	
}
