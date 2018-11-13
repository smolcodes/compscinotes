#include<stdio.h>
#include <string.h>
void displayFirstWord(char str[]){
int i;
for(i=0;i<strlen(str);i++){
	if (str[i]==' ')
		str[i]='\0';
}
}
void main()
{
char s[64];
strcpy(s, "hello how are you today");
displayFirstWord(s);
printf("the first word is: %s\n", s);

}
