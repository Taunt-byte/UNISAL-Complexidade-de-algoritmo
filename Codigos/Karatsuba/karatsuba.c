/*
Lucas Neves da Silva
20/09/2022
*/

#include <stdio.h>
#include <string.h>
#include <math.h>

char* add(char* num1, char* num2) {
    // Implementação da adição aqui
}

char* subtract(char* num1, char* num2) {
    // Implementação da subtração aqui
}

char* karatsuba(char* num1, char* num2) {
    int len1 = strlen(num1);
    int len2 = strlen(num2);
    if (len1 == 1 && len2 == 1) {
        char* result = (char*)malloc(2);
        int res = (num1[0] - '0') * (num2[0] - '0');
        sprintf(result, "%d", res);
        return result;
    }

    int n = (len1 > len2) ? len1 : len2;
    int m = (n + 1) / 2;
    char* a = (char*)malloc(m + 1);
    strncpy(a, num1, m);
    a[m] = '\0';
    char* b = (char*)malloc(len1 - m + 1);
    strncpy(b, num1 + m, len1 - m);
    b[len1 - m] = '\0';
    char* c = (char*)malloc(m + 1);
    strncpy(c, num2, m);
    c[m] = '\0';
    char* d = (char*)malloc(len2 - m + 1);
    strncpy(d, num2 + m, len2 - m);
    d[len2 - m] = '\0';

    char* ac = karatsuba(a, c);
    char* bd = karatsuba(b, d);
    int len_ac = strlen(ac);
    int len_bd = strlen(bd);

    char* a_b = add(a, b);
    char* c_d = add(c, d);
    char* ad_bc = subtract(karatsuba(a_b, c_d), add(ac, bd));

    int len_ad_bc = strlen(ad_bc);

    int len_result = len_ac + len1 + len2 - 2 * m;
    char* result = (char*)malloc(len_result + 1);
    memset(result, '0', len_result);
    result[len_result] = '\0';

    memcpy(result, ac, len_ac);
    memcpy(result + len_ac + len1 - 2 * m, ad_bc, len_ad_bc);
    memcpy(result + len_ac + len1 + len2 - 4 * m, bd, len_bd);

    free(a);
    free(b);
    free(c);
    free(d);
    free(ac);
}