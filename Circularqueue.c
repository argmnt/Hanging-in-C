#include<stdio.h>
#include<stdlib.h>
#define MAX 80


int spos,rpos;
void enter(),qstore(),review(),perform();
char buf[MAX+1];

void qstore(q)
 char *q;
{
	if(spos+1==rpos || (spos+1==MAX && !rpos)){
		printf("List is full\n");
		return;
	}
	buf[spos] = q;
	spos++;
	if(spos==MAX) spos=0;
}

char qretrieve(){
	if(rpos==MAX) rpos=0;
	if(rpos==spos){
		printf("No events to perform\n");
		return NULL;
	}
		rpos++;
		return buf[rpos-1];
}

int main(){
	register char ch;
	int t;
	buf[80]=NULL;
	for(ch=' ',t=0;t<10 && ch!=';';t++){
		if(kbhit()){
			ch = getch();
			qstore(ch);
		}
		printf("%d ",t);
	}
	while((ch=qretrieve())!=NULL) putchar(ch); /*display buffer*/
}





