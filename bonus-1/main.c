#include <stdio.h>

int main(void)
{
    int nombre;

    do {
        printf("Saisissez un nombre entre 0 et 100 : ");
        scanf("%d", &nombre);
    } while (nombre < 0 || nombre > 100);

    for (int i = 0; i <= nombre; i += 5) {
        printf("%d\n", i);
    }

    return 0;
}
