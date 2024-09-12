Student Data Management & Utility Program
This C program allows users to manage student data, maintain personal notes, and play a random number guessing game. It includes various functionalities like adding notes, viewing student data, searching by student ID, and playing a game. The data is stored in text files for easy access and persistence.

Features
Add a Note: Users can add daily notes which are stored in a text file.
View Past Notes: Retrieve and view previously saved notes.
Student Data Entry: Add student data (ID, name, course, age) and store it in a structured format.
View All Student Data: Display all student records stored in the file.
Search Student by ID: Search for a student record by entering the student ID.
Random Number Game: A simple guessing game where the user guesses a randomly generated number.
How to Use
Add a Note:

Select option 1 from the menu.
Enter your note when prompted.
The note is saved to days_note.txt.
View Past Notes:

Select option 2 from the menu.
All saved notes from days_note.txt will be displayed.
Enter Student Data:

Select option 3 from the menu.
Enter the student ID, name, course, and age when prompted.
The data is saved to Data_entry.txt.
View All Student Data:

Select option 4 to view all stored student records from Data_entry.txt.
Search for Student by ID:

Select option 5 and enter the student ID to search for.
The program will display the corresponding record if found.
Random Number Game:

Select option 6 to play the number guessing game.
The program will generate a random number between 0 and 100, and you have to guess it.
Exit the Program:

Select option 7 to exit the program.
File Structure
days_note.txt: Stores daily notes.
Data_entry.txt: Stores student records in a structured format.
Sample Run
markdown
Copy code
Choose the number 1 between 6 
1. Add a note
2. Access your past notes
3. Enter student data
4. View student data
5. Search student by roll number
6. Game zone
7. Exit the program
Requirements
A C compiler (e.g., GCC).
Standard C libraries: stdio.h, stdlib.h, and time.h.
Compilation
Use the following command to compile the program:

bash
Copy code
gcc -o student_data_program program.c
Run the compiled program:

bash
Copy code
./student_data_program
Author
Shan Mohd

