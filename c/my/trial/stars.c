#include <stdio.h>

void stars_line(int n)
{
    int i = 0;
    while (i < n) {
        if (i < n - 1) printf("* ");
        else printf("*");
        i++;
    }
}

void stars_triangle(int n)
{
    for (int i = 1; i <= n; i++) {
        if(i < n) {
            stars_line(i);
            printf("\n");
        }
        else
            stars_line(i);
    }
}

int main(int argc, char const *argv[])
{
    int n = 0;
    scanf("%d", &n);
    stars_triangle(n);
    printf("\n");
    return 0;
}
