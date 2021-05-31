outfile=test_file
make:
	gcc -g function.c function.h test_function.c -o ${outfile}.o

clean:
	rm ${outfile}.o