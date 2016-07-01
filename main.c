#include "data.h"

int	main(int ac, char **av)
{
  if (ac != 3)
    return (display_usage(av[0]));
  return (EXIT_SUCCESS);
}
