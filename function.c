/*
** function.c for  in /home/baptiste/project/Caesar_cipher-crypt
**
** Made by
** Login   <baptiste@epitech.net>
**
** Started on  Fri Jul  1 09:23:45 2016
** Last update Fri Jul  1 10:26:46 2016 
*/

#include "data.h"

int	decrypt(char *str)
{
  int	i = 0;
  char	**tmp = NULL;
  char	*pur;

  while (++i < 26)
    {
      decal(str);
      replace_no_char(str);
      pur = epur_str(str);
      tmp = alloc(tmp , pur);
      free(pur);
    }
  display_tab(tmp);
  return (1);
}

int     crypt(char *str)
{
  int   i = 0;
  char	*tmp;

  while (++i < 26)
    {
      decal(str);
      replace_no_char(str);
      tmp = epur_str(str);
      if (i < 10)
	printf("[+%d]  %s\n", i, tmp);
      else
	printf("[+%d] %s\n", i, tmp);
      free(tmp);
    }
  return (1);
}


int	is_correct_param(char *str)
{
  if (strlen(str) != 1)
    return (printf("[%s] Invalid parameter \n", str));
  if (str[0] == '1' || str[0] == '0')
    return (1);
  else
    return (printf("[%s] Invalid parameter \n", str));
}
