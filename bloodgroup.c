#include <stdio.h>

#include <string.h>

void main()
{
 char Name[60], G[5], answer[50];

  int i;

  do
  {

<<<<<<< HEAD
    printf("WHAT is your Name? ");
=======
<<<<<<< HEAD
    printf("What is your name? wow");
=======
    printf("What is your name? huhh");
>>>>>>> f8e9fefded396bdae053f9bde88a760f03620f5b
>>>>>>> 896e8ce030b2619ec5dbfdbb5a8bbfe745163b2c

    scanf("%s", Name);

    do
    {

<<<<<<< HEAD
      printf("What is your blood group [A, B, AB, or O]? wow");
=======
      printf("What is your blood group [A, B, AB, or O]? huhh");
>>>>>>> f8e9fefded396bdae053f9bde88a760f03620f5b

      scanf("%s", G);


      if (strcmp(G, "A") !=0  &&

                            strcmp(G, "B") !=0  &&

                            strcmp(G, "AB") !=0   &&

                            strcmp(G, "O") !=0 )

        printf("Blood group %s is incorrect! Please try again.\n", G);

    }  while (strcmp(G, "A") !=0  &&

                            strcmp(G, "B") !=0  &&

                            strcmp(G, "AB") !=0   &&

                            strcmp(G, "O") !=0 );

    if (strcmp(G,"A") ==0)
    {

      printf("%s, A. Hey, you can give blood to: A, AB.\n", Name);

      printf("  You can receive blood from: A, O.\n");

    }
    else if (strcmp(G, "B") ==0)
    {

      printf("%s, B. Well, you can give blood to: B, AB.\n", Name);

      printf("  You can receive blood from: B, O.\n");

    }
    else if (strcmp(G, "AB") == 0)
    {

      printf("%s, AB. Oh my God, you can give blood only to: AB.\n", Name);

      printf("  Wow, you can receive blood from all: O, A, B, AB.\n");

    }
    else
    {

      printf("%s, O. Nice! You can give blood to all: O, A, B, AB\n", Name);

      printf("  But Sad! You can receive blood only from: O\n");

    }
    printf("\nContinue (YES for Yes)? ");

    scanf("%s", answer);

  } while (strcmp(answer, "YES") == 0);

  printf("Goodbye\n");
}
