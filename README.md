# libft

**My own C library**\
42 project. The code is written in accordance with The Norm (42 coding style).

The aim of the project was to recode some C standard library functions as well as write other useful one.\
Using this library, you can do some memory, types, strings and linked lists manipulations.\
Each function has brief description.\
`get_next_line` is now also part of the libft, [here](https://github.com/linpoa/get_next_line) you can view it as a independent project.

***Makefile***
* *`make`* -- compiles `libft.a` static library except linked list functions (those that start with `ft_lst...`).
* *`bonus`* -- compiles linked lists functions as well.
* *`clean`* -- deletes object files.
* *`fclean`* -- deletes object files and `libft.a`.
* *`re`* -- runs `fclean` and recompiles.