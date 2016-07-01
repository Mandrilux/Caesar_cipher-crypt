/*
** free.c for  in /home/baptiste/project/Caesar_cipher-crypt
**
** Made by
** Login   <baptiste@epitech.net>
**
** Started on  Fri Jul  1 10:32:10 2016
** Last update Fri Jul  1 10:34:09 2016 
*/

#include "data.h"

int     free_tab(char **tab)
{
  int   i;

  i = -1;
  if (tab != NULL)
    {
      while (tab[++i] != NULL)
	free(tab[i]);
      free(tab);
    }
  return (1);
}
