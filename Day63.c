# include<stdio.h>
int is_palindrome(num){
	
	int rem,temp, reverse=0;
	temp = num;
	while(num!=0){
	
	rem = num%10;
	reverse = reverse*10+rem;
	num = num/10;
}
if(reverse==temp){
	return 1;
}
else{
	return 0;
}
	
}
void main(){
	 int num;
	printf("Enter the number to check it is palindrome or not\n");
	scanf("%d",&num);
	
	if(is_palindrome(num)){
		printf("Yes, The number %d is a palindrome number\n",num);
	}
	
	else{
		printf("No, The number %d is not a palindrome number\n",num);
	}
	
}
