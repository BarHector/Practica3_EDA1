#include <stdio.h>
#include <stdbool.h>

struct atletas{
    char nombre[20];
    char pais[20];
    int medallas[20];
}atle[20];

int main(){
    int i=1;
    int d=0;
    int k=0;
    bool cond= true;
    printf(" * REGISTRO DE ATLETAS *\n");
    
    for (i=1; cond==true; i++){
        printf("\tAtleta #%i\nIngresa el nombre:  ", i);
        gets(atle[i].nombre);
        fflush(stdin);
        printf("Ingresa su pais:  ");
        gets(atle[i].pais);
        fflush(stdin);
        printf("Ingresa su numero de medallas:  ");
        scanf("%i", &atle[i].medallas);   
        fflush(stdin);

        if(k != 0){
            if (*atle[k].medallas < *atle[i].medallas){
                k=0;
                k=i;            
            }
        }else{
            k= i;
        }

        fflush(stdin);
        printf("-------------------------------\n");
        printf("Presiona cualquier numero del 1 al 9 para continuar \n--------O presiona 0 para terminar--------\n");
        scanf("%i", &d);
        fflush(stdin);

        switch (d){
            case 0: cond = false;
                    break;        
            default: printf("\n");
                    break;
        }
            
        if (i==10){
            cond=false;
            printf("Solo se pueden agregar a 10 atletas\n");
        }        
    }    
    printf("El atleta mas destacado es: %s de %s con %i medallas\n", atle[k].nombre, atle[k].pais, *atle[k].medallas);
    
    return 0;
}