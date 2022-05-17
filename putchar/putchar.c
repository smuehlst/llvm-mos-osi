/*
 * Challenger 1P llvm-mos stdio test program.
 */
#include <stdio.h>

int
main(void)
{
    putchar('A');

    printf("\nHello world with llvm-mos!\n");
    printf("\n");
    printf("HELLO, %s!\n", "PRINTF");
    printf("sizeof(char) %d\n", (int) sizeof(char));
    printf("sizeof(int) %d\n", (int) sizeof(int));
    printf("sizeof(void *) %d\n", (int) sizeof(void *));
    printf("sizeof(long) %d\n", (int) sizeof(long));
    printf("sizeof(long long) %d\n", (int) sizeof(long long));
    printf("address of main %p\n", (void *) main);
    printf("main as int 0x%X\n", (unsigned int) main);

    for (unsigned int i = 0; i < 50; i += 1)
    {
        printf("%u", i % 10);
    }
    printf("\n");

    return 0;
}
