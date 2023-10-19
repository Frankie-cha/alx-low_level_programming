#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *infinite_add(char *n1, char *n2, char *r, int size_r) {
    int len1 = strlen(n1);
    int len2 = strlen(n2);

    if (len1 > size_r || len2 > size_r) {
        return 0; // Result cannot be stored in the given buffer
    }

    int carry = 0;
    int i = len1 - 1;
    int j = len2 - 1;
    int k = 0;

    while (i >= 0 || j >= 0 || carry) {
        int num1 = (i >= 0) ? n1[i] - '0' : 0;
        int num2 = (j >= 0) ? n2[j] - '0' : 0;
        int sum = num1 + num2 + carry;

        carry = sum / 10;
        sum %= 10;

        if (k < size_r - 1) {
            r[k] = sum + '0';
            k++;
        } else {
            return 0; // Result exceeds buffer size
        }

        i--;
        j--;
    }

    r[k] = '\0';
    strsep(r); // Reverse the result string

    return r;
}
