#include <stdio.h>
#include <time.h>

#define DATASET_SIZE 50000
#define SEED_VALUE 42u

static int dataset[DATASET_SIZE];

/**
 * next_value - Generates a pseudo-random number based on a state pointer.
 * @state: Pointer to the current random seed state.
 *
 * Return: The newly calculated random state value.
 */
static unsigned int next_value(unsigned int *state)
{
	*state = (*state * 1103515245u) + 12345u;
	return (*state);
}

/**
 * build_dataset - Populates the static array with random values.
 *
 * Return: void.
 */
static void build_dataset(void)
{
	unsigned int state;
	int i;

	state = SEED_VALUE;

	for (i = 0; i < DATASET_SIZE; i++)
	{
		dataset[i] = (int)(next_value(&state) % 100000);
	}
}

/**
 * process_dataset - Alters each dataset element with arithmetic operations.
 *
 * Return: void.
 */
static void process_dataset(void)
{
	int i;
	int v;

	for (i = 0; i < DATASET_SIZE; i++)
	{
		v = dataset[i];
		v = (v * 3) + (v / 7) - (v % 11);
		if (v < 0)
		{
			v = -v;
		}
		dataset[i] = v;
	}
}

/**
 * reduce_checksum - Computes a unique rolling sum of the altered dataset.
 *
 * Return: The final calculated unsigned long checksum value.
 */
static unsigned long reduce_checksum(void)
{
	unsigned long sum;
	int i;

	sum = 0;
	for (i = 0; i < DATASET_SIZE; i++)
	{
		sum = (sum * 131ul) + (unsigned long)dataset[i];
	}

	return (sum);
}

/**
 * main - Coordinates dataset benchmarks and outputs step-by-step timings.
 *
 * Return: Always 0 (Success).
 */
int main(void)
{
	unsigned long checksum;
	clock_t total_start;
	clock_t total_end;
	clock_t step_start;
	clock_t step_end;
	double elapsed_total;
	double elapsed_build;
	double elapsed_process;
	double elapsed_reduce;

	total_start = clock();

	step_start = clock();
	build_dataset();
	step_end = clock();
	elapsed_build = (double)(step_end - step_start) / (double)CLOCKS_PER_SEC;

	step_start = clock();
	process_dataset();
	step_end = clock();
	elapsed_process = (double)(step_end - step_start) / (double)CLOCKS_PER_SEC;

	step_start = clock();
	checksum = reduce_checksum();
	step_end = clock();
	elapsed_reduce = (double)(step_end - step_start) / (double)CLOCKS_PER_SEC;

	total_end = clock();
	elapsed_total = (double)(total_end - total_start) / (double)CLOCKS_PER_SEC;

	if (checksum == 0ul)
	{
		printf("impossible\n");
	}

	printf("TOTAL seconds: %.6f\n", elapsed_total);
	printf("BUILD_DATA seconds: %.6f\n", elapsed_build);
	printf("PROCESS seconds: %.6f\n", elapsed_process);
	printf("REDUCE seconds: %.6f\n", elapsed_reduce);

	return (0);
}
