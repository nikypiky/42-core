#include "libft.h"
#include<stdio.h>
#include <bsd/string.h> 
#include <time.h>

int main() {
    int number = 12345;
    int fd = 1; // Use file descriptor 1 (stdout) for testing, you can change it to a file descriptor or open a file.

    ft_putnbr_fd(number, fd);
    return 0;
}
