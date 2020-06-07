# Définition des cibles particulières
.PHONY: clean, mrproper

# désactivations des règles implicites
.SUFFIXES:

#compilateur
CC= gcc
CFLAGS=-Wall -pedantic -ansi


# ------ 2 variables à renseigner ---------------------
projet= tri_tableau            # nom de l éxecutable
sources= main.c fonctions.c	   # sources C 

objets= $(sources:.c=.o)

all: $(projet)

$(projet): $(objets)               # construction du projet (linker)
	$(CC) -o $@ $(objets) -lm 


%.o: %.c			   # compilation de tous les sources C
	$(CC) $(CFLAGS) -o  $@ -c $< 

clean:				   # efface tous les fichiers objets
	rm -rf *.o
# ------ 1 variable à renseigner ---------------------
mrproper: clean			   # efface tous les fichiers objet + executable
	rm -rf tri_tableau

# reference :ihttp://perso.univ-lyon1.fr/jean-claude.iehl/Public/educ/Makefile.html
