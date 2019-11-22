#include <stdio.h>
int main(){
    unsigned long int x = 1;
    unsigned long int y = 0;
    while(x > 0){
        x = x << 1;
        y = y + 1;
    }
    printf("unsigned iong int is fizeof %lu bit,the max is:%lu\n",x-1,y);
}