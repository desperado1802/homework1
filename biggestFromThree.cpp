#include <iostream>
#include <climits>



int main(){

   int biggest = INT_MIN;
   int count = 0;
   int num;
    
    while(count < 3) {
        std::cout << "Enter a number: ";
        std::cin >> num;
        std::cout << std::endl;

        biggest = (num > biggest) ? num : biggest;

        count ++;

    }

    std::cout << "Biggest entered number is: " << biggest << std::endl;

    return 0;
}