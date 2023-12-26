 #include<stdio.h>
 #include<math.h>
  int main()
{

int n;
printf("Enter any numbers : ");
scanf("%d",&n);

int lastdigit = n%10;
int firstdigit = n ;

while(firstdigit>=10)
{

firstdigit=firstdigit/10;


}
printf("The first digit is %d\n and the lastdigit is %d",firstdigit,lastdigit);

printf("\nThe sum of fist and last digit is %d",firstdigit+lastdigit);
return 0;

}