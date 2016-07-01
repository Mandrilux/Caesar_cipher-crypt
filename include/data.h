
#ifndef DATA_H_
#define DATA_H_

#include <stdlib.h>
#include <stdio.h>
#include <string.h>






char		 *my_strdup(char *src);

		/* function.c */

int		 crypt(char *str);
int		 decrypt(char *str);
int		 is_correct_param(char *str);

		/* display.c */

int		 display_usage(char *name_prog);
int		 display_tab(char **tab);

		/* str.c */

char		 *epur_str(char *str);
int		 decal(char *str);
int		 replace_no_char(char *str);
int		 count_tab(char **tab);
char		 **alloc(char **re_write, char *name);
char		 *my_strdup(char *src);

		/* main.c */

int		 main(int ac, char **av);

#endif /* DATA_H_ */
