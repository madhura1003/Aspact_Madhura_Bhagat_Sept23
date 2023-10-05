main()
{
 int i,j;
 char ch='A';
 clrscr();
 for(i=1;i<=3;i++)
 {
  for(j=1;j<=5;j++)
  {
   if(j==1)
   {
    printf(" %c ",ch);
   }
   else
   {
    printf(" %c ",ch+32);
   }
  }
  printf("\n");
  ch++;
 }
 getch();
}

/*
Aaaaa
Bbbbb
Ccccc
*/
