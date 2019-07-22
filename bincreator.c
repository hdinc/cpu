#include <stdio.h>

int main()
{
    printf("Press enter and enter data byte by byte and type 3 and press enter for quitting\n");
    int c;
    int d = 1;
    int a = 0;
    FILE* fp = fopen("code.bin", "wb");
asd:
    scanf("%d", &c);
    if (c == 3) {
        fclose(fp);
        return 0;
    }

    while (c > 0) {
        a += d * (c % 10);
        c /= 10;
        d *= 2;
    }
    printf("%d\n", a);
    fwrite(&a, 1, 1, fp);
    a = 0;
    d = 1;
    goto asd;
}