#include "data.h"

int	main(int ac, char **av)
{
  if (ac != 3)
    return (display_usage(av[0]));
  if (is_correct_param(av[2]) != 1)
    return (display_usage(av[0]));
  return (EXIT_SUCCESS);
}
