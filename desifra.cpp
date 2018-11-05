#include <stdio.h>

int main()
{
    FILE *f, *g;
    f=fopen("sifrovanytext.txt","r");
    g=fopen("odsifrovanytext.txt","w");

    if (f==NULL)
    {
        printf("I cannot open the file!");
        return 1;
    }

    if (g==NULL)
    {
        printf("I cannot open the file!");
        return 1;
    }


    char z;

    while ( (z=fgetc(f)) != EOF)
    {
        if (z>='a' && z<='w')
        {
            z+=3;
        }
        else if (z=='x')
            z='a';
        else if (z=='y')
            z='b';
        else if (z=='z')
            z='c';

        if (z>='1' && z<='9')
            z-=1;
        else if (z=='0')
            z='9';
		
		if (z>='A' && z<='W')
        {
            z+=3;
        }
        else if (z=='X')
            z='A';
        else if (z=='Y')
            z='B';
        else if (z=='Z')
            z='C';
        
        fputc(z, g);
    }



    fclose(f);
    fclose(g);
}
