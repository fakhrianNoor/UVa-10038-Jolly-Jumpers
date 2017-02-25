// UVa 10038 - Jolly Jumpers.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <bitset>
#include <cmath>
#include <cstdio>

using namespace std;

int main()
{
	bitset<3000> checkflag;
	int n_sequence, temp, sequence[3000];

	while (scanf("%d", &n_sequence) != EOF) {
		for (int i = 0; i < n_sequence; i++)
			scanf("%d", &sequence[i]);

		if (n_sequence > 1) {
			checkflag.reset();

			for (int i = 1; i < n_sequence; i++) {
				temp = abs(sequence[i] - sequence[i - 1]);
				if (temp < n_sequence && temp != 0)
					checkflag[temp - 1] = 1;
			}

			temp = 1;
			for (int i = 0; i < n_sequence - 1; i++) {
				if (!checkflag[i])
					temp = 0;
			}

			if (temp == 1)
				printf("Jolly\n");
			else
				printf("Not jolly\n");
		}

		else
			printf("Jolly\n");
	}


	return 0;
}

