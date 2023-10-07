main()
{
 int i,j;
 char ch='A';
 clrscr();
 for(i=1;i<=5;i++)
 {
  for(j=5;j>=i;j--)
  {
   printf(" %c ",ch);
  }
  printf("\n");
  ch++;
 }
 getch();
}

/*
AAAAA
BBBB
CCC
DD
E
*/
