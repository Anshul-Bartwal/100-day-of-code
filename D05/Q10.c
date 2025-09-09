//Write a program to input time in seconds and convert it to hours:minutes:seconds format.
#include <stdio.h>
int main(){
    int s,hr,min,sec;
    scanf("%d",&s);
    hr=s/3600;
    min=(s%3600)/60;
    sec=(s%3600)%60;
    printf("Hr: %d ",hr);
    printf("Min: %d ",min);
    printf("Sec: %d ",sec);
    return 0;
}