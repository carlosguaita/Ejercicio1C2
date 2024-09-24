#include <stdio.h>

int main (int argc, char *argv[]) {

    double num1, num2, sum, res, mul, div;
    int op1=0, op2=0;

    do{
    printf("Ingrese el num1: ");
    scanf("%lf",&num1);
    printf("Ingrese el num2: ");
    scanf("%lf",&num2);

    printf("Elija una operacion:\n1.Suma\n2.Resta\n3.Multiplicacion\n4.Division\n>>");
    scanf("%d",&op1);

    switch (op1)
    {
    case 1:
        sum=num1+num2;
        printf("La suma es: %lf\n",sum);
        break;
    case 2:
        res=num1-num2;
        printf("La resta es: %lf\n",res);
        break;
    case 3:
        mul=num1*num2;
        printf("La multiplicacion es: %lf\n",mul);
        break;
    case 4:
        if(num2!=0){
            div=num1/num2;
            printf("La division es: %lf\n",div);
        }else{
            printf("No se puede dividir para 0\n");
        }
        break;
    default:
        printf("No existe la opcion\n");
        break;
    }
    printf("Desea realizar otra operacion?\n1.Si\n2.No\n>>");
    scanf("%d",&op2);
    }while(op2==1);

    return 0;
}