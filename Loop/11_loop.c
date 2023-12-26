 #include<stdio.h>
 #include<math.h>
  int main()
{

int n,count =0;
scanf("%d",&n);

int lastdigit = n%10;
int firstdigit = n ;

while(firstdigit>=10)
{

firstdigit=firstdigit/10;


}
printf("The first digit is %d\n and the lastdigit is %d",firstdigit,lastdigit);


return 0;

}