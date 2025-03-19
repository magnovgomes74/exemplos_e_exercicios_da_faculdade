#include <stdio.h>

int main() {

    // Vetores e Matriz.

    int index;

    char * nomesalunos[3][3] = {

        {"Aluno 0", "Pt: 30", "Mat: 90"},
        {"Aluno 1", "Pt: 60", "Mat: 60"},
        {"Aluno 2", "Pt: 90", "Mat: 30"}
 
    };
    
    printf("Insira um número do aluno que queira ver as notas:");
    printf("\nPara o aluno 0, digite 0\n");
    printf("Para o aluno 1, digite 1\n");
    printf("Para o aluno 2, digite 2\n");
    
    scanf("\n%d", &index);

    printf("A nota do %s é: %s , %s... \n", nomesalunos[index][0], nomesalunos[index][1], nomesalunos[index][2]);

    printf("\n\n");

    return 0;

}