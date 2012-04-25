#!/usr/bin/python3.2

import sys

def main(argv):
	sum = 2;
	terms = list((1,2));
	
	while terms[1] < 4000000:
		newterm = terms[0] + terms[1];
		terms[0] = terms[1];
		terms[1] = newterm;
		if newterm % 2 == 0:
			sum += newterm;
			
	print("The sum of all even terms in the Fibonacci sequence not exceeding 4 million is: " + str(sum));

if __name__ == "__main__":
	main(sys.argv);
