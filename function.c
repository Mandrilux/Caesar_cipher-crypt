/*
** function.c for  in /home/baptiste/project/Caesar_cipher-crypt
**
** Made by
** Login   <baptiste@epitech.net>
**
** Started on  Fri Jul  1 09:23:45 2016
** Last update Fri Jul  1 09:50:52 2016 
*/

#include "data.h"

int	crypt(char *str)
{
  int	i = 0;

  while (++i < 26)
    {
      decal(str);
      printf("%s\n", str);
    }
  return (1);
}

int     decrypt(char *str)
{
  int   i = 0;

  while (++i < 26)
    {
      decal(str);
      printf("%s\n", str);
    }
  return (1);
}

int	decal(char *str)
{
  int	i = -1;
  while (str[++i] != '\0')
    {
      if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
	{
	  if (str[i] == 'z')
	    str[i] = 'a';
	  else if (str[i] == 'Z')
	    str[i] = 'A';
	  else
	    str[i] += 1;
	}
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
