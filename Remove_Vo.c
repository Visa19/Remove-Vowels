a//program to remove all the vowels of a string and display the new string without vowels -Home work 7,Question 5.

#include <stdio.h> //The stdio.h header defines three variable types, many macros, and a variety of input and output functions.
#include <string.h> //various functions for manipulating arrays of characters and deals with strings.  strcpy()/strcat() r similar two functions written in this header file.

char str[100], without_vowels[100]; //Array define
int j=0;// i am defining a variable here in the name of j. int is the data type of the variable,j is the variable name and i am intilazing a value zero to the variable.


char vowels(){//Function is defined at this place. return_data_type function_name (parameters)

for(int i=0; i<strlen(str); i++)// ✓ Declaration/ Initialization of thecounter variable✓ Condition✓ Increment/decrement statement✓ Body of statements
    {
switch(str[i]){
 case 'a': case 'e': case 'i': case 'o': case 'u': case 'A': case 'E': case 'I': case 'O': case 'U':
 break;

 default:

 without_vowels[j] = str[i];
 j++;}

}
printf("\n//////////////////////////////////////////////\n ");
printf("\nThe new string without vowels is - - - ->\n");
printf("\n");

for(int k=0; k<strlen(without_vowels); k++){

 printf("%c", without_vowels[k]);

}
printf("\n--------------------------------------------------------------");
printf("\n--------------------------------------------------------------");
printf("\n");
printf("\n    Before removing vowels the length of the string is: %d\n",strlen(str));
printf("\n    After removing vowels the length of the string is: %d\n",j);
printf("\n--------------------------------------------------------------");
printf("\n--------------------------------------------------------------");
printf("\n");

}


int main(){

printf(" - - - >  Enter the string to remove the vowels: ");// This is a statement bcz there is a semicolon at the end. Normally semicolons defines a specific task to the program.
gets(str);// To input a line of text, here the & sign is not necessary to include because the array name will provide the address of the character array.
vowels(); // Function will be called at this stage..Normally the defined parameters will be passed to this function at this stage.
return 0;

}


