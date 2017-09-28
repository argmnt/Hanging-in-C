#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
   char string[100];
   int c = 0,c1=0, count[26] = {0};
   FILE *f;
   f = fopen("fileName.txt","r");
   char ch1;
 
   while (!feof(f))
   {
      /** Considering characters from 'a' to 'z' only
          and ignoring others */
      ch1=fgetc(f);
      if (ch1 == 'A') 
         c++;
 	  if (ch1== 'a')
 	  c1++;
   }
 
   
 
         printf(" occurs %d times in %d the entered string.\n",c,c1);
   
   return 0;
   	}
	
