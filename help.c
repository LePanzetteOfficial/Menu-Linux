#include <stdio.h>
#include <stdlib.h>

int createsto(int a);
int creaprogramma(int a);
int compila(int a);
int github(int a);
int gmailprincipale(int a);
int gmailscuola(int a);
int gmailpanzette(int a);
int main(void)
{
	int scelta;
	
	printf("COMANDI ESEGUIBILI:\n");
	printf("1. Crea un file di testo\n");
	printf("2. Crea un file sorgente per un programma\n");
	printf("3. Compila programma\n");
	printf("4. vai su GitHub\n");
	printf("5. Vai nella mail principale\n");
	printf("6. Vai nella mail di scuola\n");
	printf("7. Vai nella mail delle panzette\n\n");
	printf("Che comando vuoi eseguire?: ");
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
	
	fprintf(fd, "#!/bin/bash\ncd ../Desktop/Testo\ncat > file-nuovo.txt", x);
	
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
	
	fprintf(fd, "#!/bin/bash\ncd ../Desktop/programmi/codici_sorgente\nsudo gedit nuovo-file.c", x);
	
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
	
	fprintf(fd, "#!/bin/bash\ncd ../Desktop/programmi/codici_sorgente\ngcc nuovo-file.c -o ../eseguibili/cambia-nome", x);
	
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



