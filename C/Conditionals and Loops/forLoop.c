#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>



int main() 
{
    int a, b;
    scanf("%d\n%d", &a, &b);

    char *writtenNumbers[] ={"one","two","three","four","five", "six","seven","eight","nine"};
    char *evenOdd[] ={"even", "odd"};
  	// Complete the code.
    for (int i = a; i <= b;i++)
            if(i >= 1 && i <= 9){
        printf("%s\n",writtenNumbers[i-1]);
    }
    else if (i > 9) {
        printf("%s\n",evenOdd[i % 2]);
    }
    return 0;
}

