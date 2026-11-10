#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    int m;
    scanf("%d", &m);
  	if (m== 1){
        printf("1\n");
        return 0;
    }
    if (m== 0){
        printf("0\n");
        return 0;
    }
    int t = m;
    int count = 0;
    int count2 = m;
    while(t>1){
        for (int i = 0; i<= count; i++){
            printf("%d ",m-i);
        }
        for (int i = 1; i<=2*m-1-(2*count+2); i++){
            printf("%d ",count2);
        }
        for (int i = 0; i<= count; i++){
            printf("%d ",m-count+i);
        }
        printf("\n");
        t--;
        count++;
        count2--;
    }
    for (int i = m;i>0;i--){
        printf("%d ",i);
        }
    for (int i = 2;i<= m;i++){
        printf("%d ",i);
        }
    printf("\n");


    int t2 = m-1;
    int coun = 2;
    int coun2 = 2;
    while(t2>0){
        for (int i = m; i>= coun; i--){
            printf("%d ",i);
        }
        for (int i = 1; i<= 2*m-1-(2*m+2-2*coun2); i++){
            printf("%d ",coun2);
        }
        for (int i = coun2; i<= m; i++){
            printf("%d ",i);
        }
        printf("\n");
        t2--;
        coun++;
        coun2++;
    }
    return 0;
}
