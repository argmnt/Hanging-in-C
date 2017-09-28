#include<stdio.h>
#include<stdlib.h>
#define MAX 100



int *p;
int *tos;
int *bos;

void push();

int main(){
	int a,b;
	char s[80];
	p =(int *) malloc(MAX*sizeof(int));
	if(!p){
		printf("Allocation failure\n");
		exit(1);
	}
	tos =p;
	bos=p+MAX+1;
	printf("Four function calculator\n");
	
	do {
		printf(": ");
		gets(s);
		switch(*s){
			case '+':
				a=pop();
				b=pop();
				printf("%d",a+b);
				push(a+b);
				break;
			case '-':
				a=pop();
				b=pop();
				printf("%d",b-a);
				push(b-a);
				break;
			case '*':
				a=pop();
				b=pop();
				printf("%d",b*a);
				push(b*a);
				break;
			case '/':
				a=pop();
				b=pop();
				if(a==0){
					printf("Divide by 0\n");
					break;
				}
				printf("%d",b/a);
				push(b/a);
				break;
			case '.':
				a=pop();
				printf("Current value on the stack %d\n",a);
				push(a);
				break;
			default:
				push(atoi(s));
		}
	}while(*s!='q');
}

void push(i)
int i;{
	if(p>bos){
		printf("Stack is full \n");
		return;
	}
	*p=i;
	p++;
}

pop(){
	p--;
	if(p<tos){
		printf("Stack is underflow\n");
		return 0;
	}
	return *p;
}


