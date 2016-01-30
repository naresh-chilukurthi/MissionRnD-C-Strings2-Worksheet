/*
OVERVIEW: Given a string, Count the number of consonants and vowels and copy them to 'consonants' and 'vowels' respectively
Notes : Neglect Space and Other Symbols .Consider Capital Letters too

E.g.: Input: "aB c" , Output: consonants should contain 2 and vowels 1

INPUTS: A string and two int pointers

OUTPUT: Modify the consonants and vowels pointers accordingly with their counts (*consonants=?? ;*vowels=??)

INPUT2: Dont Forget they are pointers ;consonants and vowels are addresses of two variables .

Output: consonants should be ??,vowels should be ??

??:Count them :)

NOTES: Don't create new string , Dont return anything ,you have been given two pointers ,copy values into those .
*/

#include <stddef.h>
#include<stdio.h>

void count_vowels_and_consonants(char *str,int *consonants, int *vowels){
    if(str==NULL||str=="")
    {
        *consonants=0;
        *vowels=0;
    }
    else{
    int i=0;
        *consonants=0;
        *vowels=0;
    while(str[i]!='\0')
    {
        if(str[i]==65||str[i]==73||str[i]==69||str[i]==79||str[i]==85||str[i]==97||str[i]==101||str[i]==105||str[i]==111||str[i]==117)
            (*vowels)++;
        else if((str[i]>=65&&str[i]<=90)||str[i]>=97&&str[i]<=122)
            (*consonants)++;
        i++;
    }
    }
}
