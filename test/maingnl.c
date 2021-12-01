#include "get_next_line.h"

int main()
{
	int	fd;

	fd = open("gnl.txt", O_RDONLY);
	printf("premiere ligne de GNL |%s| \n", get_next_line(fd));
	printf("deuxieme ligne de GNL |%s| \n", get_next_line(fd));
	printf("3eme ligne de GNL |%s| \n", get_next_line(fd));
	printf("4eme ligne de GNL |%s| \n", get_next_line(fd));
	return (0);
}
