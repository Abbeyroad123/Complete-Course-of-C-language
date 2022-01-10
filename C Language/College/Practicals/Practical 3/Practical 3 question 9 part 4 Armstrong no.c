#include<stdio.h>
#include<math.h>
int main()
{
    int num, temp, rem=0, sum=0, i;
    float cube;

    num = 1;
    temp = 1;
    for(i=1;i<=500;i++)
    {
        while(num!=0)
        {
            rem = num%10;
            cube = pow(rem,3); //or we can write (rem*rem*rem)
            sum = sum + cube;
            num = num/10;
        }   //HERE THE VALUE OF num = 0
        if(sum == temp)
            printf("%d\n",temp);

        //set default values to the variables
        rem = 0;
        sum = 0;
        cube = 0;
        //increment temp and num value according to i
        //for first loop i = 1
        temp = i+1;
        num = i+1;
    }
return 0;
}
