#include "main.h"
/**
 * append_text_to_file - will append text at the end of a file
 * @filename: pointer to the name of the file
 * @text_content: a string to be add to the end of the file
 * Return: returns 1 on success, -1 if the function fails or filename
 * is NULL -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int o, w, length = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (length = 0; text_content[length];)
			length++;
	}
	o = open(filename, O_WRONLY | O_APPEND);
	w = write(o, text_content, length);

	if (o == -1 || w == -1)
		return (-1);
	close(o);
	return (1);
}
