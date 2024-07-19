#include<stdio.h>
#include<stdlib.h>
int main(){
    int len,*series;
    printf("Enter the series length: ");
    scanf("%d",&len);
    series = (int *) malloc(len * sizeof(int));
    if (series == NULL)printf( "Not enough memory\n");
    else{ 
        printf("Now, Enter the series:\n");
        for (int i = 0; i < len; i++){
            scanf("%d",&series[i]);
        }
        printf("The series is:\n");
        for (int i = 0; i < len; i++){
            printf("%d ",series[i]);
        }
        free(series);
    }
    return 0;
}