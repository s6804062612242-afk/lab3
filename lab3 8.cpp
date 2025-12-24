#include <stdio.h>

int main(){
	int h,m,s,n_min;
	scanf("%d:%d:%d",&h,&m,&s);
	printf("%s:%d","Hour",h);
	printf("%s:%d","Minute",m);
	printf("%s:%d","Second",s);
	printf("\nNext minute: ");
	scanf("%d",&n_min);
	m = m + n_min;
	while(1 == 1){
		if(m >=60){
			h++;
			m = m - 60;
		}else{
			break;
		}
	}
	
	if(h>=24){
		h = h -24;
	}
	while(1 == 1){
		if(s >=60){
			m++;
			s = s - 60;
		}else{
			break;
		}
	}
	printf("%s:%d","Hour",h);
	printf("%s:%d","Minute",m);
	printf("%s:%d","Second",s);
	return 0;
}
