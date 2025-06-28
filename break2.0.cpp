#include <iostream>
#include <string>
#include <conio.h>
int main () {
int size;
std::cout << "how many numbers are you gonnna use? ";
std::cin>> size;
int* array = new int[size];

for(int i=0; i< size; i++) {
    std::cout<< "enter number " << (i+1) << " ";
std::cin>>array[i];

}
std::cout << "you entered ";
for(int i =0; i< size; i++) {
 std::cout << array[i]<< " ";
}
float sum = 0;

for(int i = 0; i<size; i++) {
    sum+=array[i];
}
std::cout << "the avg is: " << sum /size ;

delete[] array;

}