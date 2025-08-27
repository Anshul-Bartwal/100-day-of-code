//Write a program to swap two numbers using a third variable.
# include <stdio.h>
int main(){
    int a,b,c;
    printf("Enter two number: ");
    scanf("%d %d",&a,&b);
    printf("a: %d\n",a);
    printf("b: %d\n",b);
    c=a;
    a=b;
    b=c;
    printf("a: %d\n",a);
    printf("b: %d\n",b);
    return 0;

}