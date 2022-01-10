#include <stdio.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main()
{
typedef struct{
char login[20];
char senha[20];
}pessoa; pessoa p[1];


   setlocale(LC_ALL, "Portuguese");

    char login[20];
    char senha[20];

    strcpy(p[0].login, "UNIP");
    strcpy(p[0].senha, "2021");

    printf("\n******************************************************************************************************************\n");
    printf("\t \t \t \t \t Controle de Pacientes com Covid 19 \t \t \t \t \t");
    printf("\n******************************************************************************************************************\n");


    printf(" Login: ");
    scanf("%s", login);
    printf(" Senha: ");
    scanf("%s", senha);

    if ((strcmp(login,p[0].login) == 0) && (strcmp(senha,p[0].senha) == 0)){
    printf(" Usuario logado \n \n \n");
    } else
    {
    printf(" Login e/ou Senha incorretos");
    getchar();
    exit(0);
   }

    char nome[20], nascimento[20], rua[30], numero[10], bairro[30], cidade[20], estado[10], msg[20], cpf[20], fone[20], email[30],cep[30] ;
    int  dia, mes, ano, d, m, a, idade, s, n, anos, comorbidade, comorbidades;

{
         system("cls");
         printf("\n------------------------------------------------------------------------------------------------------------------------\n");
         printf("\t \t \t \t \t Inicialize o Cadastro do Paciente \t \t \t \t \t");
         printf("\n------------------------------------------------------------------------------------------------------------------------\n");

       printf(" Nome do Paciente: ");
       fflush(stdin);
       gets(nome);

       printf(" CPF: " );
       fflush(stdin);
       gets(cpf);

       printf(" Telefone: ");
       fflush(stdin);
       gets(fone);

       printf(" email: ");
       fflush(stdin);
       gets(email);

         system("cls");
        printf("\n------------------------------------------------------------------------------------------------------------------------\n");
        printf("\t \t \t \t \t Inicialize o Cadastro do Paciente \t \t \t \t \t");
        printf("\n------------------------------------------------------------------------------------------------------------------------\n");

       printf(" Endereco Rua: ");
       fflush(stdin);
       gets(rua);

       printf(" Numero: ");
       fflush(stdin);
       gets(numero);

       printf(" Bairro: ");
       fflush(stdin);
       gets(bairro);

       printf(" Cidade: ");
       fflush(stdin);
       gets(cidade);

       printf(" Estado: ");
       fflush(stdin);
       gets(estado);

       printf(" CEP: ");
       fflush(stdin);
       gets(cep);


         typedef struct{
    int dia;
    int mes;
    int ano;
    } rgdata;

    rgdata entrada ( char msg[]){
    rgdata, dt;
    printf("%s(dd/mm/aaaa):", msg);
    scanf("%d/%d/%d", &dt.dia, &dt.mes, &dt.ano);
    return(dt);
    }

    int calcularidade (rgdata nasc, rgdata hoje){
    int idade;

       idade = hoje.ano - nasc.ano;
    if((hoje.mes < nasc.mes) || ((hoje.mes == nasc.mes) && (hoje.dia < nasc.dia)))
       idade = idade - 1;

    return(idade);
    }

    rgdata nasc, hoje;

    nasc = entrada(" Data de Nascimento ");
    system("cls");
    hoje = entrada(" Data do Diagnostico ");
    printf("\n");

        printf(" idade %d anos. \n", calcularidade(nasc, hoje));

        printf(" O paciente possui comorbidade ? \n");

       printf(" (1)sim ou (2)nao: ");
       fflush(stdin);
        scanf("%d", &comorbidade);

        if (comorbidade == 1 )
        {
    printf(" Possui Comorbidade! \n\n");

    printf(" Quais Comorbidades: \n");

    printf(" [1] = Diabetes \n");
    printf(" [2] = Obsidade \n");
    printf(" [3] = Hipertensao \n");
    printf(" [4] = Tuberculose \n");
    printf(" [5] = Cardiaco \n");
    printf(" [6] = Renal \n");
    printf(" [7] = HIV \n");
    printf(" [8] = Cirrose Hepatica \n");
    printf(" [9] = Cancer \n");
    printf(" [10] = Outros \n");

    printf(" Insira a Opcao: ");
    fflush(stdin);
       scanf("%d", &comorbidades);

    int op; 1, 2, 3, 4, 5, 7, 8, 9, 10;

    switch (op) {

       case 1:
       printf(" Diabetes \n");
       break;
       case 2:
       printf(" Obsidade \n");
       break;
       case 3:
       printf(" Hipertensao \n");
       break;
       case 4:
       printf(" Tuberculose \n");
       break;
       case 5:
       printf(" Cardiaco \n");
       break;
       case 6:
       printf(" Renal \n");
       break;
       case 7:
       printf(" HIV \n");
       break;
       case 8:
       printf(" Cirrose Hepatica \n");
       break;
       case 9:
       printf(" Cancer \n");
       break;
       case 10:
       printf(" Outros \n");
       break;
       default:
        printf(" Opcao Invalida! \n  ");

    }


         FILE *Ponteiro1;
         Ponteiro1 = fopen("arquivo2.txt", "a");
          if(Ponteiro1 == NULL)
          {
              printf(" Erro na abertura do arquivo!");
              return 1;
          }
          else
            {
                fprintf(Ponteiro1, " Idade: %d \n\n", calcularidade(nasc, hoje));
      fprintf(Ponteiro1, " Cep: %s \n\n", cep);

}
          fclose(Ponteiro1);
          printf(" O arquivo foi criado e gravado com sucesso!\n");
    }
    else
        {

    printf(" Nao possui Comorbidade! \n ");
    printf(" O Paciente nao pertence ao grupo de risco \n");
    }

        FILE *Ponteiro;
         Ponteiro = fopen("arquivo1.txt", "a");
          if(Ponteiro == NULL)
          {
              printf(" Erro na abertura do arquivo!");
              return 1;
          }
          else
            {

      fprintf(Ponteiro, " Nome: %s \n\n", nome);
      fprintf(Ponteiro, " Data de Nascimento: %s", msg);
      fprintf(Ponteiro, " CPF: %s \n\n", cpf);
      fprintf(Ponteiro, " Telefone: %s \n\n", fone);
      fprintf(Ponteiro, " Email: %s \n\n", email);
      fprintf(Ponteiro, " Rua: %s \n\n", rua);
      fprintf(Ponteiro, " Numero: %s \n\n", numero);
      fprintf(Ponteiro, " Bairro: %s \n\n", bairro);
      fprintf(Ponteiro, " Cidade: %s \n\n", cidade);
      fprintf(Ponteiro, " Estado: %s \n\n", estado);
      fprintf(Ponteiro, " Cep: %s \n\n", cep);
      fprintf(Ponteiro, " Comorbidades: %s \n\n", comorbidades);

      fclose(Ponteiro);
                        printf("\n\n\n");

    if ((calcularidade(nasc, hoje) > 65) || (comorbidade == 1))
         {
         printf(" Paciente pertence ao grupo de risco! \n");
         }
       }

    printf("\n***********************************************************************************************************************\n");
    printf(" \t \t \t \t \t Cadastro concluido com exito! \t \t \t \t \t  ");
    printf("\n***********************************************************************************************************************\n");

            }

    return(0);
}

