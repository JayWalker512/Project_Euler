#!/usr/bin/python3.2

import sys

def main(argv):
	total = 0;
	for i in range(1,1000):
		if i % 3 == 0 or i % 5 == 0:
			print("Found multiple: " + str(i));
			total += i;
			
	print("The sum of all multiples of 3 and 5 from 1 to 1000 is " + str(total));
	return 0;

if __name__ == "__main__":
    main(sys.argv);
