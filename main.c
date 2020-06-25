#include <stdio.h>
int main()
{
    int sum=0,checksum=0,s1,s2,d1,d2;
    int row1a=0x4500,row1b=0x001C,row2a=0x0001,row2b=0x0000,row3a=0x0411,row3b=0x0000;
    int constant=row1a+row1b+row2a+row2b+row3a+row3b;
    printf("Enter first half source IP address\n");
    scanf("%x",&s1);
    printf("Enter second half source IP address\n");
    scanf("%x",&s2);


    printf("Enter first destination IP address\n");
    scanf("%x",&d1);
     printf("Enter second destination IP address\n");
    scanf("%x",&d2);

    printf("Sum is %x",s1+s2+d1+d2+constant);


}









