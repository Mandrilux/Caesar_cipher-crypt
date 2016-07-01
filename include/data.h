
#ifndef DATA_H_
#define DATA_H_

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

		/* function.c */

int		 crypt(char *str);
int		 decrypt(char *str);
int		 is_correct_param(char *str);

		/* display.c */

int		 display_usage(char *name_prog);

		/* str.c */

char		 *epur_str(char *str);
int		 decal(char *str);
int		 replace_no_char(char *str);

		/* main.c */

int		 main(int ac, char **av);

#endif /* DATA_H_ */
