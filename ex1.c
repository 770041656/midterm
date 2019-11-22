#include <stdio.h>
int main(){
    char c;
    int letters=0,space=0,digit=0,other=0;
printf("Please enter a line of characters:");
while ((c=getchar())!='\n'){
    if (c >= 'a'&&c <= 'z' || c >= 'A'&&c <= 'Z'){
        letters++;
    }
    else if (c == ' '){
        space++;
    }
    else if (c >= '0'&&c <= '9'){
        digit++;
    }
    else{
        other++;
    }
}
printf ("the number of worlds is %d\n",space);
return 0;
}