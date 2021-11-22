#ifndef FT_H
# define FT_H

#include <string.h>

void *ft_memset(void *s, int value, size_t n); 
void ft_bzero(void *s, size_t n);
void *ft_memcpy(void *destination, const void *source, size_t size);
void *ft_memccpy(void *dest, const void *src, int c, size_t n);
void *ft_memmove(void *dest, const vois *src, size_t n);

#endif
