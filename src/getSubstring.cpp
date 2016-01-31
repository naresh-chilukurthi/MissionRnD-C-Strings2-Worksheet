/*
OVERVIEW: Given a string, Return the substring of the main string from i index to j index
Indexes start from 0,ith letter and jth letter are included
E.g.: Input: "get_sub_string("abcdefgh",2,5) , Output: "cdef"

INPUTS: A string.

OUTPUT: return substring from [i,j]

INPUT2: I will Code for Mission RnD , 2,10
OUTPUT2:will Code

NOTES: Check Null Strings ,Include stddef for NULL if needed.Create a New string and return it ,dont modfiy
original String
*/

#include <stddef.h>
#include <stdlib.h>
#include<stdio.h>
char val[50];
char * get_sub_string(char *str, int i, int j){
    if(str==NULL||i>j)
    {
        return NULL;
    }
    else
    {
        //extern char val[50];
        //val=(char*)malloc((j-i+1)*sizeof(char));
        int l=i;
        while(str[l]!='\0'&&l<=j)
        {
                val[l-i]=str[l];
                l++;
        }
        val[l]='\0';
        return val;
    }
}

/*int main()
{
    char str[] = "abcdefgh.,812639";
			int i = 0;
			int j = 2;
			char *new_str = get_sub_string(str, i, j);
			printf("%s",new_str);
}
*/
