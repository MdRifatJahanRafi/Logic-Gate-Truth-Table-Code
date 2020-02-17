#include<stdio.h>

int main()
{
    int n,x,y,z,select_gate,OR,AND,NOT,NOR,NAND;

    printf("Enter the number of variables:\nPress 1 for two variables\nPress 2 for three variables\n");
    scanf("%d",&n);

    if(n<2)
    {
        printf("Choice your operation:\n1. OR \n2. AND \n3. NOT \n4. NOR \n5. NAND \n");
        scanf("%d",&select_gate);

        switch(select_gate)
        {
        case 1:
        {
            printf("X Y OR\n");
            for(x=0;x<=1;x++)
            {
                for(y=0;y<=1;y++)
                {
                    OR=x|y;
                    printf("%d %d %d\n",x,y,OR);
                }
            }
            break;
        }
    case 2:
        {
            printf("X Y AND\n");
            for(x=0;x<=1;x++)
            {
                for(y=0;y<=1;y++)
                {
                    AND=x&&y;
                    printf("%d %d %d\n",x,y,AND);
                }
            }
            break;
        }
        case 3:
            {
                printf("X NOT\n");
                for(x=0;x<=1;x++)
                {
                    NOT=!x;
                    printf("%d %d\n",x,NOT);
                }
                break;
            }
        case 4:
        {
            printf("X Y NOR\n");
            for(x=0;x<=1;x++)
            {
                for(y=0;y<=1;y++)
                {
                    NOR=!(x||y);
                    printf("%d %d %d\n",x,y,NOR);
                }
            }
            break;
        }
        case 5:
        {
            printf("X Y NAND\n");
            for(x=0;x<=1;x++)
            {
                for(y=0;y<=1;y++)
                {
                    NAND=!(x&&y);
                    printf("%d %d %d\n",x,y,NAND);
                }
            }
            break;
        }
    default:
        {
            printf("Invalid Option Selected");
            break;
        }
    }
    }
    if(n>1)
    {
        printf("Choice your operation:\n1. OR \n2. AND \n3. NOT \n4. NOR \n5. NAND \n");
        scanf("%d",&select_gate);

        switch(select_gate)
        {
        case 1:
        {
            printf("X Y Z OR\n");
            for(x=0;x<=1;x++)
            {
                for(y=0;y<=1;y++)
                {
                    for(z=0;z<=1;z++)
                    {
                        OR=x|y|z;
                        printf("%d %d %d %d\n",x,y,z,OR);
                    }
                }
            }
            break;
        }
    case 2:
        {
            printf("X Y Z AND\n");
            for(x=0;x<=1;x++)
            {
                for(y=0;y<=1;y++)
                {
                    for(z=0;z<=1;z++)
                    {
                        AND=x&y&z;
                        printf("%d %d %d %d\n",x,y,z,AND);
                    }
                }
            }
            break;
        }
    case 3:
        {
            printf("X NOT\n");
            for(x=0;x<=1;x++)
                {
                    NOT=!x;
                    printf("%d %d\n",x,NOT);
                }

            break;
        }
        case 4:
        {
            printf("X Y Z NOR\n");
            for(x=0;x<=1;x++)
            {
                for(y=0;y<=1;y++)
                {
                    for(z=0;z<=1;z++)
                    {
                        NOR=!(x||y||z);
                        printf("%d %d %d %d\n",x,y,z,NOR);
                    }
                }
            }
            break;
        }
        case 5:
        {
            printf("X Y Z NAND\n");
            for(x=0;x<=1;x++)
            {
                for(y=0;y<=1;y++)
                {
                    for(z=0;z<=1;z++)
                    {
                        NAND=!(x&y&z);
                        printf("%d %d %d %d\n",x,y,z,NAND);
                    }
                }
            }
            break;
        }
    default:
        {
            printf("Invalid Option Selected");
            break;
        }
    }
    }
    getch();
}
