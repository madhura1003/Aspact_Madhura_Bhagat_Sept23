main()
{
 int i,j;
 char ch='E';
 clrscr();
 for(i=1;i<=5;i++)
 {
  for(j=5;j>=i;j--)
  {
   printf(" %c ",ch);
  }
  printf("\n");
  ch--;
 }
 getch();
}

/*
EEEEE
DDDD
CCC
BB
A
*/
