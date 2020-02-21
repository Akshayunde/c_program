/*
 Title  : Maultipilation table
 Authoe : Akshay Unde
 Date   : 21/02/2020
*/



#include <stdio.h>
int main() {
    int n, i;
    printf("Enter an integer: ");
    scanf("%d", &n);
    for (i = 1; i <= 10; ++i) {
        printf("%d * %d = %d \n", n, i, n * i);
    }
    return 0;
}
