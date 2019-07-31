int main()
{
   int a;
   scanf("%d",&a);
   if(a%4==0&&a%100&&a%400)
   printf("leap year");
   else
   printf("not an leap year");
   

    return 0;
}
