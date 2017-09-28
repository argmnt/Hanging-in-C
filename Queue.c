#include<stdio.h>
#include<stdlib.h>
#define MAX_EVENT 100


char *p[MAX_EVENT], *qretrieve();
int spos,rpos;
void enter(),qstore(),review(),perform();
void qstore(q)
 char *q;
{
	if(spos==MAX_EVENT){
		printf("List Full\n");
		return;
	}
	p[spos] = q;
	spos++;
}

char *qretrieve(){
	if(rpos==spos){
		printf("No appointments to perform.\n");
		return NULL;
	}
	rpos++;
	return p[rpos-1];
}

int main(){
	char s[80];
	register int t;
	for(t=0;t<MAX_EVENT;t++){
		p[t]=NULL;
	}
	spos=0;rpos=0;
	
	for(;;){
		printf("Enter ,List,Remove,Quit: \n");
		gets(s);
		*s = toupper(*s);
		switch(*s){
			case 'E':
				enter();
				break;
			case 'L':
				review();
				break;
			case 'R':
				perform();
				break;
			case 'Q':
				exit(0);
		}
	}
}

void enter(){
	char s[256], *p;
	do{
		printf("Enter appointment %d: \n",spos+1);
		gets(s);
		if(*s==0) break;
		p = (char *) malloc(strlen(s));
		if(!p){
			printf("Out of memory.\n");
			return;
		}
		strcpy(p,s);
		if(*s) qstore(p);
	}while(*s);
}

void review(){
	register int t;
	for(t=rpos;t<spos;t++){
		printf("%d. %s\n",t+1,p[t]);
	}
}

void perform(){
	char *p;
	if(!(p=qretrieve())) return;
	printf("%s\n",p);
}


