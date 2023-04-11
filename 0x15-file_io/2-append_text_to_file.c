#include "main.h"

/**
 * _strlen - length of str
 * @content: str
 *
 * Return: int len
 */
int _strlen(char *content)
{
	int len;

	while (content[len] != '\0')
		len++;
	return (len);
}

/**
 * append_text_to_file - append a text to file
 * @filename: the file pointer to craete
 * @text_content: content to write on the file
 *
 * Return: 1 on Success, -1 otherwise
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int o, w, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		len = _strlen(text_content);
	}

	o = open(filename, O_WRONLY | O_APPEND);
	w = write(o, text_content, len);

	if (o == -1 || w == -1)
		return (-1);

	close(o);

	return (1);
}
