
int main()
{
    float bs,hra,da,ta,gs;
    printf("Enter basic salary:");
    scanf("%f", &bs);

    hra=(15*bs)/100;
    printf("HRA:%.2f\n",hra);

    da=(5*bs)/100;
    printf("DA:%.2f\n",da);

    ta=(2*bs)/100;
    printf("TA:%.2f\n",ta);
    
    gs = bs + hra + da + ta ;

    printf("GROSS SALARY OF EMPLOYEE = %.2f", gs);

    return 0;
}