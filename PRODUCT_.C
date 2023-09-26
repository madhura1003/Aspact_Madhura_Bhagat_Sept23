main()
{
 float price;
 int quantity,Rate;
 clrscr();
 printf("Enter the Quantity of the product: ");
 scanf("%d",&quantity);
 printf("Enter the Price of the Product: ");
 scanf("%f",&price);
  Rate = quantity / price;
  clrscr();
 printf("\nThe Quantity of the Product is: %d",quantity);
 printf("\nThe Price of the Product is   : %f",price);
 printf("\nThe Rate Price of Product is  : %d",Rate);
 getch();
 }