#include <stdio.h>

int main() {
    int a[10][10], b[10][10], result[10][10];
    int r1, c1, r2, c2;
    int i, j, k;
    int choice;

    printf("===== MATRIX CALCULATOR =====\n");

    printf("Enter  rows and columns size of Matrix A:");
    scanf("%d %d", &r1, &c1);

    printf("Enter rows and columns size of Matrix B: ");
    scanf("%d %d", &r2, &c2);

    printf("\nEnter ur %d values of Matrix A:\n",r1*c1);
    for(i = 0; i < r1; i++) 
    {
        for(j = 0; j < c1; j++)
         {
            scanf("%d", &a[i][j]);
        }
    }

    printf("\nEnter ur %d values of Matrix B:\n",r2*c2);
    for(i = 0; i < r2; i++) 
    {
        for(j = 0; j < c2; j++)
         {
            scanf("%d", &b[i][j]);
        }
    }

    printf("\n===== MENU =====\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Transpose of A\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    // ADDITION
    if(choice == 1) 
    {
        if(r1 == r2 && c1 == c2)
         {
            for(i = 0; i < r1; i++)
             {
                for(j = 0; j < c1; j++)
                 {
                    result[i][j] = a[i][j] + b[i][j];
                }
            }

            printf("\nResult (Addition):\n");
            for(i = 0; i < r1; i++) 
            {
                for(j = 0; j < c1; j++) 
                {
                    printf("%d ", result[i][j]);
                }
                printf("\n");
            }
        } else 
        {
            printf("Addition not possible (dimension mismatch)\n");
        }
    }

    // SUBTRACTION
    else if(choice == 2) 
    {
        if(r1 == r2 && c1 == c2)
         {
            for(i = 0; i < r1; i++) 
            {
                for(j = 0; j < c1; j++)
                 {
                    result[i][j] = a[i][j] - b[i][j];
                }
            }

            printf("\nResult (Subtraction):\n");
            for(i = 0; i < r1; i++)
             {
                for(j = 0; j < c1; j++) 
                {
                    printf("%d ", result[i][j]);
                }
                printf("\n");
            }
        } else 
        {
            printf("Subtraction not possible (dimension mismatch)\n");
        }
    }

    // MULTIPLICATION
    else if(choice == 3)
     {
        if(c1 == r2)
         {
            for(i = 0; i < r1; i++)
             {
                for(j = 0; j < c2; j++)
                 {
                    result[i][j] = 0;
                    for(k = 0; k < c1; k++)
                     {
                        result[i][j] += a[i][k] * b[k][j];
                    }
                }
            }

            printf("\nResult (Multiplication):\n");
            for(i = 0; i < r1; i++) 
            {
                for(j = 0; j < c2; j++)
                 {
                    printf("%d ", result[i][j]);
                }
                printf("\n");
            }
        } else 
        {
            printf("Multiplication not possible (invalid dimensions)\n");
        }
    }

    // TRANSPOSE
    else if(choice == 4)
     {
        printf("\nTranspose of Matrix A:\n");
        for(i = 0; i < c1; i++)
         {
            for(j = 0; j < r1; j++) 
            {
                printf("%d ", a[j][i]);
            }
            printf("\n");
        }
    }

    else 
    {
        printf("Invalid choice!\n");
    }

    return 0;
}
