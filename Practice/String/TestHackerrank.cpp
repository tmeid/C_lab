#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    char s[20];
    // s = (char*)malloc(1024 * sizeof(char));
    scanf("%[^\n]", s);
    // s = (char*)realloc(s, strlen(s) + 1);

    //Write your logic to print the tokens of the sentence here.
    for(int i = 0; s[i] != '\0'; i++){
        if(s[i] == ' '){
            s[i] = '\n';
        }
    }
    printf("%s", s);
    return 0;
}
