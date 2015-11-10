#include<stdio.h>
#include<string.h>

#define LEN 100 /* Can be changed */

void reverseAString1(char str[]){
    
    unsigned int end, start=0;
    /* Find out the string Length */
    end = strlen(str)-1;
    /* Iterate through start less than end */
    while(start < end)   
    {
        str[start]   ^= str[end];
        str[end]     ^= str[start];
        str[start]   ^= str[end];
        start++;
        end --;
    }
    printf("The Reverse string is : %s\n", str);
}


void reverseAString2(char *str)
{
    /* get range */
    char *start = str;
    char *end = start + strlen(str) - 1; /* -1 for \0 */
    char temp;
    /* reverse */
    while (end > start)
    {
        /* swap */
        temp = *start;
        *start = *end;
        *end = temp;
        /* move */
        ++start;
        --end;
    }
    printf("The Reverse string is : %s\n", str);
}


void reverseAString3(char str[]){
    int i, j, k;
    char rev[100];
    for(i = 0; str[i] != '\0'; i++)
    ;    
    k = i-1;
    for(j = 0; j <= i-1; j++)
    {
        rev[j] = str[k];
        k--;
    }
    rev[j]='\0';
    str=rev;
    printf("The reverse string is %s\n", str);
}


int main()
{
    char str[LEN];    
    unsigned int end, start=0;
    printf(" Enter the String to be reversed  \n");
    scanf("%s", str);
    reverseAString1(str);
    reverseAString2(str);
    reverseAString3(str);
    return 0;
}

