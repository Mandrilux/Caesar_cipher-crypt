/*
** str.c for  in /home/baptiste/rendu/metin2/item_list
**
** Made by
** Login   <baptiste@epitech.net>
**
** Started on  Wed Jun 29 10:04:20 2016
** Last update Fri Jul  1 10:11:31 2016 
*/

#include "data.h"

char    *epur_str(char *str)
{
  char  *rtn;
  int   i;
  int   j;

  if (str == NULL ||
      (rtn = malloc(sizeof(char) * (strlen(str) + 1))) == NULL)
    return (NULL);
  memset(rtn, 0, strlen(str) + 1);
  i = 0;
  while (str[i] == ' ' || str[i] == '\t')
    i++;
  j = 0;
  while (str[i] != '\0')
    {
      if (str[i] != ' ' && str[i] != '\t')
	rtn[j++] = str[i];
      else if (str[i] == ' ' || str[i] == '\t')
	{
	  if ((str[i] == ' ' || str[i] == '\t') && str[i + 1] != ' '
	      && str[i + 1] != '\t' && str[i + 1] != '\0')
	    rtn[j++] = ' ';
	}
      i++;
    }
  return (rtn);
}

int     decal(char *str)
{
  int   i = -1;
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

int	replace_no_char(char *str)
{
  int	i = -1;

  while (str[++i] != '\0')
    {
      if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'));
      else
	str[i] = ' ';
    }
  return (1);
}
