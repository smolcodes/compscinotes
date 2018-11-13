#include <stdio.h>
int main(double a){
roundown(); //calls the roundown function
return 0;
}
int roundown(double a){
	printf("Enter a double! SOmething with a decimal: \n"); 
    scanf("%lf", &a);//asks for an integer and stores it in a
	int c = (int) a; //converts double to an int
	printf("%d\n", c);
}