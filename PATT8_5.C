main()
{
 int i,j,sp;
 char ch='A';
 clrscr();
 for(i=1;i<=8;i++)
 {
  for(sp=8;sp>=i;sp--)
  {
   printf(" ");
  }
   for(j=1;j<=i;j++)
  {
   printf("%c",ch);
  }
  printf("\n");
  ch++;
  }
 getch();
}


/*
      A
   B  B
  C C C

*/
