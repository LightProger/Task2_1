#include <stdio.h>

/*
 *  Упражнение 2.2. Напишите цикл, эквивалентный приведенному выше for-циклу, не пользуясь операторами && и ||.
    Цикл, о котором идет речь, выглядит так:
    for (i = 0; i < lim-1 && (с = getchar()) != EOF && с != '\n'; ++i)
      s[i] = c;
*/

int main()
{
     int c, i, j;
     int lim = 25;
     int s[lim];
    
     i = 0;
     while(i < lim - 1)
     {
         c = getchar();
         if(c == '\n') break;
         else if(c == EOF) break;
         else  s[i] = c;
        i++;
     }

    for(j = 0; j < i; j++)
	{
	  printf("%c", s[j]);
	}
    printf("\n");
  return 0;
}


