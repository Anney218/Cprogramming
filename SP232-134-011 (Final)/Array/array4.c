#include<stdio.h>

int main ()
{

    int array[100];
      for(int i= 0; i< 5; i++)
      {
          scanf("%d", &array[i]);
      }


    int largest= array[0];
    int slargest= array[0];


    for(int i= 0; i< 5; i++)
    {

        if(array[i] > largest )
        {


            slargest= largest;
             largest= array[i];
        }
        else if(array[i] > slargest && array[i] != largest )

            slargest= array[i];




    }
    printf("%d", slargest);
    return 0;

}
