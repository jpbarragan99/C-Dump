//SUMA DE MATRICES DE N x N 2
#include<stdio.h> 
#define n 2 
 //VARIABLES 
int A[n][n];
int B[n][n];
int i,j;
int main(){

//LECTURA MATRIZ A 
printf("Ingresa Datos Matriz A");
 for(i=0;i<n;i++){ 
 for(j=0;j<n;j++){ 
printf("\nValor en Pos %d,%d:",i+1,j+1); 
 scanf("%d",&A[i][j]); 
} 
} 

 printf("Ingresa Datos Matriz B"); 
 //LECTURA MATRIZ B 
 for(i=0;i<n;i++){ 
 for(j=0;j<n;j++){ 
printf("\nValor en Pos: %d,%d:",i+1,j+1); 
 scanf("%d",&B[i][j]); 
//SUMA 
 B[i][j]=B[i][j]+A[i][j]; 
 } 
} 

 printf("MATRIZ RESULTANTE\n"); 
 //MOSTRAR MATRIZ RESULTADO 
 for(i=0;i<n;i++){ 
 for(j=0;j<n;j++){ 
 printf("Resultado Posicion %d,%d=",i+1,j+1); 
 printf("%d\n",B[i][j]); 
 } 
} 
printf("\n");

}
int main (void){
 
int i, j, num[R][C], matriz[R][C], pivote, pivant = 1, iteracion = 0;
 //Lectura
for(i=0;i<R;i++){
for(j=0;j<C - 1;j++){
printf("Los valores de la matriz [%d,%d]= ",i + 1, j + 1);
scanf("%d",&matriz[i][j]);
}printf("HOLI MAESTRA ");
scanf("%d",&matriz[i][j]);
 }
 
while(iteracion < R) {
pivote = matriz[iteracion][iteracion];
for(i=0;i<C;i++) {
num[iteracion][i] = matriz[iteracion][i];
 }
for(i=0;i<R;i++) {
if(iteracion != i) {
 num[i][iteracion] = 0;
}
           
}
for(i=0;i<R;i++){
 for(j=0;j<C;j++){
if(i != iteracion) {
 if( j!= iteracion) {
                  num[i][j] = (((matriz[i][j] * pivote) - (matriz[iteracion][j] * matriz[i][iteracion])) / pivant);
                }
             }
          }
       }
 
       iteracion++;
       pivant = pivote;
       for(i=0;i<R;i++) {
          for(j=0;j<C;j++) {
              matriz[i][j] = num[i][j];
         
          }
       }
  }
  printf("\n\n\n\n");  
  for(i=0;i<R;i++){
     printf("\t\t");
     for(j=0;j<C - 1;j++){
        printf("\t%d",matriz[i][j]);
     }
     printf("\t= %d\n", matriz[i][j]);
  }
  return 0;
}
