/*
** display.c for  in /home/baptiste/project/Caesar_cipher-crypt
**
** Made by
** Login   <baptiste@epitech.net>
**
** Started on  Fri Jul  1 09:19:42 2016
** Last update Sun Jul  3 15:00:21 2016 
*/

#include "data.h"

int	display_usage(char *name_prog)
{
  printf("%s Usage : [String] [0 (crypt) OR 1 (decrypt)] [KEY (option)]\n", name_prog);
  return (EXIT_FAILURE);
}

int	display_tab(char **tab)
{
  int	i = count_tab(tab);

  if (i == 0)
    return (-1);
  while (--i >= 0)
    {
      if (25 -i  < 10)
	 printf("[%d]  %s\n",25 - i, tab[i]);
      else
	printf("[%d] %s\n",25 - i, tab[i]);
    }
  return (1);
}
