#include <stdio.h>
#include <stdlib.h>

int createsto(int a);
int creaprogramma(int a);
int compila(int a);
int github(int a);
int gmailprincipale(int a);
int gmailscuola(int a);
int gmailpanzette(int a);
int vaiaeseguibili(int a);
int vaiacodici(int a);
int creaprogrammajava(int a);
int compilajava(int a);
int vaiajava(int a);
int main(void)
{
	int scelta;
	printf("* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *\n");
	printf("*	COMANDI ESEGUIBILI:						    *\n");
	printf("*									    *\n");
	printf("*	01. Crea un file di testo					    *\n");
	printf("*	02. Crea/Modifica un file sorgente per un programma C		    *\n");
	printf("*	03. Compila programma C						    *\n");
	printf("*	04. vai su GitHub						    *\n");
	printf("*	05. Vai nella mail principale					    *\n");
	printf("*	06. Vai nella mail di scuola					    *\n");
	printf("*	07. Vai nella mail delle panzette				    *\n");
	printf("*	08. Vai nella cartella degli eseguibili				    *\n");
	printf("*	09. Vai nella cartella dei codici sorgente			    *\n");
	printf("*	10. Crea/Modifica un file sorgente per un programma Java	    *\n");
	printf("*	11. Compila programma Java					    *\n");
	printf("*	12. Vai nella cartela di java					    *\n");
	printf("*									    *\n");
	printf("* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *\n\n");
	printf("	Che comando vuoi eseguire?: ");
	scanf("%d", &scelta);
	
	switch(scelta)
	{
		case 1:
			createsto(scelta);
		break;
		
		case 2:
			creaprogramma(scelta);
		break;
		
		case 3:
			compila(scelta);
		break;
		
		case 4:
			github(scelta);
		break;
		
		case 5:
			gmailprincipale(scelta);
		break;
		
		case 6:
			gmailscuola(scelta);
		break;
		
		case 7:
			gmailpanzette(scelta);
		break;
		
		case 8:
			vaiaeseguibili(scelta);
		break;
		
		case 9:
			vaiacodici(scelta);
		break;
		
		case 10:
			creaprogrammajava(scelta);
		break;
		
		case 11:
			compilajava(scelta);
		break;
		
		case 12:
			vaiajava(scelta);
		break;
		
		default:
			printf("\nOpzione non disponibile\n\n");
		break;
	}
	
	return 0 ;
}

int createsto(int a)
{
	FILE *fd;
	char x[1000];
	 
	fd=fopen("scelta.sh", "w");
	if (fd==NULL){
		perror("Errore in apertura del file");
		exit(1);
	}
	
	printf("\nInserisci il nome del file: ");
	fflush(stdin);
	scanf("%s", x);
	
	printf("Scrivi:\n");
	
	fprintf(fd, "#!/bin/bash\ncd ../Desktop/Testo\ncat > %s.txt", x);
	
	fclose(fd);
	
	return 0;
}

int creaprogramma(int a)
{
	FILE *fd;
	char x[1000];
	 
	fd=fopen("scelta.sh", "w");
	if (fd==NULL){
		perror("Errore in apertura del file");
		exit(1);
	}
	
	printf("\nInserisci il nome del file: ");
	fflush(stdin);
	scanf("%s", x);
	
	fprintf(fd, "#!/bin/bash\ncd ../Desktop/programmi/codici_sorgente\nsudo gedit %s.c", x);
	
	fclose(fd);
	
	return 0;
}

int compila(int a)
{
	FILE *fd;
	char x[1000];
	 
	fd=fopen("scelta.sh", "w");
	if (fd==NULL){
		perror("Errore in apertura del file");
		exit(1);
	}
	
	printf("\nInserisci il nome del file: ");
	fflush(stdin);
	scanf("%s", x);
	
	fprintf(fd, "#!/bin/bash\ncd ../Desktop/programmi/codici_sorgente\ngcc %s.c -o ../eseguibili/%s", x , x);
	
	fclose(fd);
	
	return 0;
}


int github(int a)
{
	FILE *fd;
	char x[1000];
	 
	fd=fopen("scelta.sh", "w");
	if (fd==NULL){
		perror("Errore in apertura del file");
		exit(1);
	}
	
	fprintf(fd, "#!/bin/bash\nfirefox https://github.com/LePanzetteOfficial", x);
	
	fclose(fd);
	
	return 0;
}

int gmailprincipale(int a)
{
	FILE *fd;
	char x[1000];
	 
	fd=fopen("scelta.sh", "w");
	if (fd==NULL){
		perror("Errore in apertura del file");
		exit(1);
	}
	
	fprintf(fd, "#!/bin/bash\nfirefox https://mail.google.com/mail/u/1/#inbox", x);
	
	fclose(fd);
	
	return 0;
}

int gmailscuola(int a)
{
	FILE *fd;
	char x[1000];
	 
	fd=fopen("scelta.sh", "w");
	if (fd==NULL){
		perror("Errore in apertura del file");
		exit(1);
	}
	
	fprintf(fd, "#!/bin/bash\nfirefox https://mail.google.com/mail/u/0/#inbox", x);
	
	fclose(fd);
	
	return 0;
}

int gmailpanzette(int a)
{
	FILE *fd;
	char x[1000];
	 
	fd=fopen("scelta.sh", "w");
	if (fd==NULL){
		perror("Errore in apertura del file");
		exit(1);
	}
	
	fprintf(fd, "#!/bin/bash\nfirefox https://mail.google.com/mail/u/2/#inbox", x);
	
	fclose(fd);
	
	return 0;
}

int vaiaeseguibili(int a)
{
	FILE *fd;
	char x[1000];
	 
	fd=fopen("scelta.sh", "w");
	if (fd==NULL){
		perror("Errore in apertura del file");
		exit(1);
	}
	
	fprintf(fd, "#!/bin/bash\ncd ../Desktop/programmi/eseguibili\nls\nsleep 5", x);
	
	fclose(fd);
	
	return 0;
}

int vaiacodici(int a)
{
	FILE *fd;
	char x[1000];
	 
	fd=fopen("scelta.sh", "w");
	if (fd==NULL){
		perror("Errore in apertura del file");
		exit(1);
	}

	fprintf(fd, "#!/bin/bash\ncd ../Desktop/programmi/codici_sorgente\nls\nsleep 5", x);
	
	fclose(fd);
	
	return 0;
}

int creaprogrammajava(int a)
{
	FILE *fd;
	char x[1000];
	 
	fd=fopen("scelta.sh", "w");
	if (fd==NULL){
		perror("Errore in apertura del file");
		exit(1);
	}
	
	printf("\nInserisci il nome del file: ");
	fflush(stdin);
	scanf("%s", x);
	
	fprintf(fd, "#!/bin/bash\ncd ../Desktop/programmi/java\nsudo gedit %s.java", x);
	
	fclose(fd);
	
	return 0;
}

int compilajava(int a)
{
	FILE *fd;
	char x[1000];
	 
	fd=fopen("scelta.sh", "w");
	if (fd==NULL){
		perror("Errore in apertura del file");
		exit(1);
	}
	
	printf("\nInserisci il nome del file: ");
	fflush(stdin);
	scanf("%s", x);
	
	fprintf(fd, "#!/bin/bash\ncd ../Desktop/programmi/java\njavac %s.java", x , x);
	
	fclose(fd);
	
	return 0;
}

int vaiajava(int a)
{
	FILE *fd;
	char x[1000];
	 
	fd=fopen("scelta.sh", "w");
	if (fd==NULL){
		perror("Errore in apertura del file");
		exit(1);
	}

	fprintf(fd, "#!/bin/bash\ncd ../Desktop/programmi/java\nls\nsleep 5", x);
	
	fclose(fd);
	
	return 0;
}

