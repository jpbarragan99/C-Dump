#include <stdio.h>
#include <windows.h>
int main(){

 

int in1= 0, ires= 0;

 

    printf("Ingresa un numero por favor: \n");
    scanf("%d", &in1);

    for(int i=in1; i >= 0; i--){
         printf("%i \n", i);                    
    }
    
    
    for(int i= 1; i<= 10; i++){
          ires = in1 * i;
        printf("%i X %i = %i\n",in1,i,ires);
    }
    
    
    int i= 0;
    while( i <= 10){
           printf("%i \n", i);
           i++;
    }
    
    do{
      printf("%i \n", i);
      i++;   
    }while(i<=100);
    
     Sleep(100000);
     return 0;
}
