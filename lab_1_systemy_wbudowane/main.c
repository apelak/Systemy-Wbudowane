#include <stdio.h>
#include <stdlib.h>
void delay()
{
    int a,b;
    for(a=0; a<=14748636; a++)
    {
        for(b=0; b<=512;b++)
        {

        }
    }
}
int IntToGray(char input)
{
    return(input >> 1) ^ input;
}
int main()
{
    int number = 5;
    int counter = 0;

    #define BIT_VALUE(value, noBit) (value >> noBit) & 1
    while(counter<=number)
    {
        printf("\r");
        for(int i = 7; i >= 0;i--)
        {
            printf("%d",BIT_VALUE(counter,i));
        }
        printf("     ");
        for(int i = 7; i >= 0;i--)
        {
            printf("%d",BIT_VALUE(IntToGray(counter),i));
        }
        counter++;
        delay();
    }
    return 0;
}
