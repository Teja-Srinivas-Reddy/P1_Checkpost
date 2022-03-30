#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"methodoperations.h"

int vechicalType[100], payment[100], status[100];
char time_data[100][100];
char registrationNumber[100][100];

// car, lorry, bike
int price[5] =
 {
  10,
  20,
  30,
  50,
  100
};

int counter = 1;


void printTitle() 
{
  printf("\n====================================================================================================\n\n");
  printf("                                          CHECK POST\n");
  printf("\n======================================================================================================\n\n");
}
int getMenuOption() 
{

  int menu;

  system("cls");
  printTitle();
  printf("Choose an option : \n\n");
  printf(" 1  =>  Add new Entry \n");
  printf(" 2  =>  Show All Entries \n");
  printf(" 3  =>  Exit \n");
  printf("\nOption selected :                               ");
  scanf("%d", & menu);
  return menu;
}

void addNewEntry() 
{
  system("cls");
  printTitle();
  printf("Choose vechile type : \n");
  printf(" 1  =>  Bike \n");
  printf(" 2  =>  Auto \n");
  printf(" 3  =>  Car \n");
  printf(" 4  =>  Heavy Vechicals\n\n");
  printf("Vechical selected :                               ");
  scanf("%d", & vechicalType[counter]);

  system("cls");
  printTitle();
  char ch;
  scanf("%c",&ch);
  //ch = fgetc(stdin);

  printf("\n\nEnter Registration Number :                        ");
  gets(registrationNumber[counter]);
  //time_t t;
  //time( & t);
  //strcpy(time_data[counter], ctime( & t));

  system("cls");
  printTitle();

  printf("Choose type of transport : \n");
  printf(" 1  =>  Into the city\n");
  printf(" 2  =>  Out to the city\n\n");
  printf("Option   selected :                               ");
  scanf("%d", & status[counter]);

  system("cls");
  printTitle();
  payment[counter] = price[vechicalType[counter]];
  printf("\n\nAmount need to be collect :                     %d\n", price[vechicalType[counter]]);
  printf("\n\n\n            =======Record Added=======           ");
  printf("\n\nPress Enter to go to main menu");

  counter++;
   scanf("%c",&ch);
  //ch = fgetc(stdin);
  while (2) 
  {
    scanf("%c",&ch);
    //ch = fgetc(stdin);
    if (ch == 0x0A)
      return;
  }
}

void showAllEntries()
{
  system("cls");
  printTitle();

  char ch;
  scanf("%c",&ch);
  //ch = fgetc(stdin);
  int total = 0;
  printf("\n    %s\t\t %s\t\t %s\t %s\t %s\n", "Entry No", "Registration Number", "Vechical Type", "Payment", "Status");
 // printf("\n    %-8s\t\t %-20s\t\t %-5s\t %3s\t %-5s\n", "Entry No", "Registration Number", "Vechical Type", "Payment", "Status");
  for (int i = 1; i < counter; i++) 
  {
    // printf("\n    %-10d\t\t %-12s\t\t %-5d\t %3d\n", i, registrationNumber[i], vechicalType[i], payment[i]);
    printf("\n    %-8d\t\t", i);
    printf(" %-20s\t\t", registrationNumber[i]);
    if (vechicalType[i] == 1)
      printf(" %-5s\t\t", "Bike");
    if (vechicalType[i] == 2)
      printf(" %-5s\t\t", "Auto");
    if (vechicalType[i] == 3)
      printf(" %-5s\t\t", "Car");
    if (vechicalType[i] == 4)
      printf(" %-5s\t\t", "Heavy");
    printf(" %-3d\t\t", payment[i]);
    total += payment[i];
    if (status[i] == 1)
      printf(" %-5s\t\t", "Into the city");
    if (status[i] == 2)
      printf(" %-5s\t\t", "Out to the city");
  }

  printf("\n\n    %-8s\t\t %-20s\t\t %-5s\t %3s", "--------", "--------------------", "--------", "---");
  printf("\n    %-8d\t\t %-20s\t\t %-5s\t\t %3d", counter, "-", "-", total);
  printf("\n    %-8s\t\t %-20s\t\t %-5s\t %3s", "--------", "--------------------", "--------", "---");

  printf("\n\nPress Enter to go back to main menu");

  while (2) 
  {
      scanf("%c",&ch);
    //ch = fgetc(stdin);
    if (ch == 0x0A)
      return;
  }
}