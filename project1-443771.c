/*--------------------------------------\
|   Programming-I Project Assignment-I  |
|   Pattern Printing With Loops         |
|   Project Start Date: 29/11/2025      |
|   Project Completion: 12/12/2025      |
\______________________________________*/

#include <stdio.h>

int main(void)
{
    int killSwitch = 1;
    int killSwitch_defaultYes;
    char choice;
    char defaultYes;
    char patterns[575] = "\n  1        2          3          4  \n*            *        *        *\n**          **      * * *      **\n***        ***    * * * * *    ***\n****      ****                 ****\n*****    *****                 *****\n                               ****\n                               ***\n                               **\n                               *\n\n    5         6        7         8  \n    *         *****    *****   *****\n  * * *      *****    *   *    *   *\n* * * * *   *****    *   *     *   *\n  * * *    *****    *   *      *   *\n    *     *****    *****       *****\n";
    // It might look like a total mess of a chunk in the code but it looks cool in the terminal as a CATALOG.

    printf("Welcome, would you like to draw a pattern? (Y/N): ");

    do
    {
        scanf("%c", &choice);
        switch (choice)
        {   
            case 'Y': 
                printf("\nSure thing, please choose a pattern from the catalog below:\n%s", patterns);
                printf("\nPlease type in the number of the pattern you choosed: ");
                int choice2Y;
                scanf("%d", &choice2Y);
                switch(choice2Y)
                {
                    case 1:
                        printf("\nPlease enter your desired width value for the chosen pattern: ");                   
                        int w1;
                        scanf("%d", &w1);
                        puts("");
                    
                        for(int a = 0; a < w1; a++) 
                        {
                            for(int b = 0; b <= a; b++) 
                            {
                                printf("*");
                            }
                        
                            puts("");
                        }
                    
                        puts("");
                        printf("Done. Would you like to make another selection? (Y/N): ");
                    break;

                    case 2:
                        printf("\nPlease enter your desired width value for the chosen pattern: ");
                        int w2;
                        scanf("%d", &w2);        
                        puts("");
                        
                            for(int a = 0; a < w2; a++)
                            {
                                for(int b = 0; b < (w2 - a) - 1; b++)
                                {
                                    printf(" ");
                                }
                            
                                for(int c = 0; c <= a; c++)
                                {
                                    printf("*");
                                }
                            
                                puts("");
                            }

                        puts("");
                        printf("Done. Would you like to make another selection? (Y/N): ");
                    break;

                    case 3:
                        printf("\nPlease enter your desired width value for the chosen pattern: ");
                        int w3x;
                        scanf("%d", &w3x);
                        int w3 = w3x - ((w3x + 1) / 2);
                        puts("");

                            for(int a = 0; a <= w3; a++)
                            {
                                for(int b = 0; b <= 2 * (w3 - a) - 1; b++)
                                {
                                    printf(" ");
                                }

                                for(int c = 0; c < 2 * a + 1; c++)
                                {
                                    printf("* ");
                                }
                            
                                puts("");
                            }
                    
                        puts("");
                        printf("Done. Would you like to make another selection? (Y/N): ");                
                    break;

                    case 4:
                        printf("\nPlease enter your desired width value for the chosen pattern: ");
                        int w4;
                        scanf("%d", &w4);
                        puts("");

                            for(int a = 0; a < (w4 - 1); a++)
                            {
                                for(int b = 0; b <= a; b++)
                                {
                                    printf("*");
                                }

                                puts("");
                            }

                            for(int a = (w4 - 1); a >= 0; a--)
                            {
                                for(int b = 0; b <= a; b++)
                                {
                                    printf("*");
                                }

                                puts("");
                            }

                        puts("");
                        printf("Done. Would you like to make another selection? (Y/N): ");
                    break;

                    case 5:
                        printf("\nPlease enter your desired width value for the chosen pattern: ");
                        int w5x;
                        scanf("%d", &w5x);
                        int w5 = w5x - ((w5x + 1) / 2);
                        puts("");

                            for(int a = 0; a <= w5; a++)
                            {
                                for(int b = 0; b <= 2 * (w5 - a) - 1; b++)
                                {
                                    printf(" ");
                                }

                                for(int c = 0; c < 2 * a + 1; c++)
                                {
                                    printf("* ");
                                }
                            
                                puts("");
                            }

                            for(int a = (w5 - 1); a >= 0; a--)
                            {
                                for(int b = 0; b <= 2 * (w5 - a) - 1; b++)
                                {
                                    printf(" ");
                                }

                                for(int c = 0; c < 2 * a + 1; c++)
                                {
                                    printf("* ");
                                }
                            
                                puts("");
                            }
                    
                        puts("");
                        printf("Done. Would you like to make another selection? (Y/N): ");
                    break;

                    case 6:
                        printf("\nPlease enter your desired width value for the chosen pattern: ");
                        int w6;
                        scanf("%d", &w6);
                        puts("");

                            for(int a = 0; a < w6; a++)
                            {
                                for(int b = 0; b < (w6 - (a + 1)); b++)
                                {
                                    printf(" ");
                                }
                            
                                for(int c = 0; c < w6; c++)
                                {
                                    printf("*");
                                }
                            
                                puts("");
                            }
                        puts("");
                        printf("Done. Would you like to make another selection? (Y/N): ");
                    break;

                    case 7:
                        printf("\nPlease enter your desired width value for the chosen pattern: ");
                        int w7;
                        scanf("%d", &w7);
                        puts("");

                            for(int a = 0; a < w7; a++)
                            {
                                for(int b = 0; b < (w7 - (a + 1)); b++)
                                {
                                    printf(" ");
                                }
                            
                                for(int c = 0; c < w7; c++)
                                {
                                    if(a > 0 && a < (w7 - 1) && c > 0 && c < (w7 - 1))
                                    {
                                        printf(" ");
                                    }
                                    else
                                    {
                                        printf("*");
                                    }
                                }
                            
                                puts("");
                            }
                        puts("");
                        printf("Done. Would you like to make another selection? (Y/N): ");
                    break;

                    case 8:
                        printf("\nPlease enter your desired width value for the chosen pattern: ");
                        int w8;
                        scanf("%d", &w8);
                        puts("");

                            for(int a = 0; a < w8; a++)
                            {
                                for(int c = 0; c < w8; c++)
                                {
                                    if(a > 0 && a < (w8 - 1) && c > 0 && c < (w8 - 1))
                                    {
                                        printf(" ");
                                    }
                                    else
                                    {
                                        printf("*");
                                    }
                                }
                            
                                puts("");
                            }
                        puts("");
                        printf("Done. Would you like to make another selection? (Y/N): ");
                    break;

                    default:
                        printf("\nPlease only type one of the previously stated options! Now, would you like to try again? (Y/N): ");
                        do
                        {
                            scanf("%c", &defaultYes);
                            switch(defaultYes)
                            {
                                case 'Y':
                                    killSwitch_defaultYes = 0;
                                break;

                                case 'y':
                                    killSwitch_defaultYes = 0;
                                break;

                                case 'N':
                                    printf("\nAs you wish.\n");
                                    killSwitch_defaultYes = 0;
                                    killSwitch = 0;
                                break;

                                case 'n':
                                    printf("\nAs you wish.\n");
                                    killSwitch_defaultYes = 0;
                                    killSwitch = 0;
                                break;

                                default:
                                    killSwitch_defaultYes = 1;
                                break;
                            }   
                        } 
                        while(killSwitch_defaultYes);    
                    break;
                }
                break;

            case 'y': 
                printf("\nSure thing, please select one of the pattern types:\n%s", patterns);
                printf("\nPlease type the number of the pattern you would like to draw: ");
            
                int choice2y;
                scanf("%d", &choice2y);
                switch (choice2y)
                {
                    case 1:
                        printf("\nPlease enter your desired width value for the chosen pattern: ");
                        int w1;
                        scanf("%d", &w1);
                        puts("");
                    
                            for(int a = 0; a < w1; a++) 
                            {
                                for(int b = 0; b <= a; b++) 
                                {
                                    printf("*");
                                }
                        
                                puts("");
                            }
                    
                        puts("");
                        printf("Done. Would you like to make another selection? (Y/N): ");
                    break;

                    case 2:
                        printf("\nPlease enter your desired width value for the chosen pattern: ");
                        int w2;
                        scanf("%d", &w2);        
                        puts("");
                        
                            for(int a = 0; a < w2; a++)
                            {
                                for(int b = 0; b < (w2 - a) - 1; b++)
                                {
                                    printf(" ");
                                }
                                
                                for(int c = 0; c <= a; c++)
                                {
                                    printf("*");
                                }
                            
                                puts("");
                            }

                        puts("");
                        printf("Done. Would you like to make another selection? (Y/N): ");
                    break;

                    case 3:
                        printf("\nPlease enter your desired width value for the chosen pattern: ");
                        int w3x;
                        scanf("%d", &w3x);
                        int w3 = w3x - ((w3x + 1) / 2);
                        puts("");

                            for(int a = 0; a <= w3; a++)
                            {
                                for(int b = 0; b <= 2 * (w3 - a) - 1; b++)
                                {
                                    printf(" ");
                                }

                                for(int c = 0; c < 2 * a + 1; c++)
                                {
                                    printf("* ");
                                }
                                
                                puts("");
                            }
                            
                        puts("");
                        printf("Done. Would you like to make another selection? (Y/N): ");                
                    break;

                    case 4:
                        printf("\nPlease enter your desired width value for the chosen pattern: ");
                        int w4;
                        scanf("%d", &w4);
                        puts("");

                            for(int a = 0; a < (w4 - 1); a++)
                            {
                                for(int b = 0; b <= a; b++)
                                {
                                    printf("*");
                                }

                                puts("");
                            }

                            for(int a = (w4 - 1); a >= 0; a--)
                            {
                                for(int b = 0; b <= a; b++)
                                {
                                    printf("*");
                                }

                                puts("");
                            }

                        puts("");
                        printf("Done. Would you like to make another selection? (Y/N): ");
                    break;

                    case 5:
                        printf("\nPlease enter your desired width value for the chosen pattern: ");
                        int w5x;
                        scanf("%d", &w5x);
                        int w5 = w5x - ((w5x + 1) / 2);
                        puts("");

                            for(int a = 0; a <= w5; a++)
                            {
                                for(int b = 0; b <= 2 * (w5 - a) - 1; b++)
                                {
                                    printf(" ");
                                }

                                for(int c = 0; c < 2 * a + 1; c++)
                                {
                                    printf("* ");
                                }
                            
                                puts("");
                            }

                            for(int a = (w5 - 1); a >= 0; a--)
                            {
                                for(int b = 0; b <= 2 * (w5 - a) - 1; b++)
                                {
                                    printf(" ");
                                }

                                for(int c = 0; c < 2 * a + 1; c++)
                                {
                                    printf("* ");
                                }
                                
                                puts("");
                            }
                            
                        puts("");
                        printf("Done. Would you like to make another selection? (Y/N): ");
                    break;

                    case 6:
                        printf("\nPlease enter your desired width value for the chosen pattern: ");
                        int w6;
                        scanf("%d", &w6);
                        puts("");

                            for(int a = 0; a < w6; a++)
                            {
                                for(int b = 0; b < (w6 - (a + 1)); b++)
                                {
                                    printf(" ");
                                }
                            
                                for(int c = 0; c < w6; c++)
                                {
                                    printf("*");
                                }
                                
                                puts("");
                            }
                        puts("");
                        printf("Done. Would you like to make another selection? (Y/N): ");
                    break;

                    case 7:
                        printf("\nPlease enter your desired width value for the chosen pattern: ");
                        int w7;
                        scanf("%d", &w7);
                        puts("");

                            for(int a = 0; a < w7; a++)
                            {
                                for(int b = 0; b < (w7 - (a + 1)); b++)
                                {
                                    printf(" ");
                                }
                                
                                for(int c = 0; c < w7; c++)
                                {
                                    if(a > 0 && a < (w7 - 1) && c > 0 && c < (w7 - 1))
                                    {
                                        printf(" ");
                                    }
                                    else
                                    {
                                        printf("*");
                                    }
                                }
                            
                                puts("");
                            }
                        puts("");
                        printf("Done. Would you like to make another selection? (Y/N): ");
                    break;

                    case 8:
                        printf("\nPlease enter your desired width value for the chosen pattern: ");
                        int w8;
                        scanf("%d", &w8);
                        puts("");

                            for(int a = 0; a < w8; a++)
                            {
                                for(int c = 0; c < w8; c++)
                                {
                                    if(a > 0 && a < (w8 - 1) && c > 0 && c < (w8 - 1))
                                    {
                                        printf(" ");
                                    }
                                    else
                                    {
                                        printf("*");
                                    }
                                }
                                
                                puts("");
                            }
                        puts("");
                        printf("Done. Would you like to make another selection? (Y/N): ");                
                    break;

                    default:
                        printf("\nPlease only type one of the previously stated options! Now, would you like to try again? (Y/N): ");
                        do
                        {
                            scanf("%c", &defaultYes);
                            switch(defaultYes)
                            {
                                case 'Y':
                                    killSwitch_defaultYes = 0;
                                break;

                                case 'y':
                                    killSwitch_defaultYes = 0;
                                break;

                                case 'N':
                                    printf("\nAs you wish.\n");
                                    killSwitch_defaultYes = 0;
                                    killSwitch = 0;
                                break;

                                case 'n':
                                    printf("\nAs you wish.\n");
                                    killSwitch_defaultYes = 0;
                                    killSwitch = 0;
                                break;

                                default:
                                    killSwitch_defaultYes = 1;
                                break;
                            }   
                        } 
                        while(killSwitch_defaultYes);    
                    break;
                }
                break;

            case 'N': 
                puts("\nAs you wish.");
                killSwitch = 0;
            break;
                
            case 'n': 
                puts("\nAs you wish.");
                killSwitch = 0;
            break;

            default:
                killSwitch = 1;
            break;
        }

    } 
    while(killSwitch);

    printf("Have a nice day!\n\n");

return 0;
}