#include<stdio.h>

void cube(){
	
	int a;
	
	printf("Enter Number :-");
	scanf("%d",&a);
	if(a%3==0&&a%5==0){
		printf("divisible by 3 or 5");
	}else{
		printf("Not divisible by 3 or 5"); 
	}
}

void main(){
	
	cube();
	
}
