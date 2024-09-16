#include<math.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

// create enum for flavors
enum flavors {vanilla, chocolate, eMint, strawberry};

int main()
{
    // declare 1-D arrays to hold entered sales data
    float corner1Sales[4];
    float corner2Sales[4];

    // user inputs type of ice cream using fgets
    char van [9];
    printf("Enter ice cream flavor #1:\n");
    fgets(van, 9, stdin); // (var, size+2, stdin)

    char choc [11];
    printf("Enter ice cream flavor #2:\n");
    fgets(choc, 11, stdin);

    char mint[6];
    printf("Enter ice cream flavor #3:\n");
    fgets(mint, 6, stdin);

    char strawb[12];
    printf("Enter ice cream flavor #4:\n");
    fgets(strawb, 12, stdin);
    printf("\n"); // print a blank line

    // user inputs corner1Sales for each flavor using scanf 
    printf("Enter corner 1 sales of vanilla:\n");
    scanf("%f", &corner1Sales[vanilla]); // index w/ enum vars in arrays
    
    printf("Enter corner 1 sales of chocolate:\n");
    scanf("%f", &corner1Sales[chocolate]);

    printf("Enter corner 1 sales of mint:\n");
    scanf("%f", &corner1Sales[eMint]);

    printf("Enter corner 1 sales of strawberry:\n");
    scanf("%f", &corner1Sales[strawberry]);
    printf("\n");

    // user inputs corner2Sales for each flavor using scanf
    printf("Enter corner 2 sales of vanilla:\n");
    scanf("%f", &corner2Sales[vanilla]); // index w/ enum vars in arrays

    printf("Enter corner 2 sales of chocolate:\n");
    scanf("%f", &corner2Sales[chocolate]);

    printf("Enter corner 2 sales of mint:\n");
    scanf("%f", &corner2Sales[eMint]);

    printf("Enter corner 2 sales of strawberry:\n");
    scanf("%f", &corner2Sales[strawberry]);   
    printf("\n");

    // sum of flavor sales from both corners/arrays
    float totalVan = corner1Sales[vanilla] + corner2Sales[vanilla];
    float totalChoc = corner1Sales[chocolate] + corner2Sales[chocolate];
    float totalMint = corner1Sales[eMint] + corner2Sales[eMint];
    float totalStrawb = corner1Sales[strawberry] + corner2Sales[strawberry];

    // total sales for each flavor printed out
    printf("Total vanilla sales: %.2f\n", totalVan);
    printf("Total chocolate sales: %.2f\n", totalChoc);
    printf("Total mint sales: %.2f\n", totalMint);
    printf("Total strawberry sales: %.2f\n", totalStrawb);
    printf("\n");

    // print out Bob's total sales
    float total = totalVan + totalChoc + totalMint + totalStrawb;
    printf("Bob's Ice Cream total sales: %.2f\n", total);

    return(0);
}