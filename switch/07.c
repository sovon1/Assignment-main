//to find roots of a quandritic equation using switch

#include<stdio.h>
#include<math.h>


int main()
{
    float a, b, c, d;
    float root1, root2, imaginary;

    printf("Enter three values: ");
    scanf("%f%f%f", &a, &b, &c);

    d= b*b-4*a*c;

    switch(d>0)
    {
    case 1:
        root1 = (-b + sqrt(d)/ (2*a));
        root2 = (-b - sqrt(d) / (2*a));
        printf("%0.2f and %0.2f", root1, root2 );
        break;

    case 0:
        switch(d<0)
        {
        case 1:
            root1=root2= -b / (2*a);
            imaginary= sqrt(-d)/ (2*a);
            printf("Two distinct complex roots exists: %.2f + i%.2f and %.2f - i%.2f",
                   root1, imaginary, root2, imaginary);
            break;

        case 0:
            root1=root2= -b/(2*a);
            printf("Two equal and real root: %.2f and %.2f", root1, root2);
            break;
        }
    }
}
