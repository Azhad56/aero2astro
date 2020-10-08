 #include <iostream>

  using namespace std;

  int main()

  {

      int i;

      const char *arr[] = {"C", "C++", "Java", "VBA"};

      const char *(*ptr)[4] = &arr;

      cout << ++(*ptr)[2];

      return 0;

  }