*This project has been created as part of the 42 curriculum by pdos-san*

# Description

The get next line project is a fundamental programming exercise from 42 that focuses on file descriptors, static variables, memory management, and reading data from files in C. The main objective is to implement a function that reads and returns one line at a time from a file descriptor.

This project helps develop a deeper understanding of how low-level file I/O works in C, especially the use of the read system call and dynamic memory allocation.

## Instructions

To complete the get next line project, the following steps and concepts were applied:
	1.	Function Implementation
	•	Implement the function get_next_line(int fd).
	•	The function returns one line per call from the given file descriptor.
	2.	Static Variable Usage
	•	Use a static variable to store leftover data between function calls.
	•	This ensures continuity when reading the file line by line.
	3.	Buffer Management
	•	Read data using a buffer of size BUFFER_SIZE.
	•	Concatenate the buffer content to a temporary storage until a full line is found.
	4.	Line Extraction
	•	Extract the line up to and including the newline character (\n).
	•	Return the line as a newly allocated string.
	5.	Memory Management
	•	Allocate and free memory properly to avoid memory leaks.
	•	Handle edge cases such as end-of-file and read errors.
	6.	Error Handling
	•	Manage invalid file descriptors.
	•	Handle read errors and empty files correctly.
	7.	Bonus (Optional)
	•	Support multiple file descriptors simultaneously.
	•	Use separate static storage for each file descriptor.

## Resources

The following resources were used to understand and complete this project:
- 42 Intranet get next line Subject
- Linux man pages (man read, man open, man close)
- GNU C Library Documentation
- Online documentation about static variables in C
