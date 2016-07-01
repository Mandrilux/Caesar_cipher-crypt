/*
** function.c for  in /home/baptiste/project/Caesar_cipher-crypt
**
** Made by
** Login   <baptiste@epitech.net>
**
** Started on  Fri Jul  1 09:23:45 2016
** Last update Fri Jul  1 09:31:23 2016 
*/

#include "data.h"

int	crypt(char *str)
{
  (void) str;
  return (1);
}

int     decrypt(char *str)
{
  (void)str;
  return (1);
}

int	is_correct_param(char *str)
{
  if (strlen(str) != 1)
    return (printf("[%s] Invalid parameter \n", str));
  if (str[0] == '1' || str[0] == '0')
    return (1);
  else
    return (printf("%s Invalid parameter \n", str));
}
