#include <stdio.h>
#include <stdlib.h>

void mostrarArray(int*, int);

int main()
{
    /*
    int valor= 99;
    int* p;
    int q;

    p= &valor;
 */
    int variable[5]={5,9,7,8,1} ;
    int* puntero;

  //  puntero = &variable;    eficas
    puntero = variable;         // eficiente
   // puntero = &variable[0];    eficas

    int i;
    mostrarArray();


    /*
    printf("%d\n",puntero); //variable
    printf("%d\n",puntero[0]);  //variable[0]
    printf("%d\n",puntero[1]);  //variable[1]
    printf("%d\n",puntero[2]);  //variable[2]

    printf("\n\n");
    //
    printf("%d\n",*(puntero+0));  //variable[0]
    printf("%d\n",*(puntero+1));  //variable[1]
    printf("%d\n",*(puntero+2));  //variable[2]

    */
    printf("\n\n");

    return 0;

}
void mostrarArray(int*pArray, int tam)
{
    int i;
    for (i=0;i<tam;i++)
    {
    printf("%d \n",*(pArray+i));
    }
}

