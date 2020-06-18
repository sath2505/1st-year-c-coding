#include<stdio.h>
#include<string.h>
int main()
{
    char s[1000];
   int i,vowels=0,consonants=0;
   printf("Enter the string : ");
   scanf("%s",&s);
    printf("%s", s);
    for(i=0;s[i];i++)
    {
       if(s[i]=='a'|| s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O' ||s[i]=='U')
         vowels++;
         else
         consonants++;
    
      	}
  	printf("\nNo.of vowels = %d\n",vowels);
    printf("No.of consonants = %d\n",consonants);
    return 0;
}
