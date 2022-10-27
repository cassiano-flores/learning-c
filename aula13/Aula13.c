#include <stdio.h>

//aula para trabalhar com arquivos, abrir, carregar, editar

int main() {

    FILE *ptr;   //ponteiro para arquivo
    char frase[100];

    ptr = fopen("primeiro.txt", "w");  //fopen é uma função para abrir arquivos e retorna o endereço (file open)
                                         //primeiro parâmetro é o nome do arquivo, o segundo é o modo (o que irá fazer com o arquivo)
                                         //modo "w" cria um novo arquivo (apaga se já existir) (write)
                                         //modo "a" mantém o que já tinha no arquivo e escreve a mais (adicionar, apend)

    if (ptr != NULL) { //se tiver arquivo

        fprintf(ptr, "Hello World!");   //escreve no arquivo, f de file, e o resto é igual
        fprintf(ptr, "\nTestando novamente");   //primeiro parâmetro o ponteiro que está o arquivo, e o segundo o texto
        fprintf(stdout, "Feito"); // equivalente a  printf("Feito");

        fseek(ptr, 0, 0);   //1= endereço do arquivo, 2= offset (quanto o ponteiro irá andar), 3= origem (a partir de onde o ponteiro irá andar)
        
        fclose(ptr);  //fecha o ponteiro (igual sc.close())

    } else {
        printf("Problemas ao abrir o arquivo!");
    }

    ptr = fopen("segundo.txt", "r");   //modo "r" lê um arquivo já existente (read) (se não existir, o ptr será nulo)

    if (ptr != NULL) {

        fscanf(ptr, "%s", frase);  //lê o que tem em "ptr", do tipo "%s", e ESCREVE em "frase" (array de char), (apenas 1 palavra)
        puts(frase);

        fgets(frase, 100, ptr);  //fgets é igual fscanf, só que lê o "enter" também (frase inteira)
        puts(frase);

        fclose(ptr);

    } else {
        printf("Problemas ao abrir o arquivo!");
    }
    
    return 0;
}
