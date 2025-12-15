#include <stdio.h>
int main(){
	int score,a;
	scanf("%d",&score);
 	if(score>=68){
		if(score>=80){
			printf("A\n");
		}else if(score>=75){
			printf("B\n");
			
		}else if(score>=70){
			printf("C\n");
			
		}
	}
	else{
		if(score>=50){
			printf("D\n");
			
		}
		else if(score<=50){
			printf("F\n");
		}
	}
		
	return 0;
}
