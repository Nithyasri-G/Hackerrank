int main()
{
     int a,b;
     float c,d;
     scanf("%d %d\n", &a,&b);
     scanf("%f %f\n", &c,&d);
     int sum=a+b;
     int difference=a-b;
     float fsum=c+d;
     float fdiff =c-d;
     printf("%d %d \n", sum,difference);
     printf("%0.1f %0.1f \n", fsum,fdiff);	
     return 0;
}
