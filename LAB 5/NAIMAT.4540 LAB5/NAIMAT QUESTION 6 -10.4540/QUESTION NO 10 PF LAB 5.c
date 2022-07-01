#include <stdio.h>


int findCount(int n)
{
    int count = 0;

    while (n != 0) {
        count++;
        n /= 10;
    }
    return count;
}

int main()
{
	int input_val;
	unsigned char digit_cnt,first_half,second_half,final_val;

	printf("Please enter a number that can fit in 8 bits (0-225): ");
	scanf("%d", &input_val);

	input_val = (unsigned char)input_val;

	digit_cnt = findCount(input_val);

	printf("\n \nYou entered the following 8-bit number %d which has %d digits.\n\n", input_val,digit_cnt);

	if (digit_cnt >= 2)
	{
		first_half = input_val << 4;
    	second_half = input_val >> 4;
    	final_val = first_half | second_half;

    		// Eample:
    		
    		// 0 0 0 1 1 0 0 1 = 25  (Original value in binary)
    		// 1 0 0 1 0 0 0 0 = 144 (Shifted first half of original value in binary)
    		// 0 0 0 0 0 0 0 1 = 1   (Shifted second half of original value in binary)
    		// 1 0 0 1 0 0 0 1 = 145 (After merging both with an OR operation)

    	printf("Original number = %d \nThe first 4 bits = %d \nThe last 4 bits = %d \nThe number after swaping the bits = %d ",input_val ,first_half,second_half, final_val);
	}

	return 0;
}
