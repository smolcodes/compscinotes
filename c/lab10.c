#include <stdio.h>
int main()
{
	/**
	char to int*/
   // printf() displays the string inside quotation
   char a;
printf("Enter a character"); 
scanf("%c", &a);//asks for an char and stores it in a
int k=a; //convert char to an integer
printf("The character converted to an integer"); 
printf("%d\n",k); //prints integer

/**
	int to float*/
   int b;
printf("Enter an integer: \n"); 
scanf("%d", &b);//asks for an char and stores it in a
float l=b; //convert int to float
printf("The integer converted to a float"); 
printf("%f\n",l); //prints integer
/**
	int to unsigned int*/
   int c;
printf("Enter another integer"); 
scanf("%d", &c);//asks for an int and stores it in c
unsigned m=c; //convert int to float
printf("The integer converted to an unsigned integer"); 
printf("%u\n",m); //prints integer
int n=m;
printf("The unsigned valued converted back to a signed value is:");
printf("%d\n", n);
   return 0;
}

