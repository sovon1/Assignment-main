
//this code took me 40 min,what the hell i am actually doing
#include <stdio.h>

int main() {
    int n;
    int num=0;
printf("Enter any numbers : ");
scanf("%d",&n);
   //reversing numbr 
    while (n != 0) {
        num =(num*10) + n % 10;
        n = n / 10;
    }
    //reverse korar pore etar modulus e amar first number 
    while (num!=0)
    {
        switch (num%10)
        {
        case 1:
            printf("one ");
            break;
            case 2:
            printf("two ");
            break;
            case 3:
            printf("three ");
            break;
            case 4:
            printf("four ");
            break;
            case 5:
            printf("five ");
            break;
            case 6:
            printf("six ");
            break;
            case 7:
            printf("seven ");
            break;
            case 8:
            printf("eight ");
            break;
            case 9:
            printf("nine ");
            break;
            
        
        default: 
        printf("zero");
            break;
        }
        num/=10;//reducing reversed number








    }
    

    return 0;
}








/*#include<stdio.h>
int main()
{
   int n,num,lastdigit
   char arr[10]={zero,one,two,three,four,five,six,seven,eight,nine};

   printf("Enter numbers to print it in words : ");
   scanf("%d",&num);

       n=num;
       while(n!=0)
       {
          n%10=lastdigit;
          printf("%s ",arr[lastdigit]);
          n = n/10;


       }





    return 0;
}
*/