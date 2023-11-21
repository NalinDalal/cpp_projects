#include <iostream.h>
/*for cin,cout,cerr

cin-to take input
cout-to get output
cerr- for errors, typically unbuffered, the error message will be immediately displayed on the console, even before the program terminates
*/

/* <cstdlib>- function like malloc,free,rand,atoi

malloc:
Function: void* malloc(size_t size);
Purpose: Allocates a block of memory of the given size bytes and returns a pointer to the first byte of the block. The memory is uninitialized.
Usage Example:
cpp
Copy code
#include <cstdlib>
int* myArray = static_cast<int*>(malloc(10 * sizeof(int)));
free:
Function: void free(void* ptr);
Purpose: Deallocates the memory previously allocated by malloc, calloc, or realloc. It doesn't change the content of the memory; it merely marks it as available for reuse.
Usage Example:
cpp
Copy code
#include <cstdlib>
free(myArray);
rand:
Function: int rand();
Purpose: Generates a pseudo-random integer. To use this function effectively, you should seed the random number generator using srand to ensure different sequences of random numbers in different runs of your program.
Usage Example:
cpp
Copy code
#include <cstdlib>
#include <ctime>
srand(static_cast<unsigned int>(time(nullptr)));
int randomNumber = rand();

atoi:
Function: int atoi(const char* str);
Purpose: Converts a C-style string (character array) str representing an integer into an integer value.
Usage Example:
cpp
Copy code
#include <cstdlib>
const char* str = "12345";
int intValue = atoi(str);


*/

//<string>-declarations for string manipulation functions and the string class.
/*
In C++, the Standard Library provides a powerful and versatile string manipulation library through the `<string>` header. This library includes the `std::string` class and various functions and features for working with strings. Here are some key components of the C++ Standard Library's string handling capabilities:

1. **`std::string` Class**:
   - The `std::string` class is a widely-used class for representing and manipulating strings in C++. It provides dynamic string storage, automatic memory management, and a wide range of member functions for string operations.
   - Example:
     ```cpp
     #include <string>
     std::string myString = "Hello, World!";
     ```

2. **String Operations**:
   - The `std::string` class provides a rich set of member functions for various string operations, including concatenation, comparison, finding substrings, and more.
   - Example:
     ```cpp
     std::string str1 = "Hello";
     std::string str2 = "World";
     std::string combined = str1 + ", " + str2;
     ```

3. **String Input and Output**:
   - C++ supports easy input and output of strings using the standard stream objects `std::cin` and `std::cout`.
   - Example:
     ```cpp
     #include <iostream>
     std::string name;
     std::cout << "Enter your name: ";
     std::cin >> name;
     std::cout << "Hello, " << name << "!";
     ```

4. **String Conversion**:
   - You can easily convert between `std::string` and C-style strings using member functions like `c_str()` and `data()`.
   - Example:
     ```cpp
     std::string myString = "42";
     int intValue = std::stoi(myString);
     ```

5. **String Iterators**:
   - `std::string` provides iterators to traverse the characters in a string.
   - Example:
     ```cpp
     std::string text = "C++ Programming";
     for (auto it = text.begin(); it != text.end(); ++it) {
         std::cout << *it;
     }
     ```

6. **String Size and Capacity**:
   - You can query the size (number of characters) and capacity (memory allocated) of a `std::string` using `size()` and `capacity()` member functions.
   - Example:
     ```cpp
     std::string message = "Hello";
     size_t length = message.size();
     ```

7. **String Manipulation Algorithms**:
   - C++ Standard Library algorithms (e.g., `std::sort`, `std::find`) can be used with strings because `std::string` iterators follow the iterator pattern.

The C++ Standard Library's string handling capabilities are flexible, efficient, and provide a convenient way to work with text in C++ programs. They offer significant advantages over C-style character arrays and provide a safer and more efficient alternative for string manipulation.

*/

//<vector>-declaration for 'vector' container
/*
In C++, the Standard Library provides a powerful dynamic array-like container called `std::vector`. The `std::vector` class is part of the C++ Standard Template Library (STL) and is defined in the `<vector>` header. It allows you to store and manipulate a sequence of elements of the same data type. Here are some key features and operations provided by `std::vector`:

1. **Declaration and Initialization**:
   - You can declare and initialize a `std::vector` in various ways, including specifying its data type and initial size.
   - Example:
     ```cpp
     #include <vector>
     
     // Declare an empty vector of integers
     std::vector<int> numbers;

     // Declare and initialize a vector with values
     std::vector<double> values = {1.2, 3.4, 5.6};
     ```

2. **Dynamic Sizing**:
   - `std::vector` dynamically resizes itself as elements are added or removed. You don't need to specify the size in advance.
   - Example:
     ```cpp
     std::vector<int> scores;
     scores.push_back(90); // Add an element
     scores.push_back(85);
     ```

3. **Accessing Elements**:
   - You can access elements using subscript notation (`[]`) or the `at()` method.
   - Example:
     ```cpp
     int firstScore = scores[0];
     int secondScore = scores.at(1);
     ```

4. **Size and Capacity**:
   - `size()` returns the number of elements in the vector, while `capacity()` returns the current allocated capacity (useful for performance optimization).
   - Example:
     ```cpp
     size_t numElements = scores.size();
     size_t capacity = scores.capacity();
     ```

5. **Iterators**:
   - `std::vector` supports iterators for easy traversal of elements.
   - Example:
     ```cpp
     for (auto it = scores.begin(); it != scores.end(); ++it) {
         std::cout << *it << " ";
     }
     ```

6. **Modifying Elements**:
   - You can modify elements directly or use methods like `push_back()`, `pop_back()`, `insert()`, and `erase()` to manipulate the contents of the vector.
   - Example:
     ```cpp
     scores[1] = 88; // Modify an element
     scores.pop_back(); // Remove the last element
     scores.insert(scores.begin() + 1, 77); // Insert an element
     ```

7. **Sorting and Algorithms**:
   - You can use C++ Standard Library algorithms (e.g., `std::sort`, `std::find`) with vectors because they support iterators.

`std::vector` is a versatile and efficient container, and it is often the preferred choice for storing sequences of data in C++ programs. It offers dynamic resizing, straightforward access to elements, and a wide range of operations for manipulation and traversal.
*/

//<cmath>-math func like 'sqrt','sin','cos','log'
/*
The `<cmath>` header in C++ provides a collection of mathematical functions and constants. These functions are part of the C++ Standard Library and are useful for performing various mathematical calculations. Here are some common functions and constants available in the `<cmath>` header:

1. **Mathematical Constants**:
   - `M_PI`: Represents the mathematical constant π (pi).
   - `M_E`: Represents the mathematical constant e (the base of the natural logarithm).
   - `M_SQRT2`: Represents the square root of 2.

   Example:
   ```cpp
   #include <iostream>
   #include <cmath>
   
   int main() {
       std::cout << "Pi: " << M_PI << std::endl;
       std::cout << "e: " << M_E << std::endl;
       std::cout << "Square root of 2: " << M_SQRT2 << std::endl;
       return 0;
   }
   ```

2. **Basic Mathematical Functions**:
   - Functions like `sqrt()`, `abs()`, `pow()`, `exp()`, `log()`, `log10()`, `sin()`, `cos()`, `tan()`, `asin()`, `acos()`, and `atan()` are available for common mathematical operations.

   Example:
   ```cpp
   #include <iostream>
   #include <cmath>
   
   int main() {
       double x = 16.0;
       double squareRoot = sqrt(x);
       double sineValue = sin(M_PI / 4.0);
       double logValue = log(2.0);
       
       std::cout << "Square root of " << x << ": " << squareRoot << std::endl;
       std::cout << "Sine of pi/4: " << sineValue << std::endl;
       std::cout << "Natural logarithm of 2: " << logValue << std::endl;
       
       return 0;
   }
   ```

3. **Rounding and Truncation**:
   - Functions like `ceil()`, `floor()`, `round()`, and `trunc()` help with rounding and truncating numbers.

   Example:
   ```cpp
   #include <iostream>
   #include <cmath>
   
   int main() {
       double value = 4.7;
       double ceilValue = ceil(value);
       double floorValue = floor(value);
       double roundValue = round(value);
       double truncValue = trunc(value);
       
       std::cout << "Ceiling: " << ceilValue << std::endl;
       std::cout << "Floor: " << floorValue << std::endl;
       std::cout << "Rounded: " << roundValue << std::endl;
       std::cout << "Truncated: " << truncValue << std::endl;
       
       return 0;
   }
   ```

4. **Random Number Generation**:
   - The `<cmath>` header provides `rand()` and `srand()` functions for simple pseudo-random number generation. However, for better random number generation, consider using the `<random>` library introduced in C++11.

   Example (using `rand()`):
   ```cpp
   #include <iostream>
   #include <cstdlib>
   #include <ctime>
   
   int main() {
       std::srand(static_cast<unsigned int>(std::time(nullptr)));
       int randomValue = std::rand() % 100; // Generate a random number between 0 and 99
       
       std::cout << "Random Value: " << randomValue << std::endl;
       
       return 0;
   }
   ```

Keep in mind that when using floating-point values with these functions, it's important to be aware of potential issues related to precision, rounding errors, and domain-specific considerations for certain mathematical functions.
*/

//<fstream>-declaration for file input,output operations
/*
In C++, the `<fstream>` header provides classes and functions for file input and output operations. It allows you to work with files on your computer's file system. The `<fstream>` header includes the following classes:

1. **`std::ifstream` (Input File Stream)**:
   - This class is used for reading data from files.
   - You can open a file for reading using an instance of `std::ifstream`.
   - Example:
     ```cpp
     #include <iostream>
     #include <fstream>
     
     int main() {
         std::ifstream inputFile("example.txt");
         if (inputFile.is_open()) {
             std::string line;
             while (std::getline(inputFile, line)) {
                 std::cout << line << std::endl;
             }
             inputFile.close();
         } else {
             std::cerr << "Failed to open file for reading." << std::endl;
         }
         return 0;
     }
     ```

2. **`std::ofstream` (Output File Stream)**:
   - This class is used for writing data to files.
   - You can open a file for writing using an instance of `std::ofstream`.
   - Example:
     ```cpp
     #include <iostream>
     #include <fstream>
     
     int main() {
         std::ofstream outputFile("output.txt");
         if (outputFile.is_open()) {
             outputFile << "Hello, World!" << std::endl;
             outputFile.close();
         } else {
             std::cerr << "Failed to open file for writing." << std::endl;
         }
         return 0;
     }
     ```

3. **`std::fstream` (File Stream)**:
   - This class is used for both reading and writing data to files. It provides the most flexibility.
   - You can open a file for both reading and writing using an instance of `std::fstream`.
   - Example:
     ```cpp
     #include <iostream>
     #include <fstream>
     
     int main() {
         std::fstream file("data.txt", std::ios::in | std::ios::out | std::ios::app);
         if (file.is_open()) {
             file << "This is a line of text." << std::endl;
             file.seekg(0); // Move to the beginning of the file
             std::string line;
             while (std::getline(file, line)) {
                 std::cout << line << std::endl;
             }
             file.close();
         } else {
             std::cerr << "Failed to open file for reading and writing." << std::endl;
         }
         return 0;
     }
     ```

4. **File Modes**:
   - When opening a file, you can specify various file modes using flags like `std::ios::in`, `std::ios::out`, `std::ios::binary`, `std::ios::app`, etc., to control how the file is opened and used.

The `<fstream>` library provides a convenient and flexible way to work with files in C++, allowing you to perform reading, writing, and other file-related operations. Remember to check whether the file was successfully opened and to close the file when you are done with it.

*/

// <ctime>-date and time manipulation 
/*
The `<ctime>` header in C++ provides functionality for working with date and time. It includes various functions and types to deal with time-related operations, such as measuring time intervals, formatting time and date information, and getting the current system time. Here are some common elements of `<ctime>`:

1. **`time_t`**:
   - `time_t` is a type used to represent time in seconds since the UNIX epoch (January 1, 1970, 00:00:00 UTC). It is often used for storing and manipulating time values.

2. **`struct tm`**:
   - `struct tm` is a structure used to represent calendar time, broken down into its components (year, month, day, hour, minute, second, etc.).

3. **`time()` Function**:
   - The `time()` function returns the current system time as a `time_t` value.
   - Example:
     ```cpp
     #include <iostream>
     #include <ctime>
     
     int main() {
         time_t currentTime;
         time(&currentTime);
         std::cout << "Current time: " << ctime(&currentTime);
         return 0;
     }
     ```

4. **`gmtime()` and `localtime()` Functions**:
   - `gmtime()` and `localtime()` convert a `time_t` value into a `struct tm` structure. `gmtime()` returns the time in Coordinated Universal Time (UTC), while `localtime()` returns the time in the local time zone.
   - Example:
     ```cpp
     #include <iostream>
     #include <ctime>
     
     int main() {
         time_t currentTime;
         time(&currentTime);
         struct tm* localTime = localtime(&currentTime);
         std::cout << "Local time: " << asctime(localTime);
         return 0;
     }
     ```

5. **`strftime()` Function**:
   - `strftime()` is used to format `struct tm` values into strings based on a format specifier. It allows you to create custom date and time representations.
   - Example:
     ```cpp
     #include <iostream>
     #include <ctime>
     
     int main() {
         time_t currentTime;
         time(&currentTime);
         struct tm* localTime = localtime(&currentTime);
         char buffer[80];
         strftime(buffer, sizeof(buffer), "%Y-%m-%d %H:%M:%S", localTime);
         std::cout << "Formatted local time: " << buffer << std::endl;
         return 0;
     }
     ```

6. **`difftime()` Function**:
   - `difftime()` calculates the difference in seconds between two `time_t` values.
   - Example:
     ```cpp
     #include <iostream>
     #include <ctime>
     
     int main() {
         time_t start, end;
         time(&start);
         // Some time-consuming operation
         time(&end);
         double elapsedSeconds = difftime(end, start);
         std::cout << "Time taken: " << elapsedSeconds << " seconds" << std::endl;
         return 0;
     }
     ```

The `<ctime>` library is essential for working with time-related tasks in C++. It allows you to handle time values, format them, and perform various time calculations, making it useful for tasks like timestamping, scheduling, and measuring execution times.

*/

//<algorithm>-standard algorithm like 'sort','find','min','max'
/*
In C++, the `<algorithm>` header provides a collection of useful algorithms that operate on a variety of data structures, including containers like `std::vector`, `std::list`, and arrays. These algorithms are part of the C++ Standard Library and can save you time and effort when working with data. Here are some common algorithms available in the `<algorithm>` header:

1. **`std::sort()`**:
   - `std::sort()` is used to sort elements in a range. It can sort containers like vectors, arrays, and other sequences.
   - Example:
     ```cpp
     #include <iostream>
     #include <algorithm>
     #include <vector>
     
     int main() {
         std::vector<int> numbers = {5, 2, 8, 1, 9};
         std::sort(numbers.begin(), numbers.end());
         for (int num : numbers) {
             std::cout << num << " ";
         }
         return 0;
     }
     ```

2. **`std::find()`**:
   - `std::find()` searches for a value in a range and returns an iterator to the first occurrence of the value, or the end iterator if the value is not found.
   - Example:
     ```cpp
     #include <iostream>
     #include <algorithm>
     #include <vector>
     
     int main() {
         std::vector<int> numbers = {5, 2, 8, 1, 9};
         auto it = std::find(numbers.begin(), numbers.end(), 8);
         if (it != numbers.end()) {
             std::cout << "Found: " << *it << std::endl;
         } else {
             std::cout << "Not found." << std::endl;
         }
         return 0;
     }
     ```

3. **`std::for_each()`**:
   - `std::for_each()` applies a function to each element in a range.
   - Example:
     ```cpp
     #include <iostream>
     #include <algorithm>
     #include <vector>
     
     void printSquare(int x) {
         std::cout << x * x << " ";
     }
     
     int main() {
         std::vector<int> numbers = {5, 2, 8, 1, 9};
         std::for_each(numbers.begin(), numbers.end(), printSquare);
         return 0;
     }
     ```

4. **`std::binary_search()`**:
   - `std::binary_search()` checks if a value exists in a sorted range and returns a boolean value.
   - Example:
     ```cpp
     #include <iostream>
     #include <algorithm>
     #include <vector>
     
     int main() {
         std::vector<int> sortedNumbers = {1, 2, 5, 8, 9};
         bool exists = std::binary_search(sortedNumbers.begin(), sortedNumbers.end(), 5);
         if (exists) {
             std::cout << "Found." << std::endl;
         } else {
             std::cout << "Not found." << std::endl;
         }
         return 0;
     }
     ```

These are just a few examples of the many algorithms available in the `<algorithm>` header. These algorithms are efficient and can significantly simplify common data manipulation tasks in C++. Make sure to include the `<algorithm>` header in your code to use these algorithms.
*/

//<iomanip>-declaration for input/output manipulators
/*
In C++, the `<iomanip>` header provides facilities for controlling the formatting of output when working with streams, such as `std::cout` and `std::ofstream`. It allows you to control various aspects of how data is displayed, including precision, field width, alignment, and more. Here are some common manipulators and functions available in `<iomanip>`:

1. **`std::setw(int n)`**:
   - `std::setw()` sets the minimum field width for the next output operation.
   - Example:
     ```cpp
     #include <iostream>
     #include <iomanip>
     
     int main() {
         int num = 42;
         std::cout << std::setw(5) << num << std::endl; // Minimum field width of 5
         return 0;
     }
     ```

2. **`std::setprecision(int n)`**:
   - `std::setprecision()` sets the precision (number of decimal places) for floating-point values.
   - Example:
     ```cpp
     #include <iostream>
     #include <iomanip>
     
     int main() {
         double value = 3.14159265358979323846;
         std::cout << std::setprecision(4) << value << std::endl; // 3.142
         return 0;
     }
     ```

3. **`std::fixed`** and **`std::scientific`**:
   - These manipulators control the display format for floating-point numbers. `std::fixed` displays numbers in fixed-point notation, while `std::scientific` uses scientific notation.
   - Example:
     ```cpp
     #include <iostream>
     #include <iomanip>
     
     int main() {
         double value = 12345.6789;
         std::cout << std::fixed << value << std::endl; // 12345.678900
         std::cout << std::scientific << value << std::endl; // 1.234568e+04
         return 0;
     }
     ```

4. **`std::left`, **`std::right`, and **`std::internal`**:
   - These manipulators control the alignment of output within a field. `std::left` left-aligns the output, `std::right` right-aligns it, and `std::internal` aligns it to the left but aligns negative numbers to the right.
   - Example:
     ```cpp
     #include <iostream>
     #include <iomanip>
     
     int main() {
         int num = -42;
         std::cout << std::left << std::setw(6) << num << std::endl; // -42   
         std::cout << std::right << std::setw(6) << num << std::endl; //   -42
         return 0;
     }
     ```

5. **`std::setfill(char c)`**:
   - `std::setfill()` sets the fill character for fields.
   - Example:
     ```cpp
     #include <iostream>
     #include <iomanip>
     
     int main() {
         int num = 42;
         std::cout << std::setfill('0') << std::setw(6) << num << std::endl; // 000042
         return 0;
     }
     ```

These manipulators and formatting functions from `<iomanip>` are useful when you want to control the appearance of data in your output, especially when working with formatted tables, reports, or user-friendly displays. You can combine them to achieve the desired formatting for your output.

*/


void LOG(const char* message)
{
    std::cout<<message<<std::endl;
}

int main()
{
    std::cout<<"Hello World!"<<std::endl;
    std::cin.get();
}