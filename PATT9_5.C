main()
{
 int i,j;
 clrscr();
 for(i='E';i>='A';i--)
 {
  for(j='A';j<=i;j++)
  {
   printf(" %c ",j);
  }
  printf("\n");
 }
 getch();
}

/*
ABCDE
ABCD
ABC
AB
A
*/
