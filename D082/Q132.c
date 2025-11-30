#include <stdio.h>

typedef enum{
    RED,
    YELLOW,
    GREEN
} Light;
int main(){
    Light l=RED; // change to YELLOW or green  fr different outputs
    switch (l)
    {
    case RED:
        printf("Stop");
        break;
    
    case YELLOW:
        printf("WAIT");
        break;
    case GREEN:
        printf("GO");
        break;
    default:
        break;
    }

    return 0;
    
}