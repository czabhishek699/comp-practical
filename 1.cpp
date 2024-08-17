/*WAP to read a number and find even or odd.
©CZ ABHISHEK 2024*/
#include<stdio.h>
	int main(){
		int num,rem;
		printf("Kripaya Number Halnuhos:");
		scanf("%d", &num);
		rem=num%2;
		if(rem==0){
			printf("Even ho yo number");
		}
		else{
			printf("Odd ho yo number");
		}
		return 0;
	}
