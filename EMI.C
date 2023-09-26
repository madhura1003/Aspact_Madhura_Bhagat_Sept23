main()
{
 float roi,L_amount,emi,totint,repay,intrest,t;
 clrscr();
 printf("Enter Loan amount: ");
 scanf("%f",&L_amount);
 printf("Enter Rate of interest: ");
 scanf("%f",&roi);
 printf("Enter Duration time: ");
 scanf("%f",&t);
  intrest=(L_amount*roi)/100;
  totint=intrest*t;
  repay=L_amount+totint;
  emi=(repay/(t*12));
 clrscr();
 printf("\nThe Loan Amount is : %f",L_amount);
 printf("\nThe Rate of Interest is : %f",roi);
 printf("\nThe Intrest of year     : %f",t);
 printf("\nThe Total Intrest       : %f",totint);
 printf("\nThe Total Refund Amount : %f",repay);
 printf("\nThe Monthly Installment : %f",emi);
 getch();
}
