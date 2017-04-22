main:main.o MergeSort.o GreedyKnapsack.o
		gcc main.o MergeSort.o GreedyKnapsack.o -o main
main.o:main.c
		gcc -c main.c
MergeSort.o:MergeSort.c
		gcc -c MergeSort.c
GreedyKnapsack.o:GreedyKnapsack.c
		gcc -c GreedyKnapsack.c
clean:
		rm main *.o
