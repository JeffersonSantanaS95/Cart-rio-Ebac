#include <stdio.h> //Biblioteca de comunica��o com o usu�rio
#include <stdlib.h> //bibilioteca de aloca��o de espa�o em mem�ria
#include <locale.h> //biblioteca de aloca��es de texto por regi�o
#include <string.h>//biblioteca respons�vel para cuidar das strings

int registro()
{
	char arquivo[40];
	char cpf[40];
	char nome [40];
	char sobrenome [40];
	char cargo [40];
	
	printf ("digite o CPF a ser cadastrado: ");
	scanf("%s" , cpf);
	
	strcpy(arquivo, cpf); //respons�vel por copiar os valores das strings
	
	FILE *file; // cria o arquivo
	file = fopen(arquivo, "w"); // cria o arquivo
	fprintf(file,cpf); //salva o valor da vari�vel
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
		setlocale (LC_ALL, "Portuguese"); //defini��o de linguagem
		
		char cpf[40];
		char conteudo[200];
		
		printf("Digite o CPF a ser consultado: ");
		scanf("%S" ,cpf);
		
		FILE *file;
		file = fopen(cpf,"r");
		
		if(file == NULL)
		
		{
			printf("N�o foi possivel abrir o arquivo, n�o localizado. \n");
		}
		
		while(fgets(conteudo, 200, file) != NULL)
	{
		printf("\nEssas s�o as informa��es do usu�rio: ");
		printf("%s", conteudo);
		printf("\n\n");
		}
		
		system ("pause");
	
	
		}
	
}

int deletar()
{
		printf ("Voc� escolheu a op��o deletar os nomes\n");
		system("pause");
}

int main()
{
	int opcao=0;
	int x=1;
	
	for(x=1;x=1;)
	{
	
	system("cls");
	
 	setlocale (LC_ALL, "Portuguese"); //defini��o de linguagem
	
	printf ("### Cart�rio da EBAC### \n\n"); //inicio do menu
	printf ("Escolha a op��o desejada do menu \n\n");
	printf ("\t1 - Registrar nomes \n");
	printf ("\t2 - Consultar nomes \n");
	printf ("\t3 - Deletar nomes \n\n"); 
	printf ("\t4 - sair do sistema \n\n");
	printf ("Op��o:");
	
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
				printf ("Essa op��o n�o est� dispon�vel\n"); //fim da sele��o
    	system("pause");
    	break;
	}
	

}
}
