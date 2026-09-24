#include <stdio.h>

int main ()
{
    // VARIABLE DECLRATION 
    
    int num1, num2, num3, num4;
    
    // TAKING INPUT FROM USER
    
    printf("Enter the first number for comparision\n : ");
    scanf("%d", &num1);
     printf("Enter the second number for comparision\n : ");
     scanf("%d", &num2);
     printf("Enter the third number for comparision\n : ");
     scanf("%d", &num3);
    printf("Enter the fourth number for comparision\n : ");
    scanf("%d", &num4);
     

    // NOW WE WILL START LOOPING

  if (num1>num2 && num1>num3 && num1>num4)
  {
      printf(" The first number entered is the greatest ");
  }
    else if (num2>num1 && num2>num3 && num2>num4)
    {
        printf(" The second number entered is greatest ");
            
        }
    else if (num3>num1 && num3>num2 && num3> num4)
    {
        printf(" The third number entered is the greatest ");
    }    
else  
    {
        printf(" The fourth number entered is the greatest" );
        
    }

    return 0;
}