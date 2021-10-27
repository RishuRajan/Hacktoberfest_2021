#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){
    char s[1000];
    int c ,i ,j;
    
    scanf("%d" ,&s);
    for(i = 0 ; i <= 9 ;i++){
        c = 0 ;
    }
    for( j = 0 ; j < strlen(s) ;j++){
        if(s[j] == i){
            c++ ;
        }
    printf("%d" , c);
    

    }

    return 0;
}