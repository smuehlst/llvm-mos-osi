/*
 * Challenger 1P llvm-mos minimal test program.
 *
 * It writes a hello world text directly to video RAM.
 */
#include <string.h>

int
main(void)
{
    static const char str[] = "Hello world with llvm-mos C++!";
    char * const video_ram_start = (char *) 0xd000;

    char *vp = video_ram_start + 0x224;
    for (auto const c: str)
    {
        if (c)
        {
            *vp++ = c;
        }
    }
}
