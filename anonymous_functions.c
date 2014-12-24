#include <stdio.h>
const int size_of_array = 8; // size e arraye e ke adaad dar oon gharaar migiran.

/*
Deghat konid ke to zaban C, syntaxi baraye "tabeye binam"
vojood nadare. in kaar ba sakhtan "eshare gar haye be tabe" 
anjaam mishe. 
*/
void print_if_true(int numbers[], int (*check_valid)(int))
{
  /*
  In tabe aargomane avalesh ye arraye az adaade sahihe.
  Aargomane dovomesh ye "eshare gar be ye address tabe" ast.
  In tabe ye adad sahih migire va ye adade sahih bar migardoone.
  */
  int ii = 0;
  for (; ii < size_of_array; ++ii)
  {
    if (check_valid(numbers[ii])) // tabe ee ke addressesh to check_valid gharaar gerefte ejra mish.
    {
      printf("%d\n", numbers[ii]);
    }
  }
}

int check_odd(int number)
{
  /*
  Tabeye moghayes gar. Darsoorati ke number zooj nabashe
  adade 1 ro barmigardoone, ke to zaban C be manaye true ast.
  */
  return ((number % 2) != 0);
}

int main(int argc, char* argv[])
{
  int numbers[] = {1, 2, 3, 5, 6, 8, 99, 22}; // Toole tabe bayad 8 bashe.
  print_if_true(numbers, check_odd); // Deghat konid faghat naame tabe bedoone () neveshte shode.
  return 0;
}