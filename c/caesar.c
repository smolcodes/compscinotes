#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include <stdbool.h>
/***
Global variables
*/
//creating an array of letters that will be shifted. The last is a space.
const char Alphabet[26] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I',
              'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R',
              'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
int key; //User decides how many letters it will be shifted by
/**
Index
locates the index of a character
*/
int charIndex(char indexLocation){
	if(indexLocation<='Z'&&indexLocation>='A'){
		return indexLocation-'A';
	}
	if(indexLocation<='z'&&indexLocation>='a'){
		return indexLocation-'a';
	}
	if(indexLocation =='\0'){ // \0 is a space. Spaces will be ignored
		return 26;
	}
	return -1;
}
/**
Encode
Takes a letter and shifts it to the right by number set by key
*/
char encode(char a, int key){
int index=charIndex(a);
if(index==-1){
	return a;
}
else {
	index=index+key;
	if(index>=26){
		index=index-26;
	}
	return Alphabet[index];
}
}
/**
Decode
Decodes a letter by shifting to the left by number set by key
*/
char decode(char a, int key){
int index=charIndex(a);
if(index==-1){
	return a;
}
else {
	index=index-key;
	if(index<=0){
		index=index+26;
	}
	return Alphabet[index];
}
}
/**
Main function to choose between encode or decode
Accepts 2 arguments from the command line
*/
int main(int argc, char* argv[]){// gets argument from the command line
int textLength; //length of character as an integer so it can be evaluated later.

	//Setting up the commands for the command line
	if(argc!=3){
		     printf("You need 2 command arguments.\n");
             printf("Found %d\n", argc);
	}
	int key=atoi(argv[1]); //command line argument asking for key. 1st argment
	printf("Key is set to %d\n", key);
	char x=argv[2][0]; //character comparison. e for encryption d for decryption. 2nd argment
	//getting user input
	char userInput[textLength]; //input array
    char computerOutput[textLength]; //output array
	scanf("%[^\n]s", userInput); //scans user input all the way to end of string
	printf("You entered: %s\n", userInput); //prints what you entered
	int userTextLength=strlen(userInput)-1; //gets length of the input
/**
for loop choosing between encryption or decryption
*/
int i=0;
for(i=0; i<=userTextLength; i++){ //encrypts message one letter at a time
if (x == 'e'){
	computerOutput[i]=encode(userInput[i],key);
	printf("unencrypted letter: %c | enrypted to letter: %c\n",userInput[i], computerOutput[i]);
}
 else if (x == 'd'){ //decrypts letter one letter at a time
	computerOutput[i]=decode(userInput[i],key);
	printf("Encrypted letter: %c | unenrypted to letter: %c\n",userInput[i], computerOutput[i]);
 }
}
   computerOutput[userTextLength-1]='\0';
   printf("Output text: %s\n", computerOutput); //prints out the result
   return EXIT_SUCCESS;
}