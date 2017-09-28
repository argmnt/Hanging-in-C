
#include <stdio.h>
#include <string.h>

#include <ctype.h>

int alphab(char old){
	char ret;
	int i =0;
	char alpha[26]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
	char alpha1[26]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','I','P','Q','R','S','T','U','V','W','X','Y','Z'};
	
	for(i=0;i<26;i++){
		if(old==alpha[i] || old==alpha1[i]){
			
			return i;
		}	
	}
	return 99;
}
char inttochar(int firs){

	char ch;
	char alpha[26]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
	char alpha1[26]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','I','P','Q','R','S','T','U','V','W','X','Y','Z'};
	
	return alpha[firs];
}

int main(){
	char temp;
	char keyword[50] = "";
    int keylength = 0;
    char user_text[50] = "";
    int user_text_length;
    int key_count = 0;
    int i=0,j=0;
    printf("Please enter text\n");
    scanf("%[^\n]%*c",user_text);
    user_text_length=(strlen(user_text));
    printf("Please enter keyword\n");
    scanf("%[^\n]%*c",keyword);
    keylength=(strlen(keyword));
    for(i=0;i<user_text_length;i++){
    
    	if(j==0){
    	temp=inttochar(((alphab(user_text[i]))+(alphab(keyword[j])))%26);
    }else{
    	temp=inttochar(((alphab(user_text[i]))+(alphab(keyword[j%keylength])))%26);}
    
    	j++;
    	printf("%c",temp);
    
	}
	printf("\n");
	
	
	
	return 0;
}
