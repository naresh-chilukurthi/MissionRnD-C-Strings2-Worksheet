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
        //printf("\n%s",str);
        int start=0,i=0,j=0,k=0;
        while(str[i]!='\0')
        {
            i++;
        }



        --i;
        //printf("\nend:%d",i);
         //printf("\nchar:%c",str[i]);
        while(1)
        {

            if(str[i]==' ')
                i--;
            else
                break;
        }
       // printf("\nend after trim:%d",i);
        j=0;
        while(1)
        {
        //    printf("\nstart at %d",j);
            if(str[j]==' ')
                j++;
            else
                break;
        }
      //  printf("\nstart after trim:%d",j);
        start=j;
        while(j<=i)
        {
            if(str[j]==' ')
                start=j;
            j++;
        }
        val1=(char*)malloc((i-start+1)*sizeof(char));
        /*if(str[start+1]!='\0')
        {   start=start+1;
            i=start;
        while(str[i]!='\0')
        {
            val1[i-start]=str[i];
            i++;
        }
        val1[i-start]='\0';
        return val1;
        }*/
       // printf("start:%d,end:%d\n",start,i);
        if(str[start]==' ')
           ++start;
        if(start<=i)
        {
            for(k=0;start<=i;k++)
            {
          //      printf("start at%d",start);
                val1[k]=str[start];
            //    printf("\nstart at char %c",val1[k]);
                start++;
            }
       // printf("k: %d",k);
            val1[k]='\0';
           // printf("/n correct value:%s",val1);
            return val1;
        }

        else
            return "";

    }
}
/*int main()
{
    char sentences[][100] = {"abc is a word","he he","   ","d ab   ","  x","asd324","","a"};
			char ans[][100] = { "word", "he","","ab","x","asd324","","a"};
			int sc = 8;
			int si = 0;char *new_str;
			for (si = 0; si < sc; si++)
				{
				char *new_str = get_last_word(sentences[si]);
				printf("\n%s\n",new_str);
				}
}*/

