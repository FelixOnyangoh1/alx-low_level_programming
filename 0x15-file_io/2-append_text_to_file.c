#include "main.h"

/**
 * append_text_to_file - append text at the end of the  files
 * @filename:  ptr to file name.
 * @text_content: str addeded to the end of the file.
 *
 * Return: if function fails or filename null - -1.
 *         if file doesnt  exist user lack write permission - -1.
 *        Or  otherwise - 1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int o, w, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	o = open(filename, O_WRONLY | O_APPEND);
	w = write(o, text_content, len);

	if (o == -1 || w == -1)
		return (-1);

	close(o);

	return (1);
}

