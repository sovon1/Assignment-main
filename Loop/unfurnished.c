//printing frequency pf 
 #include<stdio.h>
 #include<math.h>
  int main()
{

int n;
printf("Enter any numbers : ");
scanf("%d",&n);
int frequency[10] = {0};
while(n!=0)
{
int lastdigit=n%10;
frequency[lastdigit]++;
n=n/10;

}
for(i=0;
printf("%d occurs %d times : ",);

return 0;
}