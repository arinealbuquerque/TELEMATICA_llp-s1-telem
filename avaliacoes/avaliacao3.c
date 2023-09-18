#include <stdio.h>

struct dados {
  int idade;
  char nome[50];
  char endereco[50];
  char telefone[50];
};

int main() {
  struct dados pessoa;
  FILE *arquivo;

  arquivo = fopen("arquivo.txt", "wb"); 

  if (arquivo == NULL) {
    printf("Erro ao abrir arquivo\n");
    return 1;
  }

  printf("Idade: ");
  scanf("%d", &pessoa.idade);

  printf("Nome: ");
  scanf("%s", pessoa.nome);

  printf("Endereço: ");
  scanf("%s", pessoa.endereco);

  printf("Telefone: ");
  scanf("%s", pessoa.telefone);

  fwrite(&pessoa, sizeof(struct dados), 1, arquivo);

  fclose(arquivo);

  return 0;
}