#include <iostream>
#include <array>
#include <time.h>

void fill_arr(int* arr, const int array_size )
{
  short min = 0;
  short max = 10;
  for(int i = 0; i<array_size; i++)
    {
      arr[i] = min + rand() % (max-min);
      std::cout << arr[i] << "\n";
    }
}

void is_divisible_two(int* arr, const int array_size)
{
  int number_of_first = 0;
  int multiple_of_therteen = 0;
  for(int i = 0; i<array_size; i++)
    {
      if(arr[i]%2!=0)
        {
          number_of_first = i;
          for(int n = 0; n<array_size; n++)
            {
              if(arr[i]%13 == 0)
                {
                  multiple_of_therteen = n;
                  break;
                }
            }
          break;
        }
    }
    if(number_of_first == 0)
      {
        std::cout << "no divisibles of two";
      }
    else if (multiple_of_therteen == 0)
      {
        std::cout << "no multiple of 13";
      }
    else
      {
         std::cout << "first divisible of two is: "  << number_of_first << "\n";
         std::cout << "first multiple of 13 is:" << multiple_of_therteen << "\n";
      }
}

int arr_size()
{
    int arr_size = 0;
    std::cout << "enter array size:";
    std::cin >> arr_size;
    system("cls");
    return arr_size;
}


int main()
{
   srand(time(NULL));
   const int array_size = 15;
   static int arr[array_size];
   fill_arr(arr, array_size);
   is_divisible_two(arr, array_size);

   
}
