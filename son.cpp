#include <stdio.h>
#include <math.h>
#include <limits.h>
#include <stdlib.h>
#include <string.h>

int isPrime(int n) {
    if(n <= 1) return 0;
    for(int i = 2; i <= sqrt(n); i++) {
        if(n % i == 0) return 0;
    }
    return 1;
}

int main() {
    char s[10000];
    gets(s);

    int a[10000], n = 0;
    char *c = strtok(s, " "); // strtok tach phan tu dau tien trong s truoc dau cach " ", sau do con tro c tro vao
    while(c != NULL) {
        a[n++] = atoi(c); // bien phan tu vua tach thanh so bang ham atoi
        c = strtok(NULL, " "); //khi strtok NULL, tiep tuc tach tu phan tu cuoi cung no da tach trong s
    }

    int max = INT_MIN;
    for(int i = 0; i < n; i++) {
        if(isPrime(a[i]) && a[i] > max) {
            max = a[i];
        }
    }

    if(max == INT_MIN) {
        printf("-\n");
    } 
	else {
        printf("%d\n", max);
    }

    return 0;
}
