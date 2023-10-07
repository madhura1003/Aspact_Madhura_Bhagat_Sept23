main()
{
 int i,j,sp;;
 clrscr();
 for(i=5;i>=1;i--)
 {
  for(sp=5;sp>=i;sp--)
  {
   printf(" ");
  }
  for(j=1;j<=i;j++)
  {
   printf("%d",j);
  }
  printf("\n");
 }
 getch();
}

/*
12345
 1234
  123
   12
    1
*/
