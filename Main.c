#include <stdio.h>
int a;

int main(){

    FILE *archivo=NULL;
    FILE *archivo2=NULL;

    archivo=fopen("vector.txt","r");
    archivo2=fopen("vector2.txt","w");
    
    if (archivo==NULL){
        printf("No se puede abrir el archivo");
        return -1;
    }
    
    while (!feof(archivo))
    {
        fscanf(archivo, "%d", &a);
        if ( a %5==0)
        {
            fprintf(archivo2," Es multiplo de 5: %d \n ",a);
        }
        else{
            fprintf(archivo2," %d \n",a);
        }

    }
    
    fclose(archivo);
    fclose(archivo2);

    return 0;
}
