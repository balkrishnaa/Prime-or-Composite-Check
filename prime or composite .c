#include<stdio.h>
int check(int);
int main(){
	int a;
	printf("Enter a number:");
	scanf("%d",&a);
	if(check(a)){
		printf("%d is a prime.",a);

	}else{
		printf("%d is a composite.",a);
	}

}
int check(int x){
	int i,count=0;
	for(i=1;i<=x;i++){
		if(x%i==0){
			count++;
		}
	}
	if(count==2){
		return 1;
	}else{
		return 0;
	}
	
}
