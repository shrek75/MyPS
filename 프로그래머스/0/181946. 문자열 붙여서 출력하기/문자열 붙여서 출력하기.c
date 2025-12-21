#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define LEN_INPUT1 11
#define LEN_INPUT2 11

int main(void) {
    char s1[LEN_INPUT1];
    char s2[LEN_INPUT2];
    scanf("%s %s", s1, s2);

    char s3[LEN_INPUT1 + LEN_INPUT2];
    char* pTarget = s1;
    int i = 0;
    for (i ; i < LEN_INPUT1; i++)
    {
        if (pTarget[i] == 0)
        {
            pTarget = s2;
            break;
        }
        s3[i] = pTarget[i];
    }
    for (int j = 0; j < LEN_INPUT2; j++)
    {
        if (pTarget[j] == 0)
        {
            s3[i + j] = 0;
            break;
        }
        s3[i + j] = pTarget[j];
    }

    printf("%s", s3);
    return 0;
}