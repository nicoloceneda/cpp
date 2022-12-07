# run makefile with: make all

all:                                                                            # Compile
	c++ functions_header.cpp -o functions_header
	./functions_header
clean: 																			# Remove the executable
	rm functions_header