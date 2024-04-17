#include <stdio.h>
#include <stdlib.h>

// Declaração da estrutura do nó
struct no {
	struct no *prox;
	int info;
};
typedef struct no Lista;

void cria (Lista **Inicio, Lista **Fim)
{
	*Inicio=NULL;
	*Fim=NULL;
}

void Ins_Inicio (Lista **Inicio, Lista **Fim, int v)
{
	Lista * p = (Lista *) calloc(1, sizeof(Lista));
	p->info = v;
	p->prox = *Inicio;
	if ( *Inicio == NULL)
	    *Fim=p;
	*Inicio = p;
}

void Ins_Fim (Lista **Inicio, Lista **Fim,  int v)
{
	Lista *p = (Lista *)calloc(1, sizeof(Lista));
	p->info = v;
	p->prox = NULL;
	if (*Inicio==NULL)
	     *Inicio=p;
	else
	    (*Fim)->prox=p;
	
      *Fim = p;
}

void  Imprime (Lista  *Inicio)
{
  Lista *p;
 p = Inicio;
 while (p != NULL) 
  {
      printf ("%d - > ", p->info);
      p = p->prox;  
  }
printf ("NULL \n");
}

int Rem_Inicio (Lista **Inicio, Lista **Fim, int *v)
{
	Lista *p;
    if (*Inicio!=NULL)
	{
		p= *Inicio;
		*Inicio = p->prox;
		if (p == *Fim)
		      *Fim = NULL;
		*v=p->info;  
		free(p);
		return 1;
	}
	else return 0;
}

int Rem_Fim (Lista **inicio, Lista **fim, int *v)
{
	Lista *p, *q;
	if (*inicio!=NULL)
	{
		p=*fim;
		if (p==*inicio)
		{
		   *inicio=NULL;
		   *fim=NULL;
		}
        else
        {
           q=*inicio;
           while (q->prox!=p)
              q=q->prox;
           q->prox=NULL;
           *fim=q;
        }
        *v=p->info;
        free(p);
        return 1;
    }  
    else
        return 0;
}

Lista * consulta(Lista *Inicio, int val)
{
	Lista *p;
	p=Inicio;
	while ((p!=NULL) && (p->info != val))
		p=p->prox;
	return p;
}

void Trans_Inicio_Fim(Lista **Inicio, Lista **Fim, int val)
{
}
void Trans_Fim_Inicio(Lista **Inicio, Lista **Fim, int val)
{
}

main()
{
	
    Lista *Inicio, *Fim;
    int op, val;
    int y = 0, r, *v;
    v = &y;
	
	cria(&Inicio, &Fim);
	
	do
	{
		system("cls");
		puts("1 - Inserir no Inicio");
		puts("2 - Inserir no Fim");
		puts("3 - Imprimir a Lista");
		puts("4 - Remover no Inicio");
		puts("5 - Remover no Fim");
		puts("6 - Consultar");
		puts("7 - Transferir Inicio para o Fim");
		puts("8 - Transferir Fim para o Inicio");
		
		puts("0 - Sair do programa");
		
		printf("\nDigite a opcao: ");
		scanf("%d", &op);
		
		switch(op)
		{
			case 1: printf("\nDigite o valor: ");
			        scanf("%d", &val);
			        Ins_Inicio(&Inicio,&Fim, val);
			        break;
			        
			case 2: printf("\nDigite o valor: ");
			        scanf("%d", &val);
			        Ins_Fim(&Inicio,&Fim, val);
			        break;
			
			
			case 3: if (Inicio==NULL)
						printf("\nLista Vazia!");
					else
						Imprime(Inicio);
						
					system("Pause");
					break;
					
			case 4: if (Inicio==NULL)				
						printf("\nLista Vazia!");
					else
						r = Rem_Inicio(&Inicio, &Fim, v);
						if (r == 1)
	                       printf("\nValor Removido => %d\n", *v);
						
					system("Pause");
					break;
					
			case 5: if (Inicio==NULL)				
						printf("\nLista Vazia!");
					else
						r = Rem_Fim(&Inicio, &Fim, v);
						if (r == 1)
	                       printf("\nValor Removido => %d\n", *v);
						
					system("Pause");
					break;
			
			case 6: printf("\nDigite o valor: ");
			        scanf("%d", &val);
					Lista *C;
	                C = consulta(Inicio,val);
                    if ( C!=NULL )
                       printf("Valor Encontrado => %d\n", C->info );
                    else
	                   printf("NULL\n"); 
					system("Pause");
					break;
							
			case 7: if (Inicio==NULL)				
						printf("\nLista Vazia!");
					else {
					    printf("\nDigite o valor: ");
			            scanf("%d", &val);
					    Trans_Inicio_Fim(&Inicio, &Fim, val);
				    }
					system("Pause");
					break;
					
						
			case 8: if (Inicio==NULL)				
						printf("\nLista Vazia!");
					else {
					    printf("\nDigite o valor: ");
			            scanf("%d", &val);
  			            Trans_Fim_Inicio(&Inicio, &Fim, val);
  			        }
					system("Pause");
					break;
		}
	}while (op!=0);
}
