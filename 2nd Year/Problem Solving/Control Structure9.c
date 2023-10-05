/*There are some rules set for the Electricity Bill generation in our State. 
Please check these rules and calculate the Electicity bill with the given unit of consumption: 
1.Unit consumption upto 200 - Zero charges, 
2. Unit consumption from 201 to 400 - 6 Rs per unit, 
3. Unit consumption from 401 to 600 - 7 Rs per unit, 
4. Unit consumption from 601 & above - 8 Rs per unit.
 Apart from this a fixed charge of Rs. 220 is charged with every bill. 
 There is an extra charge of electricity duty @5% for the entire bill. 
 Given the number of units of consumption, calculate the total bill.  */
#include <stdio.h>

int main()
{
    int unit;
    printf("Enter total units: ");
    scanf("%d",&unit);
    int fc = 220,tc;
    if (unit<201)
    {
        printf("%d",fc);
    }
    else if (unit<401)
    {
        printf("%d",unit*6+fc);
    }
    else if (unit<601)
    {
        printf("%d",unit*7+fc);
    }
    else
    {
        printf("%d",unit*8+fc);
    }
    return 0;
}
