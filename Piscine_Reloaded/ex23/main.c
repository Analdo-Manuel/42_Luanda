#include <stdio.h>
#include "ft_point.h"

void	set_point(t_point *point)
{
	point->x = 42;
	point->y = 21;
}

int	main(void)
{
	t_point	point;

	set_point(&point);
	printf("x: %d\ny: %d\n\n", point.x, point.y);
	point.x = 10;
	point.y = 15;
	printf("x1: %d\ny1: %d\n", point.x, point.y);
	return (0);
}
