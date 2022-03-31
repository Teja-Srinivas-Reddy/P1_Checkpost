#include"methodoperations.h"

void printTitle();
void getDetails();
int getMenuOption();
void showAllEntries();
void addNewEntry();
int check();

int main()
{

  int menu;
  while (1) 
  {
    menu = getMenuOption();
    if (menu == 1) 
    {
      // Add new entry
      addNewEntry();
    }
    else if (menu == 2) 
    {
      // Show All entries and exit
      showAllEntries();
    } 
    else 
    {
      // exit from app.
      break;
    }
  }
}
