#include<stdio.h>
#include<string.h>
int main()
{
    int sel;
    printf("Hello You Want to See my friend list\n");
    printf("Which country friend want to see\n");
    printf("1.Afganstan\n2.Bangladesh\n3.China\n");
    printf("Select Country Name Serial : ");
    scanf("%d",&sel);
    // selection
    if (sel==1)
    {
        printf("Afganstan\n");
        // frined list 
        printf("Now you Can see my Afganstan friend list\n");
        printf("1.xyz\n2.xyz\n3.xyz\n");
    }
    else if(sel==2)
    {
        printf("Bangladesh\n");
        // frined list 
        printf("Now you Can see my Bangladesh friend list\n");
        printf("1.xyz\n2.xyz\n3.xyz\n");
    }
    else if(sel==3)
    {
        printf("china\n");
        // frined list 
        printf("Now you Can see my China friend list\n");
        printf("1.xyz\n2.xyz\n3.xyz\n");
    }
    else
    {
        printf("Please Select the country Serial\n");
    }
    printf("Thanks for visit my firend list");
    return 0;
}