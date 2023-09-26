main()
{
 int cus_Id;
 float old_Reading,new_Reading,total,bill;
 clrscr();
 printf("Enter the customer ID:  ");
 scanf("%d",&cus_Id);
 printf("Enter old Rading: ");
 scanf("%f",&old_Reading);
 printf("Enter New Reading: ");
 scanf("%f",&new_Reading);
 total=new_Reading-old_Reading;
 bill=total*5.00;
 clrscr();
 printf("\nCustomer ID          : %d",cus_Id);
 printf("\nOld Reading          : %f",old_Reading);
 printf("\nNew Reading          : %f",new_Reading);
 printf("\nThe Total Bill Amount: %f",total);
getch();
 }

