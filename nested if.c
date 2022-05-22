#include<stdio.h>
#include<conio.h>
int main ()
{
  int N;
  printf("Enter the value of N:");
  scanf("%d",&N);

  if(N>0)
  {
      printf("Positive Number");
}      else if (N%2==0)
      {
          printf("The number is EVEN");
      }

      else
      {
          printf("The number is ODD");
      }
  }


  else(N<0)
  {
      printf("Negative Numbet");

      else if (N%2==0)
      {
          printf("The number is EVEN");
      }
      else
      {
          printf("The number is ODD");
      }
  }
    return 0;

}
