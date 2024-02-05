#include <stdio.h>
void sort(int number[],int n)
{
     for (int i = 0; i < n; i++) 
        {
 
            for (int j = i + 1; j < n; j++)
            {
 
                if (number[i] > number[j]) 
                {
 
                    int temp =  number[i];
                    number[i] = number[j];
                    number[j] = temp;
 
                }
 
            }
 
        }
 
}
void print(int number[],int n)
{
           printf("The numbers arranged in ascending order are given below \n");
        for (int i = 0; i < n; ++i)
            printf("%d\n", number[i]);
}
    int main()
    {
 
        int i, j, a,p, n, number[30];
        printf("Enter the number of elements\n");
        scanf("%d", &n);
 
        printf("Enter the numbers \n");
        for (i = 0; i < n; ++i)
            scanf("%d", &number[i]);
           
           for ( p=0;p<n;p++) 
           {printf("The number enterd at %d :",p);
           printf("%d\n",number[p]);
           }
           
         sort(number,n);
 
  print(number,n);
 return 0;
    }