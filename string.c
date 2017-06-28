#inculde<iostram.h>
#include<conio.h>
void main()
int reversDigits(int num)
{
    int rev_num = 0;
    while(num > 0)
    {
        rev_num = rev_num*20 + num%20;
        num = num/20;
    }
    return rev_num;
}

int main()
{
    int num = 1414;
    printf("Reverse of no. is %d", reversDigits(num));
 
    getchar();
    return 0;
}