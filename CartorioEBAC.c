#include <stdio.h> //Biblioteca de comunicação com o usuário
#include <stdlib.h> //bibilioteca de alocação de espaço em memória
#include <locale.h> //biblioteca de alocações de texto por região
#include <string.h>//biblioteca responsável para cuidar das strings

int registro()
{
	char arquivo[40];
	char cpf[40];
	char nome [40];
	char sobrenome [40];
	char cargo [40];
	
	printf ("digite o CPF a ser cadastrado: ");
	scanf("%s" , cpf);
	
	strcpy(arquivo, cpf); //responsável por copiar os valores das strings
	
	FILE *file; // cria o arquivo
	file = fopen(arquivo, "w"); // cria o arquivo
	fprintf(file,cpf); //salva o valor da variável
	fclose(file); //fecha o arquivo
	
	file = fopen(arquivo, "a");
	fprintf(file, ",");
	fclose(file);
	
	printf("Digite o nome a ser cadastrado: ");
	scanf("%s", nome);
	
	file = fopen(arquivo, "a");
	fprintf(file,nome);
	fclose(file);
	
	file = fopen(arquivo, "a");
	fprintf(file, ",");
	fclose(file);
	
	printf ("Digite o sobrenome a ser cadastrado: ");
	scanf("%s", sobrenome);
	
	file = fopen(arquivo, "a");
	fprintf(file,sobrenome);
	fclose(file);
	
	file = fopen(arquivo, "a");
	fprintf(file, ",");
	fclose(file);
	
	printf("Dgite o cargo a ser cadastrado: ");
	scanf("%s", cargo);
	file = fopen(arquivo, "a");
	fprintf(file,cargo);
	fclose(file);
	
	system("pause");


}

int consulta()
{
		{
		setlocale (LC_ALL, "Portuguese"); //definição de linguagem
		
		char cpf[40];
		char conteudo[200];
		
		printf("Digite o CPF a ser consultado: ");
		scanf("%S" ,cpf);
		
		FILE *file;
		file = fopen(cpf,"r");
		
		if(file == NULL)
		
		{
			printf("Não foi possivel abrir o arquivo, não localizado. \n");
		}
		
		while(fgets(conteudo, 200, file) != NULL)
	{
		printf("\nEssas são as informações do usuário: ");
		printf("%s", conteudo);
		printf("\n\n");
		}
		
		system ("pause");
	
	
		}
	
}

int deletar()
{
		printf ("Você escolheu a opção deletar os nomes\n");
		system("pause");
}

int main()
{
	int opcao=0;
	int x=1;
	
	for(x=1;x=1;)
	{
	
	system("cls");
	
 	setlocale (LC_ALL, "Portuguese"); //definição de linguagem
	
	printf ("### Cartório da EBAC### \n\n"); //inicio do menu
	printf ("Escolha a opção desejada do menu \n\n");
	printf ("\t1 - Registrar nomes \n");
	printf ("\t2 - Consultar nomes \n");
	printf ("\t3 - Deletar nomes \n\n"); 
	printf ("\t4 - sair do sistema \n\n");
	printf ("Opção:");
	
	scanf ("%d", &opcao); //armazenando a escolha do usuario
	
	system ("cls");
	
	switch(opcao)
	{
		case 1:
			registro();
		break;
		
		case 2:
			consulta();
	     
		break;
		
			case 3:
			deletar();
		break;
		
		case 4:
			printf("Obrigado por usar o sistema");
			return 0;
			break;

		

		
		default:
				printf ("Essa opção não está disponível\n"); //fim da seleção
    	system("pause");
    	break;
	}
	

}
}
