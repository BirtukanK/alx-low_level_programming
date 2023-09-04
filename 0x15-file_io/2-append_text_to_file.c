#include "main.h"
/**
 * append_text_to_file - a function that appends text at the end
 * @filename: name of file
 * @text_content: content of file
 * Return: 1 or -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
int fdOpen, fdWrite, length = 0;

	if (filename == NULL)
		return (-1);

	fdOpen = open(filename, O_WRONLY | O_APPEND);

	if (fdOpen == -1)
	{
		return (-1);
	}

	if (text_content == NULL)
		text_content = "";

	while (text_content[length] != '\0')
	{
		length++;
	}

	fdWrite = write(fdOpen, text_content, length);

	if (fdWrite == -1)
		return (-1);

	close(fdOpen);

	return (1);
}
