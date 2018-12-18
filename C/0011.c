#include<stdio.h>

void main(){
	
	int n[10],ans[10];
	int count=10;
	int i,j;
	
	for(i=0; i<10; i++){
		scanf("%d",&n[i]);
		ans[i] = n[i]%42;
	}
	
	for(i=0; i<10; i++){
		for(j=i+1; j<10; j++){
			if(ans[i] == ans[j]){
				count--;
				break;
			}
		}
	}
	
	printf("%d",count);
	
}
