Green Efficiency Analysis Report

## Measurement Methodology
To understand how different code structures affect performance, I conducted three distinct experiments. For each test, I ran the provided C programs multiple times to gather consistent data. I used the `clock()` function from the standard `time.h` library to measure the CPU time in seconds for each specific task. By running every test three times, I was able to calculate an average, which helped smooth out any minor differences caused by background processes running on the system. All compilations were performed using strict flags (`-Wall -Wextra -Werror -pedantic -O3`) to ensure the code was optimized and followed standard p
ractices.

## Observed Performance Differences
My tests revealed a huge gap in efficiency between different approaches.

- **Baseline Loop:** I ran a simple loop 100,000,000 times, which took an average of **0.226897 seconds**.
- **Naive Algorithm vs. Single-pass:** The Naive algorithm, which used nested loops to check for even numbers, had an average runtime of **0.209288 seconds**. In contrast, the Single-pass algorithm, which only checked each number once, finished in just **0.00000967 seconds**.
- **Instrumentation Lab:** Breaking down the process into phases showed that `BUILD_DATA` took an average of **0.000301s**, `PROCESS` took **0.000339s**, and `REDUCE` took **0.000135s**, resulting in a total average runtime of **0.000782s**.

The most shocking finding was the comparison between the Naive and Single-pass algorithms. The Naive version was roughly **21,643 times slower** than the Single-pass version. This clearly demonstrates that the way you write a loop fundamentally changes how fast the computer can finish the task.

## Relation Between Runtime and Energy Consumption
While I didn't directly measure the electricity usage, there is a clear link between runtime and energy consumption. Computers consume energy while the processor is actively working. Since the Naive algorithm takes much longer to complete the same task, the processor has to work for a significantly longer period. Consequently, the "slower" code consumes much more energy than the "faster" code. In a large-scale data center, running $O(n^2)$ algorithms instead of $O(n)$ could mean wasting massive amounts of electricity, which is both expensive and bad for the environment.

## Limitations of the Experiment
There are a few limitations to my findings. First, the experiments were run on a single machine, so the results might be different on hardware with different processor speeds or memory architectures. Second, using the `clock()` function is great for measuring CPU time, but it doesn't capture everything, such as the energy consumed by memory access or other background tasks. Finally, the dataset sizes were fixed, so while I can see how these specific algorithms perform, I haven't tested how they behave with millions or billions of data points.

## Practical Engineering Takeaway
The biggest takeaway for me is that algorithmic efficiency matters far more than I realized. When writing code, it is tempting to just use the easiest solution (the "naive" approach), but nested loops are a massive performance killer. As a future engineer, I now understand that choosing the right approach~@~Tlike opting for a single-pass loop~@~Tis not just about writing "cleaner" code; it~@~Ys a critical design decc
ision that directly impacts performance, power consumption, and overall efficiency. Moving forward, I will always analyze the complexity of my loops to avoid wasting resources.

