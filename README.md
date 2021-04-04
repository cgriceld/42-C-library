# C library

**My own C library**\
42 algorithmic project. The code is written in accordance with The Norm (42 coding style).

The aim of the project was to recode some C standard library functions as well as write other useful one.\
Using this library, you can do some memory, types, strings and linked lists manipulations.\
Each function has brief description.\

***Makefile***
* *`make`* -- compiles `libft.a` static library except linked list functions (those that start with `ft_lst...`).
* *`bonus`* -- compiles linked lists functions as well.
* *`clean`* -- deletes object files.
* *`fclean`* -- deletes object files and `libft.a`.
* *`re`* -- runs `fclean` and recompiles.