#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,k;
    for(i=0;i<=4;i++)
    {
        k=1;
        for(j=0;j<=7;j++)
        {
            if(j>=5-i && j<=3+i)
            {
                printf("%d",k); //printing the pattern
                j<4?k++:k--;   //printing the number
            }
            else{
                printf(" ");
                }
        }
            printf("\n");

    }
    return 0;
}

//OUTPUT
/*


    1
   121
  12321
 1234321

 
*/
