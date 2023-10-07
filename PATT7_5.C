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
   printf("%d",i);
  }
  printf("\n");
  }
 getch();
}


/*
      1
   1  2
  1 2 3

*/
