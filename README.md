# 00_extended_libft
A modified version of lift project, to be used in other projects.

## Changes over regular libft
- Modified source file structure.
- ft_put functions return the number of characters printed as int or -1 if fail.
- ft_substr is modified to return NULL when len is = 0 instead of an empty string
- ft_substr is modified to return NULL when the starting point is higher than the length of the string
- Bonus removed as an alternative compilation option (all included in the main libft)

## Additional main functions
- ft_printf

## Additional auxiliary functions
- ft_isspace: checks if a character is a space (extracted from atoi).
- ft_abs: returns the absolute value of an signed int (extracted from putnbr).
- ft_ischarset: tests if the character c is contained within the string set (extracted from strtrim).
- ft_digitcount: returns the number of digits in an unsigned long in a given base length (extracted from itoa and modified with base length as argument).
- ft_putunbr_fd: outputs the unsigned integer n to the file descriptor fd.
- ft_putuhexnbr_fd: outputs the unisgned integer n to the file descriptor fd in hexadecimal.
- ft_putuhexlongnbr_fd: outputs the unisgned long n to the file descriptor fd in hexadecimal.