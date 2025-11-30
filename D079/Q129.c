#include <stdio.h>
int main(){
    FILE *pFile = fopen("num.txt","r");
    int num;
    int sum=0,count=0;

    while (fscanf(pFile,"%d",&num) ==1){
        sum+=num;
        count++;

    }
    
    fclose(pFile);
    printf("Sum: %d\n",sum);
    printf("avg: %.2f", (float)sum/count);

    return 0;
}