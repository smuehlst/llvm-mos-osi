/*
 * Challenger 1P llvm-mos stdio test program.
 */
#include <stdio.h>

int
main(void)
{
    putchar('A');

    printf("\r\nHello world with llvm-mos!\r\n");
    printf("\r\n");
    printf("HELLO, %s!\r\n", "PRINTF");
    printf("sizeof(char) %d\r\n", (int) sizeof(char));
    printf("sizeof(int) %d\r\n", (int) sizeof(int));
    printf("sizeof(void *) %d\r\n", (int) sizeof(void *));
    printf("sizeof(long) %d\r\n", (int) sizeof(long));
    printf("sizeof(long long) %d\r\n", (int) sizeof(long long));
    printf("address of main %p\r\n", (void *) main);
    printf("main as int 0x%X\r\n", (unsigned int) main);

    for (unsigned int i = 0; i < 50; i += 1)
    {
        printf("%u", i % 10);
    }
    printf("\r\n");

    while (1);
	
    return 0;
}
