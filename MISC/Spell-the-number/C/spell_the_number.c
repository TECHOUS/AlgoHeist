/*
 *  SPELL THE NUMBER
 *  999999 = nine lakhs ninty nine thousand nine hundred ninty nine
 */
#include <stdio.h>
void intToWord(int num)
{
    char a[20][50]={"zero","one","two","three","four","five","six","seven","eight","nine","ten","eleven","twelve","thirteen","fourteen","fifteen","sixteen","seventeen","eighteen","nineteen"};
    char b[8][50]={"twenty","thirty","forty","fifty","sixty","seventy","eighty","ninety"};
    char c[3][50]={"hundred","thousand","lakhs"};
    if(num>=0 && num<20)  //one digit
    {
        printf("%s",a[num]);
    }
    else if(num>19 && num<=99) //two digit
    {
        if(num%10==0)  //20 30 40 50 60
        {
            num=num/10;
            printf("%s",b[num-2]);
        }
        else    //34 45  56 67
        {
            int d = num/10;
            printf("%s",b[d-2]);
            printf(" ");
            intToWord(num%10);
        }
    }
    else if(num>99 && num<=999) //three digit
    {
        if(num%100==0)  //100 200 300 400
        {
            intToWord(num/100);
            printf(" ");
            printf("%s",c[0]);
        }
        else    //111 222 333 444
        {
            intToWord(num/100);
            printf(" ");
            printf("%s",c[0]);
            printf(" ");
            intToWord(num%100);
        }
    }
    else if(num>999 && num<=9999) //4 digit
    {
        if(num%1000==0)     //1000 2000 3000 4000
        {
            intToWord(num/1000);
            printf(" ");
            printf("%s",c[1]);
        }
        else            //1111 2222 3333 4444
        {
            intToWord(num/1000);
            printf(" ");
            printf("%s",c[1]);
            printf(" ");
            intToWord(num%1000);
        }
    }
    else if(num>9999 && num<=99999) //5 digit
    {
        if(num%10000==0) // 10000, 20000, 30000, 40000
        {
            intToWord(num/1000);
            printf(" ");
            printf("%s",c[1]);
        }
        else if(num%1000==0) //32000 ,34000 ,45000
        {
            intToWord(num/1000);
            printf(" ");
            printf("%s",c[1]);
        }
        else        //12300 ,12340, 12345,
        {
            intToWord(num/1000);
            printf(" ");
            printf("%s",c[1]);
            printf(" ");
            intToWord(num%1000);
        }
    }
    else if(num>99999 && num<=999999)
    {
        if(num%100000==0) //100000 ,200000, 30000
        {
            intToWord(num/100000);
            printf(" ");
            printf("%s",c[2]);
        }   
        else if(num%10000==0)   //120000 ,230000, 450000
        {
            intToWord(num/10000);
            printf(" ");
            printf("%s",c[2]);
        }
        else    //123000 ,123400 ,123450 ,123456
        {
            intToWord(num/100000);
            printf(" ");
            printf("%s",c[2]);
            printf(" ");
            intToWord(num%100000);
        }
    }
}
int main()
{
    intToWord(999999);
    printf("\n");
}