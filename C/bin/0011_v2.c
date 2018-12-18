#include<stdio.h>

void main(){
	
	int n[10],*pt_n;
	int count=10;
	int i,j;
	
	for(i=0; i<10; i++){
		scanf("%d",&n[i]);
		pt_n = &n[i];
		*pt_n = n[i]%42;
	}
	
	for(i=0; i<10; i++){
		for(j=i+1; j<10; j++){
			if(n[i] == n[j]){
				count--;
				break;
			}
		}
	}
	
	printf("%d",count);
	
}
