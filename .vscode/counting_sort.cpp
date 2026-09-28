#include <iostream>
using namespace std;
//counting sort
//process step:-
//1.find the maximum element in the input array
//2.create a count array of size (max+1) and initialize all elements to 0
//3.count the occurrence of each element in the input array and store it in the count array
//4.update the count array by adding the previous count to the current count
//set C[i] -C[i]+C[i-1] this code will do the cumulative count of the elements in the count array
//5.build the output array by iterating through the count array and placing the elements in their correct position
//6.copy the output array back to the input array



//redix sort
//process step:-
//1.find the maximum number to know the number of digits
//2.do counting sort for every digit. Note that instead of passing the digit number, exp is passed. exp is 10^i where i is the current digit number

//input  329 457 657 839 436 720 355
