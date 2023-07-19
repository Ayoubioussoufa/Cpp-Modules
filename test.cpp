#include <iostream>
#include <exception>

int main() {
  try {
    try {
      throw 10;  // Throw an integer exception
    } catch (float) {
      std::cout << "Caught int exception in inner catch block." << std::endl;
        throw "salam"; // Re-throw the exception to the outer catch block
    }
  } 
  catch (double) {
    std::cout << "Caught double exception in outer catch block." << std::endl; //3lach mn kanthrowi hna knowing that the exception is int so katdkhl lhnaya 
    throw "plop";
  } 
  catch (const char* e) {
    std::cout << "Caught exception: " << e << std::endl;
    // throw 60;
  }
//   try {
    // throw "Exception occurred";  // Throw a C-style string exception
//    } catch (const char* e) {
    // std::cout << "Caught exception: " << e << std::endl;
//   }

  return 0;
}

// #include <iostream>

// int main() {
//     try {
//       throw 10;  // Throw an integer exception
//     } catch (int) {
//       std::cout << "Caught int exception in inner catch block." << std::endl;
//       throw "salam"; // Re-throw the exception to the outer catch block
//     }
//     catch (const char* e) {
//     std::cout << "Caught exception: " << e << std::endl;
//   }
//    catch (double) {
//     std::cout << "Caught double exception in outer catch block." << std::endl;
//   }

//   try {
//     throw "Exception occurred";  // Throw a C-style string exception
//   } catch (const char* e) {
//     std::cout << "Caught exception: " << e << std::endl;
//   }

//   return 0;
// }

// #include <iostream>

// void divide(int a, int b) {
//   if (b == 0) {
//     throw "Division by zero is not allowed.";
//   }
//   int result = a / b;
//   std::cout << "Result: " << result << std::endl;
// }

// int main() {
//   try {
//     divide(10, 0); // Call the divide function
//     std::cout << "After divide function." << std::endl;
//   } catch (const char* error) {
//     std::cout << "Exception caught: " << error << std::endl;
//   }

//   return 0;
// }
