#include <stdio.h>

int main()
{

    int stockLevels[5];
    for (int productID = 0; productID < 5; productID++)
    {
        stockLevels[productID] = 0;
    }

    int choice;
    do
    {
        printf("*** Simple Inventory System ***\n");
        printf("1. Add Stock (Product 0-4)\n");
        printf("2. Record Sale (Product 0-4)\n");
        printf("3. Display All Stock Levels\n");
        printf("4. Exit\n");
        printf("Your choice: ", choice);
        scanf("%d", &choice);

        int c;
        int q;
        switch (choice)
        {
        case 1:
            printf("Enter Product ID (0-4): \n");
            scanf("%d", &c);
            if (c < 0 || c > 4)
            {
                printf("Error: Invalid Product ID!\n");
                break;
            }
            else
            {
                printf("Enter quantity to add: \n");
                scanf("%d", &q);
                stockLevels[c] += q;
            }
            break;
        case 2:
            printf("Enter Product ID (0-4): \n");
            scanf("%d", &c);
            if (c < 0 || c > 4)
            {
                printf("Error: Invalid Product ID!\n");
                break;
            }
            else
            {
                printf("Enter quantity to sell: \n");
                scanf("%d", &q);
                if (q > stockLevels[c])
                {
                    printf("Insufficient stock!\n");
                }
                else
                {
                    stockLevels[c] -= q;
                }
            }
            break;
        case 3:
            printf("--- Current Stock Levels ---\n");
            for (int i = 0; i < 5; i++)
            {
                printf("Product [%d]: [%d] units\n", i, stockLevels[i]);
            }
            break;
        case 4:
            printf("Exiting system... Thank you!\n");
            break;
        default:
            printf("Invalid choice! Please try again.\n");
            break;
        }
    } while (choice != 4);

    return 0;
}