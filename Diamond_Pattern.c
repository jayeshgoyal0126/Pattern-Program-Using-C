#include <stdio.h>
int main()
{
    int n,i,comp,j,k;

    printf("Enter an no."); // taking number till which our dimond will be printed
    scanf("%d",&n); // assining the value into n

    // first outer loop to iterate through each row
    for (i = 0; i < 2 * n - 1; i++) {

        // assigning values to the comparator according to
        // the row number
        if (i < n) {
            comp = 2 * (n - i) - 1;
        }
        else {
            comp = 2 * (i - n + 1) + 1;
        }

        // first inner loop to print leading whitespaces
        for (j = 0; j < comp; j++) {
            printf(" ");
        }

        // second inner loop to print stars *
        for (int k = 0; k < 2 * n - comp; k++) {
            //printf("* ");
            printf("%d ", k + 1);  // Numbers
            //printf("%c ", k + 'A');  // Alphabets
        }
        printf("\n");
    }
    return 0;
}
