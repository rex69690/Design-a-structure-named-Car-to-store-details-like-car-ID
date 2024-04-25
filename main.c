#include<stdio.h>
struct car
{
int carid;
char model [20];
int rental;
}s1,s2,s3;
float calculateRentalCost(struct car car, int days) {
  return car.rental * days;}
int main ()
{
  //take 3 input for cars 
  struct car car1 , car2,car3;
  printf("Input car details for car1: ");
  printf("Enter carID: ");
  scanf("%d",&car1.carid);
  scanf("%s",car1.model);
  scanf("%d",&car1.rental);
  getchar(); //enetering new line character to break in the input buffer lag
  printf("Input car details for car1: ");
  printf("Enter carID: ");
  scanf("%d",&car2.carid);
  scanf("%s",car2.model);
  scanf("%d",&car2.rental);
  getchar(); 
  printf("Input car details for car1: ");
  printf("Enter carID: ");
  scanf("%d",&car3.carid);
  scanf("%s",car3.model);
  scanf("%d",&car3.rental);
  getchar();
int rentaldays; //declaring variable to set rentaldays car to be rented
  printf("\nEnter the number of rental days: ");
  scanf("%d", &rentaldays); //input number of days to be rented
//printing total cost of car to be rented 
  printf("\nTotal Rental Cost for Car 1: %.2f\n", calculateRentalCost(car1, rentaldays));
  printf("Total Rental Cost for Car 2: %.2f\n", calculateRentalCost(car2, rentaldays));
  printf("Total Rental Cost for Car 3: %.2f\n", calculateRentalCost(car3, rentaldays));

  return 0;
}