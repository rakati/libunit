#include "libunit.h"
#include "../tests/header.h"

static char		*get_result(int status)
{
	if (WIFEXITED(status))
	{
		if (WEXITSTATUS(status) == 0)
			return (GREEN("OK"));
	}
	else if (WTERMSIG(status) == SIGSEGV)
		return (RED("SIGV"));
	else if (WTERMSIG(status) == SIGBUS)
		return (RED("BUSE"));
	return (YELLOW("KO"));
}

static void		child(t_unit_test **test)
{
	int	return_value;

	return_value = (*test)->test_fct();
	exit(return_value);
}

static void		parent(char *name, int *success)
{
	int	status;

	status = 0;
	wait(&status);
	if (WIFEXITED(status) && WEXITSTATUS(status) == 0)
		*success += 1;
	print_str(name);
	print_str(" : [");
	print_str(get_result(status));
	print_endl("]");
}

int				launch_tests(t_unit_test **list)
{
	int	success;
	int	counter;
	int	pid;

	success = 0;
	counter = 0;
	while (*list)
	{
		pid = fork();
		if (pid < 0)
			print_str("failed to launch test\n");
		else if (pid == 0)
			child(list);
		else if (pid > 0)
			parent((*list)->name, &success);
		*list = (*list)->next;
		counter++;
	}
	print_str("\nsuccessfull test ");
	print_nbr(success);
	print_str("/");
	print_nbr(counter);
	print_endl(" total tests checked");
	return ((counter == success) ? 0 : 1);
}
