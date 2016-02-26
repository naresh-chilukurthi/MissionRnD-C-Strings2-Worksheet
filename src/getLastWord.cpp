/*

Problem : Return the Last word in a string

Input : I will do this without using String Library
Output : Library

Note:Dont modify original string Neglect Spaces at the right end and at left end if required .
->Create a new string and return it , Use dynamic memory allocation .
*/
#include <stdlib.h>
#include<stdio.h>
char *val1;
char * get_last_word(char * str){
    if(str==NULL)
	return NULL;
	else
    {
        int start=0,i=0;
        while(str[i]!='\0')
        {
            if(str[i]==' ')
            {
                start=i;
            }
            i++;
        }
        val1=(char*)malloc((i-start+1)*sizeof(char));
        if(str[start+1]!='\0')
        {   start=start+1;
            i=start;
        while(str[i]!='\0')
        {
            val1[i-start]=str[i];
            i++;
        }
        val1[i-start]='\0';
        return val1;
        }

        else return "";

    }
}
int main()
{
    char sentences[][100] = {"abc is a word","he he","   ","d ab   ","  x","asd324","","a"};
			char ans[][100] = { "word", "he","","ab","x","asd324","","a"};
			int sc = 8;
			int si = 0;char *new_str;
			for (si = 0; si < sc; si++)
				{
				char *new_str = get_last_word(sentences[si]);
				printf("%s\n",new_str);
				}
}

