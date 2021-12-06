#include "get_next_line.h"

int main()
{
	int	fd;

	fd = open("gnl.txt", O_RDONLY);
	printf("premiere ligne de GNL |%s| \n", ft_get_next_line(fd));
	printf("\n");
	printf("deuxieme ligne de GNL |%s| \n", ft_get_next_line(fd));
	printf("\n");
	printf("3eme ligne de GNL |%s| \n", ft_get_next_line(fd));
	return (0);
}
