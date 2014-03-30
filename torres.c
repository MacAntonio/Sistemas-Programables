#include <stdio.h>

int main() {
int n;
printf("¿Cuantos discos tiene la torre?: ");
scanf("%d",&n);
while(n<0){
printf("Incorrecto. Por favor establece un numero: ");
scanf("%d",&n);
    }
    
    
moverTorres(n,"Primera Torre","Segunda Torre","Tercera Torre");

return 0;
}

int moverTorres(n, origen, aux, fin) {
if (n == 0) return;
         moverTorres(n-1, origen, fin , aux);

         printf("Mover disco %d de %s a %s\n",n,origen,fin);
moverTorres(n-1, aux, origen, fin);

return 0;
}
