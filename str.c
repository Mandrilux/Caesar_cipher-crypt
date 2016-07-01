/*
** str.c for  in /home/baptiste/rendu/metin2/item_list
**
** Made by
** Login   <baptiste@epitech.net>
**
** Started on  Wed Jun 29 10:04:20 2016
** Last update Fri Jul  1 10:33:26 2016 
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

int     count_tab(char **tab)
{
  int   i = -1;

  if (tab == NULL)
    return (0);
  while (tab[++i] != NULL);
  return (i);
}

char    **alloc(char **re_write, char *name)
{
  int   i;
  char  **tmp;

  i = -1;
  if (re_write == NULL)
    {
      if ((tmp = malloc(sizeof(char *) * 2)) == NULL)
	return (NULL);
      tmp[0] = my_strdup(name);
      tmp[1] = NULL;
    }
  else
    {
      if ((tmp = malloc(sizeof(char *) *
			(count_tab(re_write) + 2))) == NULL)
	return (NULL);
      while (re_write[++i] != NULL)
	tmp[i] = my_strdup(re_write[i]);
      tmp[i] = my_strdup(name);
      tmp[i + 1] = NULL;
    }
  free_tab(re_write);
  return (tmp);
}

char    *my_strdup(char *src)
{
  char  *str;
  int   lenght;

  if (src == NULL)
    return (NULL);
  lenght = strlen(src) + 1;
  if ((str = malloc(sizeof(char) * lenght)) == NULL)
    return (NULL);
  strcpy(str, src);
  return (str);
}
