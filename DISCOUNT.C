main()
{
 int rate,quantity,discount;
 float price,bill,Total_bill;
 clrscr();
 printf("Enter the Quantity of the product: ");
 scanf("%d",&quantity);
 printf("Enter the Price of the Product: ");
 scanf("%f",&price);
 printf("Enter the Discount percentage: ");
 scanf("%d%",&discount);
  rate = quantity / price;
  bill = price * quantity;
  Total_bill=bill-(bill*discount/100);
  clrscr();
  printf("\nThe Quantity of the Product is: %d",quantity);
  printf("\nThe Price of the Product is   : %f",price);
  printf("\nThe Rate Price of Product is  : %d",rate);
  printf("\nTotal Bill of Customer is     : %f",Total_bill);
 getch();
}
