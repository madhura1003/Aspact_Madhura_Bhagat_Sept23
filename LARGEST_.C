main()
{
 int a,b,c,d,e;
 clrscr();
 printf("Enter Value of A: ");
 scanf("%d",&a);
 printf("Enter Value of B: ");
 scanf("%d",&b);
 printf("Enter Value of C: ");
 scanf("%d",&c);
 printf("Enter Value of D: ");
 scanf("%d",&d);
 if(a>b)
  {
   if(a>c)
    {
     if(a>d)
      {
	  printf("A is Greater");
	}
       else
	{
	  printf("D is Greater");
	}
      }
     else
     {
       if(c>d)
	{
	 printf("C is Grater");
	}
       else
	{
	 printf("D is Greater");
	}
       }
     }

 else
  {
   if(b>c)
    {
     if(b>d)
	{
	  printf("B is Greater");
	}
       else
	{
	  printf("D is Greater");
	}
      }
    else
     {
      if(c>d)
       {
	printf("C is Greater");
       }
      else
       {
	printf("D is Greater");
       }
    }
   }
  getch();
}
