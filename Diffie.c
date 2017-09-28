#include<stdio.h>
#include<stdlib.h>
#include<math.h>


int main(){
	unsigned int mod=3;
	unsigned int modulus=13;
	unsigned int a,fina,b,finb;
	unsigned int alicepower=3,bobpower=5;
	a=pow(mod,alicepower);
	printf("%u\n",a);
	a=a%modulus;
	printf("%u\n",a);
	b=pow(mod,bobpower);
	printf("%u\n",b);
	b=b%modulus;
	printf("%u\n",b);
	
	fina=pow(b,alicepower);
	fina=fina%modulus;
	
	finb=pow(a,bobpower);
	finb=finb%modulus;
	printf("%u\n",fina);
	printf("%u\n",finb);
	
	if(fina==finb){
		printf("Diffie Hellman yeah!\n");
	}
	
	system("Pause");
	return 0;
}
