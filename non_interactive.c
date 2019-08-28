#include "head.h"

/**
 * non_interactive - if insert code in mode interactive execute
 * @buf: buf to getline
 * @argv: the new argv
 * @buf_size: new size of getline
 **/

void non_interactive(char *buf, char **argv, size_t buf_size)
{
	int argc = 0;
	char *str = NULL;

	while (getline(&buf, &buf_size, stdin) != EOF)
	{
		argc = new_argc(buf);
		str = rm_enter(buf);
		argv = new_argv(argc, str);

		if (argc != 0)
		{
			argv[0] = add_path(argv[0], argv, argc, buf);
			exec(argv, buf, argc, 0);
		}
		else
			free_grid(argv, argc);
	}
	free(buf);
	exit(0);
}
