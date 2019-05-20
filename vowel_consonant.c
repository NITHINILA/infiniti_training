#include<stdio.h>
void main()
{
char ca;
scanf("%c",&ca);
if((ca>='a'&&ca<='z') || (ca>='A'&&ca<='Z'))
{

    if(ca=='a' || ca=='e' || ca=='i' || ca=='o' || ca=='u' || ca=='A' || ca=='E' || ca=='I' || ca=='O' || ca=='U')
    {
        printf("Vowel");
    }
        else 
        {
            printf("Consonant");
        }
    
}
else
{
    printf("invalid");
    
}    
}


