#include <stdio.h>
#include <string.h>

int main() {
   
   int i, j;
   char paises[][21] = {"Holanda","Canada","Inglaterra","Francia","Alemania",                          "India","Israel","Italia","Japon","Mexico","China",                            "Rusia","EU","Colombia","Kazajistan","Estonia","España",                       "Portugal","Eslovenia","Rumania","Noruega","Polonia"};
   char capitales[][21] = {"Ottawa","Londres","Paris","Berlin","Nueva_Delhi",                             "Jerusalen","Roma","Tokio","Ciudad_de_Mexico",                                 "Beijing","Moscu","Washington","Astana","Tallin",                              "Bogota"};
   char input[21];
   
   printf("Escribe un país o una capital: ");
   scanf("%s", input);
   
   //for(i = 0; i < sizeof(paises)/sizeof(paises[0]); i++) {
      
      for(j = 0; j < sizeof(paises)/sizeof(paises[0]); j++) {
         
         if(strcmp(input, paises[j]) == 0) {
            
            //
            printf("La capital de %s es %s", input);
         }
         else if(strcmp(input, capitales[j]) == 0) {
            
            printf("Esta es una capital");
         }
         else if(strcmp(input, paises[j]) == 1 && strcmp(input, capitales[j]) == 1) {
            
            printf("No existe ese pais o ciudad en la Tierra.Por favor, vete al pito\n");
         }
      }
   return 0;
}
