#include <stdio.h>
int main()
{
char ch;
printf("Enter the value;\n");
scanf("%c",&ch);

if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
{
    printf("vowel\n");
}

else
{
    printf("consonent\n");
}


return 0;
}
