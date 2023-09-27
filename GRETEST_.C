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
 printf("Enter Value of E: ");
 scanf("%d",&e);
 if(a>b)
  {
   if(a>c)
    {
     if(a>d)
      {
       if(a>e)
	{
	  printf("A is Greater");
	}
       else
	{
	  printf("E is Greater");
	}
      }
     else
     {
       if(d>e)
	{
	 printf("D is Grater");
	}
       else
	{
	 printf("E is Greater");
	}
       }
     }
 else
   {
   if(c>d)
   {
    if(c>e)
     {
      printf("C is Greater");
     }
    else
     {
      printf("E is Greater");
     }
   }
   else
   {
    if(d<e)
    {
     printf("D is Greater");
    }
    else
    {
      printf("E is Greater");
    }
   }
 }
}

 else
  {
   if(b>c)
    {
     if(b>d)
      {
       if(b>e)
	{
	  printf("B is Greater");
	}
       else
	{
	  printf("E is Greater");
	}
      }
    else
     {
      if(d>e)
       {
	printf("D is Greater");
       }
      else
       {
	printf("E is Greater");
       }
    }
  }
  else
   {
    if(c>d)
     {
      if(c>e)
      {
       printf("C is Greater");
     }
    else
     {
      printf("E is Greater");
     }
    }
     else
     if(d>e)
     {
      printf("D is Greater");
     }
     else
      {
       printf("E is Greater");
   }
  }
 }
   getch();
}


