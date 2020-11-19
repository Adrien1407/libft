#Info
Your libft.h file can contain macros and typedefs if needed.  
• A string must ALWAYS end with a ’\0’, even if it is not included in the function’s
description, unless explicitly stated otherwise.  
• It is forbidden to use global variables.  
• If you need sub-functions to write a complex function, you must define these subfunctions as static as stipulated in the Norm.  

You must include the necessary include system files to use one or more of the three
authorized functions in your .c files.  
The only additional system include file you
are allowed to use is string.h to have access to the constant NULL and to the type
size_t.  
Everything else if forbidden.

Some of the functions’ prototypes you have to re-code use the
"restrict" qualifier. This keyword is part of the c99 standard.
It is therefore forbidden to include it in your prototypes and to
compile it with the flag -std=c99.

Check out this link to find out more about static functions:
http://codingfreak.blogspot.com/2010/06/static-functions-in-c.html

### Notes

`size_t` is included in `<stdlib.h>` & `<string.h>` which calls `<stddef.h>`

Avoid implicit casts :
`char *str;`
`str = malloc(42 * sizeof(*str));`  Wrong ! Malloc returns a void * (implicit cast)
`str = (char *) malloc(42 * sizeof(*str));`  Right ! (explicit cast)

## Allowed functions

`malloc, free, write`

## Dependencies

- Libc
- Libbsd

## Norminette

https://github.com/42Paris/norminette

# Functions

- [ ] calloc
- [ ] memset
- [x] bzero
- [ ] memcpy
- [ ] memccpy
- [ ] memmove
- [ ] memchr
- [ ] memcmp
- [x] strlen
- [x] strdup
- [x] strcpy
- [x] strncpy
- [x] strcat
- [x] strncat
- [x] strlcat
- [x] strchr
- [x] strrchr
- [x] strstr
- [x] strnstr
- [x] strcmp
- [x] strncmp
- [x] atoi
- [x] isalpha
- [x] isdigit
- [x] isalnum
- [x] isascii
- [x] isprint
- [x] toupper
- [x] tolower

# Additional functions

- [ ] memalloc
- [ ] memdel
- [ ] strnew
- [x] strdel
- [x] strclr
- [x] strlen
- [ ] strmap
- [ ] strmapi
- [x] strequ
- [x] strnequ
- [x] strjoin
- [ ] strtrim
- [x] split
- [x] itoa
- [x] putchar
- [x] putstr
- [x] putendl
- [x] putnbr
- [x] putchar-fd
- [x] putstr-fd
- [x] putendl-fd
- [x] putnbr-fd

# Bonus functions

## Structure

`typedef struct s_list`
`{`
`	void *content;`
`	size_t content_size;`
`	struct s_list *next;`
`} t_list;`

- [ ] lstnew
- [ ] lstdelone
- [ ] lstdel
- [ ] lstadd
- [ ] lstiter
- [ ] lstmap

