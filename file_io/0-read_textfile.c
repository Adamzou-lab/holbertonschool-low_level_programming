#include "main.h"
/**
 * read_textfile - Lit un fichier texte et l'affiche sur la sortie standard.
 * @filename: Nom du fichier à lire.
 * @letters: Nombre de lettres à lire et à afficher.
 *
 * Return: Le nombre réel de lettres lues et affichées, ou 0 en cas d'erreur.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buf;
	ssize_t bytes_read;
	ssize_t bytes_written;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buf = malloc(letters);
	if (buf == NULL)
		return (0);

	bytes_read = read(fd, buf, letters);
	bytes_written = write(STDOUT_FILENO, buf, bytes_read);
	if (bytes_written != bytes_read)
	{
		free(buf);
		close(fd);
		return (0);
	}
	free(buf);
	close(fd);
	return (bytes_read);
}
