//Find the longest word in a sentence.

#include <stdio.h>
int main(){
    char str[100];
    printf("Enter String: ");
    fgets(str,sizeof(str),stdin);

    int max=0;
    int maxIndex = 0;
    int i=0;
    int count =0;
    while(str[i] != '\0'){
        if (str[i] == ' '){
            if (count > max){
                maxIndex = i;
                max = count;

            }
            count = 0;
            i++;
            continue;
        }
        count++;
        i++;
    }
    printf("%d",max);
    int startIndex = maxIndex - count;

    printf("Longest word: ");
    for (int k=startIndex;k<maxIndex;k++){
        printf("%c",str[k]);
    }
    return 0;
}