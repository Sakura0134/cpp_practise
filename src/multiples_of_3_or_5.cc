/*MULTIPLES OF 3 AND 5
It is to find the sum of multiples of 3 or 5 between a given limit
*/
#include <iostream>

int main(int argc, char **argv){
	int max_limit = 0, sum = 0, j = 5;
	
	std::cout<<"Enter Max Limit: ";
	std::cin>>max_limit;


	for (int i = 3; i < max_limit; i += 3){
		if (j < max_limit && j%3 != 0){
			sum += j;
			j += 5;
		}	
		sum += i;
	}

	std::cout<<"Sum of Digits: "<<sum;
}