99 % de l'espace de stockage utilisés … 
Une fois la limite atteinte, vous n'aurez plus assez d'espace pour créer, modifier ou importer des fichiers. Profitez de 100 Go de stockage pour 19,00 MAD 4,75 MAD/mois pendant 3 mois.

#ifndef __MAIN_H__
#define __MAIN_H__

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);

#endif
