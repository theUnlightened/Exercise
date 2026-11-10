#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
	
    char s[100];
    scanf("%[^\n]%*c", &s);
    printf("Hello, World!\n");
    int i = 0;
    while (s[i] != '\0'){
        printf("%c",s[i]);
        i++;
    }
    printf("\n");
  	
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
