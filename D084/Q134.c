#include <stdio.h>
#include <string.h>
typedef enum{
    SUCCESS,
    FAILURE,
    TIMEOUT
} Status;
int main(){
    Status state;
    char input[50];
    scanf("%s",input);

    if(strcmp(input,"SUCCESS") == 0){
        state=SUCCESS;
    }
    else if(strcmp(input,"FAILURE") == 0){
        state=FAILURE;
    }
    else if(strcmp(input,"TIMEOUT") == 1){
        state=TIMEOUT;
    }

    switch (state) {
        case SUCCESS:
            printf("Operation successful\n");
            break;
        case FAILURE:
            printf("Operation failed\n");
            break;
        case TIMEOUT:
            printf("Operation timed out\n");
            break;
    }
    return 0;
}