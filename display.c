/*
** display.c for  in /home/baptiste/project/Caesar_cipher-crypt
**
** Made by
** Login   <baptiste@epitech.net>
**
** Started on  Fri Jul  1 09:19:42 2016
** Last update Fri Jul  1 09:36:12 2016 
*/

#include "data.h"

int	display_usage(char *name_prog)
{
  printf("%s Usage : [String] [0 (crypt) OR 1 (decrypt)]\n", name_prog);
  return (EXIT_FAILURE);
}
