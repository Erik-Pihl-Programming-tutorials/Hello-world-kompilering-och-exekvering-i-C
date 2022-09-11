/********************************************************************************
* main.c: Demonstration av ingående argument till ett C-projekt.
*         Funktionen main har ingående argument argc samt argv, där argc
*         (argument counter) indikerar hur många argument som passerades, 
*         medan argv (argument vector) utgör en vektor/lista med argumenten
*         i form av text.
*
*         För att kompilera programmet med GCC-kompilatorn och skapa en körbar
*         fil döpt main, skriv följande kommando:
*         $ gcc main.c -o main -Wall
*
*         För att köra programmet, skriv följande kommando:
*         $ ./main (i Linux)
*         $ main (i Windows)
*
*         För att passera parametrar till programmet, såsom för- och efternamn 
*         nedan, skriv dessa parametrar efter körkommandot med ett blanksteg
*         mellan varje argument, exempelvis
*         $ ./main Kalle Anka 88 (i Linux)
*         $ main Kalle Anka 88 (i Windows)
********************************************************************************/

/* Inkluderingsdirektiv: */
#include <stdio.h>

/********************************************************************************
* main: Skriver ut angivet namn och ålder via inlästa argument 1 - 3. Totalt
*       skall fyra argument läsas in, då körkommandot alltid kommer, så har
*       körkommandot, förnamnet, efternamnet och åldern. Om detta sker
*       korrekt så returneras heltal 0, vilket indikerar att programmet
*       exekverade som det skulle. Annars om fler eller färre argument har 
*       matats in skriver ut ett felmeddelande och och returnerar felkod 1 
*       för att indikera fel.
********************************************************************************/
int main(const int argc,
         const char** argv)
{
   if (argc == 4)
   {
      printf("Name: %s %s\n", argv[1], argv[2]);
      printf("Age: %s\n", argv[3]);
      return 0;
   }
   else
   {
      printf("Invalid number of input arguments!\n\n");
      return 1;
   }
}