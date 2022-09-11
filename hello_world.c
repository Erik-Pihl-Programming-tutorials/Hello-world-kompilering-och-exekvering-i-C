/********************************************************************************
* hello_world.c: Demonstration av Hello world i C.
* 
*                main utg�r ett exempel p� en funktion, ett sammansatt kodblock.
*                main m�ste finnas med i alla C-program, d� det utg�r 
*                programmets startpunkt.
* 
*                En funktion har f�ljande syntax i C:
*                returtyp namn(funktionsparametrar)
* 
*                Returtypen indikerar vad f�r typ av data som returneras 
*                (skickas tillbaka) n�r funktionen avslutas. Det kan vara 
*                heltal, flyttal, text, sant eller falskt eller inget alls.
*                Funktionen main innehar returtypen int, vilket st�r f�r 
*                integer (heltal). Datatypen int indikerar att funktionen main 
*                returnerar ett heltal n�r denna funktion avslutas. Detta heltal 
*                som returneras indikerar ifall programexekveringen (k�rningen 
*                av programmet) gick bra eller inte. Heltalet 0 indikerar att 
*                programexekveringen gick bra, annars returneras felkod 1. 
*                N�r main avslutas s� termineras (avslutas) hela programmet.
*                Via returv�rdet fr�n main kan �tg�rdes vidtas om n�got gick
*                fel, d� returv�rdet returneras till operativsystemet.
* 
*                I parentesen efter funktionens namn deklareras eventuella 
*                funktionsparametrar, vilket m�jligg�r att data kan skickas
*                mellan funktioner, exempelvis heltal, text eller inget alls. 
*                F�r funktionen main skrivs normalt void (tomhet) eller s� �r 
*                parentesen tom, vilket indikerar att inga parametrar passeras 
*                n�r main anropas. Vid behov kan parametrar skickas med till
*                main i form av text fr�n en terminal.
* 
*                M�svingar anv�nds f�r att markera funktionens b�rjan och slut,
*                d�r { = b�rjan och } = slut. M�svingar ocks� f�r villkorssatser, 
*                struktar, enumerationer, arrayer och dylikt som innehar flera 
*                element. M�svingar anv�nds i m�nga spr�k, s�som C++, Java, C#, 
*                Rust med mera. I vissa andra spr�k anv�nds nyckelord s�som
*                begin och end eller indentering (indrag).
* 
*                N�r programmet startar s� utf�rs den f�rsta instruktionen i main.
*                I detta fall har vi instruerat v�r maskin till att skriva ut
*                "Hello world!" i terminalen. Det sker genom att vi anropar en
*                funktion d�pt printf (print format), som �r deklarerad i ett
*                av C:s standardbibliotek d�pt stdio.h, vilket st�r f�r 
*                C Standard Input and Output Library.
*
*                Textstycket "Hello world!\n" passeras till funktionen printf 
*                f�r att skriva ut detta. \n utg�r ett s� kallad nyradstecken, 
*                som medf�r att eventuell n�sta utskrift hamnar p� n�sta rad.
* 
*                F�r att inkludera bibliotek anv�nds direktivet #include.
*                Runt biblioteket skrivs <> om det �r ett standardbibliotek,
*                runt egna headerfiler skrivs "", exempelvis 
*                #include <stdio.h> f�r standardbiblioteket stdio.h
*                #include "header.h" f�r egen headerfil header.h
* 
*               Semikolon anv�nds f�r att avsluta instruktioner, p� samma s�tt
*               som att meningar avslutas med punkt. Via semikolon f�r
*               kompilatorn information av var en given instruktion slutar; den
*               l�ses inneh�llet fram tills semikolonet, utf�r denna instruktion
*               och hoppar sedan till n�sta.
* 
*               Nyckelordet return anv�nds f�r att skicka tillbaka data. 
*               Sedan C99 beh�ver man inte skriva return 0 just f�r funktionen 
*               main, det sker som default (automatiskt).
********************************************************************************/

/* Inkluderingsdirektiv: */
#include <stdio.h> /* Inkluderar bibliotek f�r inmatning och utskrift. */

/********************************************************************************
* main: Utg�r programmets startpunkt, vilket g�ller i alla C-program samt
*       m�nga andra spr�k s�som C++, Java, C# och Rust. 
*       I detta fall skrivs "Hello world!" ut i terminalen.
********************************************************************************/
int main(void)
{
   printf("Hello world!\n");
   return 0;
}