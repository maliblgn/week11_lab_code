#include <stdio.h>
#include <string.h>


/* Q1

int main()
{
    char str[1000];
    int counter=0;

    printf("enter a string (please without turkish characters)\n");
    gets(str);
        for (int i = 0; str[i] != '\0'; i++)
        {
            if(str[i] == 'a')
            {
                counter=counter+1;
            }
            
        }
        
    printf("numbers of the 'a' of the your string: %d\n", counter);    

    return 0;
}*/

/* Q2

int main() 
{
    char str[100];
    char str2[100];
    char gecici;
    int i, j;
    printf("please enter a string\n");
    gets(str);
    printf("please enter one more string\n");
    gets(str2);
        for (i = 0; str[i] != '\0'; i++)
        {
           
        }
    
        for (j = 0; j < i/2; j++)
        {
            gecici=str[i-j-1]; 
            str[i-j-1]=str[j];
            str[j]=gecici;
        }    
        
        printf("%s %s", str2, str);

        return 0;   
}*/