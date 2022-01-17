// This solution avoids initializing the static local array cache instead relies on zero-initialization to determine
// whether each member of the array has been assigned a value yet and, if not, recursively computes its value.

#include <stdexcept>
#include <iostream>

int fact( int i ) noexcept (false) {

  if ( i < 0 ) {
    throw std::domain_error("i must be >= 0");
  }
  
  // Use the lazy-initialized cache.
  static int cache[17];
  
  if ( i < (sizeof(cache) / sizeof(int)) ) {
      if ( 0 == cache[i] ) {
          cache[i] = i > 0 ? i * fact(i - 1) : 1;
       }
    return cache[i];   
   }
   
   return i > 0 ? i * fact( i - 1 ) : 1;
   
}


int main() {
   int a = 5;
   
   int b = fact( a );
   
   std::cout << b << "\n";

   return 0;

}
