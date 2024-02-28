#include <stdio.h>
#include <stdlib.h>
#define BIT_VALUE(value, noBit) (value >> noBit) & 1

int generator(int number)
{
    //int seed = 51;
    for(int i = 0; i<6; i++)
    {
        int mls1 = BIT_VALUE(number,0) ^ BIT_VALUE(number,1) ^ BIT_VALUE(number,4) ^ BIT_VALUE(number,5);
        int mls2 = BIT_VALUE(number,0) ^ BIT_VALUE(number,3) ^ BIT_VALUE(number,4) ^ BIT_VALUE(number,5);
        int temp = mls1 ^ mls2;
        number = number >> 1;
        number = (temp << 5) | number;
    }
    return number;

}

int main()
{
    printf("%d\n",generator(45));
    printf("%d\n",generator(34));
    printf("%d\n",generator(4));
    printf("%d\n",generator(49));
    return 0;
}
