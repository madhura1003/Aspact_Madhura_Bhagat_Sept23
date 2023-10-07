main()
{
 int i,j;
 clrscr();
 for(i=1;i<=5;i++)
 {
  char ch='E';
  for(j=5;j>=i;j--)
  {
   printf(" %c ",ch);
   ch--;
  }
  printf("\n");
 }
 getch();
}

/*
EDCBA
EDCB
EDC
ED
E
*/
