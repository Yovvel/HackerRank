#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    int n;
    scanf("%d", &n);
    //Complete the code to calculate the sum of the five digits on n.
    int answer = 0;
    while (n > 0) {
        answer = answer + (n % 10);
        //printf("n % 10 %i\n", n % 10);
        n = n / 10;
        //printf("answer: %i n: %i\n", answer, n);
    }
    //printf("%i\n", n % 10);
    printf("%i", answer);
    return 0;
}

