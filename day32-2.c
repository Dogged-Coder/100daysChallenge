/*Find the digit that occurs the most times in an integer number.*/


#include <stdio.h>

int main() {
    long long num;
    int count[10] = {0}, digit, i, max = 0, res = 0;
    scanf("%lld", &num);
    if(num < 0) num = -num;
    while(num > 0) {
        digit = num % 10;
        count[digit]++;
        num /= 10;
    }
    for(i = 0; i < 10; i++) {
        if(count[i] > max) {
            max = count[i];
            res = i;
        }
    }
    printf("%d\n", res);
    return 0;
}

