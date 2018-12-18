#include<stdio.h>
#include<string.h>

void main(){
	int temp=1,i;
	char c[50];
	
	scanf("%s",c);
	
	for(i=0; i<strlen(c); i++){
		if(temp==1){
			if(c[i]=='A')temp=2;
			else if(c[i]=='B')temp=1;
			else if(c[i]=='C')temp=3;
		}else if(temp==2){
			if(c[i]=='A')temp=1;
			else if(c[i]=='B')temp=3;
			else if(c[i]=='C')temp=2;
		}else if(temp==3){
			if(c[i]=='A')temp=3;
			else if(c[i]=='B')temp=2;
			else if(c[i]=='C')temp=1;
		}	
	}
	printf("%d",temp);
}
