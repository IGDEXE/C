// Trabalhando com arquivos
// Biblioteca
#include <stdio.h>
// Funcao principal
int main(int argc, char *argv[])
{
  // Recebe os arquivos
  FILE *file = fopen("file.txt", "r");
  char buffer[255];
  // Carrega os valores
  while (fgets(buffer, 255, file))
  {
    printf("%s\n", buffer);
  }
  fclose(file);
  // Salva no arquivo
  FILE *filePointer = fopen("new_file.txt", "w+");
  fputs("Lorem impsum", filePointer);
  fclose(filePointer);
  return 0;
}
