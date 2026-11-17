#include <unistd.h>
/**
    @brief Simples put an char into de terminal


    * This functions take an char and prints it into File Descriptor

    @param c -> char to print
*/
void    ft_putchar(char c) {
    write(1, &c, 1);
}