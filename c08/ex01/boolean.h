
#ifndef BOOLEAN_H
# define BOOLEAN_H

# include <unistd.h>
# define EVEN_MSG "I have an even number of arguments.\n"
# define ODD_MSG "I have an odd number of arguments.\n"
# define SUCCESS (0)
# define TRUE (1)
# define FALSE  (0)
# define EVEN(NBR)	((NBR % 2) == 0)

typedef int	t_bool;

#endif
