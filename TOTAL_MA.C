main()
{
 int eng,maths,sci,total;
 float per;
 clrscr();
 printf("Enter the Marks of English, Maths & Science: ");
 scanf("%d%d%d",&eng,&maths,&sci);
 total = eng + maths + sci;
 printf("The total of 3 Subject is: %d",total);
 per=total/3;
 clrscr();
 printf("\nThe Total of 3 Subject is: %d",total);
 printf("\nThe Sudent Percentage is : %f%",per);
 getch();
 }