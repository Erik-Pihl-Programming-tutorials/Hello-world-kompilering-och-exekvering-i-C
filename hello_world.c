/********************************************************************************
* hello_world.c: Demonstration av Hello world i C.
* 
*                main utgör ett exempel på en funktion, ett sammansatt kodblock.
*                main måste finnas med i alla C-program, då det utgör 
*                programmets startpunkt.
* 
*                En funktion har följande syntax i C:
*                returtyp namn(funktionsparametrar)
* 
*                Returtypen indikerar vad för typ av data som returneras 
*                (skickas tillbaka) när funktionen avslutas. Det kan vara 
*                heltal, flyttal, text, sant eller falskt eller inget alls.
*                Funktionen main innehar returtypen int, vilket står för 
*                integer (heltal). Datatypen int indikerar att funktionen main 
*                returnerar ett heltal när denna funktion avslutas. Detta heltal 
*                som returneras indikerar ifall programexekveringen (körningen 
*                av programmet) gick bra eller inte. Heltalet 0 indikerar att 
*                programexekveringen gick bra, annars returneras felkod 1. 
*                När main avslutas så termineras (avslutas) hela programmet.
*                Via returvärdet från main kan åtgärdes vidtas om något gick
*                fel, då returvärdet returneras till operativsystemet.
* 
*                I parentesen efter funktionens namn deklareras eventuella 
*                funktionsparametrar, vilket möjliggör att data kan skickas
*                mellan funktioner, exempelvis heltal, text eller inget alls. 
*                För funktionen main skrivs normalt void (tomhet) eller så är 
*                parentesen tom, vilket indikerar att inga parametrar passeras 
*                när main anropas. Vid behov kan parametrar skickas med till
*                main i form av text från en terminal.
* 
*                Måsvingar används för att markera funktionens början och slut,
*                där { = början och } = slut. Måsvingar också för villkorssatser, 
*                struktar, enumerationer, arrayer och dylikt som innehar flera 
*                element. Måsvingar används i många språk, såsom C++, Java, C#, 
*                Rust med mera. I vissa andra språk används nyckelord såsom
*                begin och end eller indentering (indrag).
* 
*                När programmet startar så utförs den första instruktionen i main.
*                I detta fall har vi instruerat vår maskin till att skriva ut
*                "Hello world!" i terminalen. Det sker genom att vi anropar en
*                funktion döpt printf (print format), som är deklarerad i ett
*                av C:s standardbibliotek döpt stdio.h, vilket står för 
*                C Standard Input and Output Library.
*
*                Textstycket "Hello world!\n" passeras till funktionen printf 
*                för att skriva ut detta. \n utgör ett så kallad nyradstecken, 
*                som medför att eventuell nästa utskrift hamnar på nästa rad.
* 
*                För att inkludera bibliotek används direktivet #include.
*                Runt biblioteket skrivs <> om det är ett standardbibliotek,
*                runt egna headerfiler skrivs "", exempelvis 
*                #include <stdio.h> för standardbiblioteket stdio.h
*                #include "header.h" för egen headerfil header.h
* 
*               Semikolon används för att avsluta instruktioner, på samma sätt
*               som att meningar avslutas med punkt. Via semikolon får
*               kompilatorn information av var en given instruktion slutar; den
*               läses innehållet fram tills semikolonet, utför denna instruktion
*               och hoppar sedan till nästa.
* 
*               Nyckelordet return används för att skicka tillbaka data. 
*               Sedan C99 behöver man inte skriva return 0 just för funktionen 
*               main, det sker som default (automatiskt).
********************************************************************************/

/* Inkluderingsdirektiv: */
#include <stdio.h> /* Inkluderar bibliotek för inmatning och utskrift. */

/********************************************************************************
* main: Utgör programmets startpunkt, vilket gäller i alla C-program samt
*       många andra språk såsom C++, Java, C# och Rust. 
*       I detta fall skrivs "Hello world!" ut i terminalen.
********************************************************************************/
int main(void)
{
   printf("Hello world!\n");
   return 0;
}