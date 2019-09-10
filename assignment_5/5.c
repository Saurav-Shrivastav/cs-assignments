#include <stdio.h>

int main() {
    int num = 0;
    check : {
        if(num%2 ==0 || num%3==0)
        goto print;
        else
        goto next;
    }
    print : {
        printf("%d \n", num);
        if(num >= 200) return 0;
        num++;
        goto check;
    }
    next : {
        if(num >= 200) return 0;
        num++;
        goto check;
    }
}
