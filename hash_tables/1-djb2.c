/**
 * hash_djb2 - implementation of the djb2 algorithm
 * @str: string used to generate hash value
 *
 * Return: hash value
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	hash = 5381;
	while ((c = *str++))
	{
		hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
	}
	return (hash);
}

/*la fonction de hachage telle quelle ne retournera pas un index
Elle transformera la chaine de caractère en un chiffre, sans doute bcp plus grand
que la taille de notre array.
La function suivante va transformer cette valeur en index. 
Ici on est a une étape intermédiaire*/