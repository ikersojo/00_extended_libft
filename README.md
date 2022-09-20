# 00_extended_libft
A modified version of lift project, to be used in other projects.

## Changes over regular libft
- Modified source file structure.
- ft_put functions return the number of characters printed as size_t.
- ft_substr is modified to return NULL when len is = 0 instead of an empty string
- ft_substr is modified to return NULL when the starting point is higher than the length of the string
- Bonus removed as an alternative compilation option (all included in the main libft)

## Additional functions
- ft_isspace: checks if a character is a space.
- ft_abs: returns the absolute value of an signed int.