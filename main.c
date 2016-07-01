#include "data.h"

int	main(int ac, char **av)
{
  int	nb;

  if (ac != 3)
    return (display_usage(av[0]));
  if (is_correct_param(av[2]) != 1)
    return (display_usage(av[0]));
  nb = atoi(av[2]);
  if (nb == 0)
    crypt(av[1]);
  else
    decrypt(av[1]);
  return (EXIT_SUCCESS);
}
