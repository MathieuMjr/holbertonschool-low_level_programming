#include "main.h"

/**
 * create_file - create a file or, if already exists
 * erase its content
 * @filename: name of the file to open
 * @text_content: text to write in the file
 *
 * Return: 0 if succeed, -1 if not
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	int i = 0;
	ssize_t written;

	if (filename == NULL) /*retourne une erreur si pas de nom de fichier donné*/
		return (-1);

	fd = open(filename, O_WRONLY | O_TRUNC | O_CREAT, S_IRUSR | S_IWUSR);
	/*si existe déjà, ouvrir en write only et efface (trunc). Sinon, create (creat)*/
	/*si le fichier est créé, mettre les autorisations lecture et écriture au owner*/
	if (fd == -1)
		close (fd);
		return (-1);
	if (text_content == NULL) /*si pas de texte, imprimer rien*/
		text_content = "";
	else
	{
		while (text_content[i] != '\0')/*calculer la taille de la chaine à écrire*/
		{								/*servira pour le nombre de byte a donner à write*/
			++i;
		}
	}
	written = write(fd, text_content, i);/*écrit sur la sortie fd (le fichier ouvert) le text_content dont la taille est i bytes*/
	if (written != (i))/*si pas de bug, written retourne ce qui a été écrit, donc longueur de i. Si bug, retourner -1*/
	{
		close (fd);
		return (-1);
	}
	return (1);
}
