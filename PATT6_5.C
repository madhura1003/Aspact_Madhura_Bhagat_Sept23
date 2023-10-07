main()
{
 int i,j,sp;
 clrscr();
 for(i=1;i<=8;i++)
 {
  for(sp=8;sp>=i;sp--)
  {
   printf(" ");
  }
   for(j=1;j<=i;j++)
  {
   printf("*");
  }
  printf("\n");
  }
 getch();
}

/*

    *
   * *
 * * *

*/
