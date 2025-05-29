#include "get_next_line_bonus.h"
#include <fcntl.h>
#include <stdio.h>

int	ft_strncmp(const char *s1, const char *s2)
{
	size_t	i;

	i = 0;
	if (!s1 && !s1)
		return (1);
	while (s1[i] && s2[i])
	{
		if (s1[i] != s2[i])
		{
			return (0);
		}
		i++;
	}
	if (s1[i] || s2[i])
		return (0);
	return (1);
}

void test(int fd, char *expected)
{
	char *line;

	line = get_next_line(fd);
	printf("--------------Check -- fd: %d-------------------\n", fd);
	printf("%s", line);
	printf("\n^====================================^\n");
	printf("%s", expected);
	if (!ft_strncmp(line, expected))
	{
		printf("\nResult: Failed\n");
		exit(1);
	}
	else 
		printf("\nResult: Passed\n");
	free(line);
}

void invalid_fds(void)
{
	int i = -1;
	
	while (i > -200)
	{
		test(i, NULL);
		i += (i + i);
	}
	i = 1024;
	while (i < 1124)
	{
		test(i, NULL);
		i += (2 + 10);
	}
	i = 3;
	test(i, NULL);
}
void get_line(int fd, char *output)
{
	test(fd, output);
}
void read_file1()
{
	int fd = open("file.txt", O_RDONLY);
		get_line(fd, "Roses are red,  \n");
	get_line(fd, "Skies can be gray,\n");
	get_line(fd, "Coffee is warm,\n");
	get_line(fd, "But you make my day.\n");
	get_line(fd, "end.");
	get_line(fd, NULL);
	get_line(fd, NULL);
	close(fd);
}

void read_file2()
{
	int fd = open("file2.txt", O_RDONLY);
	get_line(fd, "No roses are blue,  \n");
	get_line(fd, "Skies can be red,  \n");
	get_line(fd, "Coffee is cold,  \n");
	get_line(fd, "But you make my night.\n");
	get_line(fd, "end--.");
	get_line(fd, NULL);
	close(fd);
}

void mult_fds()
{
	int fd1 = open("file.txt", O_RDONLY);
	int fd2 = open("file2.txt", O_RDONLY);
	
	get_line(fd1, "Roses are red,  \n");
	get_line(fd2, "No roses are blue,  \n");

	get_line(fd1, "Skies can be gray,\n");
	get_line(fd2, "Skies can be red,  \n");

	get_line(fd1, "Coffee is warm,\n");
	get_line(fd2, "Coffee is cold,  \n");

	get_line(fd1, "But you make my day.\n");
	get_line(fd2, "But you make my night.\n");

	get_line(fd1, "end.");
	get_line(fd2, "end--.");

	get_line(fd1, NULL);
	get_line(fd2, NULL);

	get_line(fd1, NULL);
	get_line(fd2, NULL);
	close(fd1);
	close(fd2);
}

void leaks()
{
	int fd1 = open("file.txt", O_RDONLY);
	int fd2 = open("file2.txt", O_RDONLY);
	int fd3 = open("no_line.txt", O_RDONLY);

	get_line(fd1, "Roses are red,  \n");
	get_line(fd2, "No roses are blue,  \n");

	get_line(fd3, "Lorem Ipsum is simply dummy text of the printing and typesetting industry. Lorem Ipsum has been the industry's standard dummy text ever since the 1500s, when an unknown printer took a galley of type and scrambled it to make a type specimen book. It has survived not only five centuries, but also the leap into electronic typesetting, remaining essentially unchanged. It was popularised in the 1960s with the release of Letraset sheets containing Lorem Ipsum passages, and more recently with desktop publishing software like Aldus PageMaker including versions of Lorem Ipsum. Why do we use it?It is a long established fact that a reader will be distracted by the readable content of a page when looking at its layout. The point of using Lorem Ipsum is that it has a more-or-less normal distribution of letters, as opposed to using 'Content here, content here', making it look like readable English. Many desktop publishing packages and web page editors now use Lorem Ipsum as their default model text, and a search for 'lorem ipsum' will uncover many web sites still in their infancy. Various versions have evolved over the years, sometimes by accident, sometimes on purpose (injected humour and the like).");

}

void no_line(void)
{
	int fd = open("no_line.txt", O_RDONLY);

	get_line(fd, "Lorem Ipsum is simply dummy text of the printing and typesetting industry. Lorem Ipsum has been the industry's standard dummy text ever since the 1500s, when an unknown printer took a galley of type and scrambled it to make a type specimen book. It has survived not only five centuries, but also the leap into electronic typesetting, remaining essentially unchanged. It was popularised in the 1960s with the release of Letraset sheets containing Lorem Ipsum passages, and more recently with desktop publishing software like Aldus PageMaker including versions of Lorem Ipsum. Why do we use it?It is a long established fact that a reader will be distracted by the readable content of a page when looking at its layout. The point of using Lorem Ipsum is that it has a more-or-less normal distribution of letters, as opposed to using 'Content here, content here', making it look like readable English. Many desktop publishing packages and web page editors now use Lorem Ipsum as their default model text, and a search for 'lorem ipsum' will uncover many web sites still in their infancy. Various versions have evolved over the years, sometimes by accident, sometimes on purpose (injected humour and the like).");
}
int main(int argc, char **args)
{
	for (int i = 0; i < argc; i++) {
        printf("%s\n", args[i]);
		if (*(args[i]) == 'i')
			invalid_fds();
		if (*(args[i]) == '1')
			read_file1();
		if (*(args[i]) == '2')
			read_file2();
		if (*(args[i]) == 'm')
			mult_fds();
		if (*(args[i]) == 'n')
			no_line();
		if (*(args[i]) == 'l')
			leaks();
		if (*(args[i]) == 'a')
		{
			invalid_fds();
			leaks();
			read_file1();
			read_file2();
			mult_fds();
			no_line();
			break;
		}
    }
	return 1;
}
