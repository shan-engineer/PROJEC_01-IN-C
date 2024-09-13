#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void Add_note(){
    char days_input[200];
    FILE *days;
    days = fopen("days_note.txt","a");

     if (days == NULL) {
        printf("Error opening file!\n");
        return;
    }

    printf("How was your day your days \n");
    fgets(days_input,sizeof(days_input),stdin);
    fprintf(days,"%s\n",days_input);
    fclose(days);
    }

    void access_notes() {
    char note;
    FILE *days;

    days = fopen("days_note.txt", "r");
    if (days == NULL) {
        printf("Error opening file! No notes found.\n");
        return;
    }

    printf("Your past notes:\n\n");
    while ((note = fgetc(days)) != EOF) {
        putchar(note);
    }
    printf("\n");
    fclose(days);
}

void data_entry(){
    typedef struct
    {
      char name[30];
      int student_id;
      char course[10];
      int age;  
    }data;

   FILE *datas;
   datas = fopen("Data_entry.txt","a");
   if (datas == NULL) {
        printf("Error opening file!\n");
        return;
    }

   data s1;
    printf("Enter Student ID: ");
    scanf("%d", &s1.student_id);
    getchar(); 

   printf("Enter Name: ");
    fgets(s1.name, sizeof(s1.name), stdin);

   printf("Enter Course: ");
    fgets(s1.course, sizeof(s1.course), stdin);

   printf("Enter Age: ");
    scanf("%d", &s1.age);
    getchar();


    fprintf(datas, "------------------------------------\n");
    fprintf(datas, "|            Student Data          |\n");
    fprintf(datas, "------------------------------------\n");
    fprintf(datas, "Student ID: %d\n", s1.student_id);
    fprintf(datas, "Name: %s", s1.name);
    fprintf(datas, "Course: %s", s1.course);
    fprintf(datas, "Age: %d\n", s1.age);
    fprintf(datas, "------------------------------------\n\n\n");

   fclose(datas);
}
   void search_student_by_id() {
    int roll_no;
    char buffer[255];
    int found = 0;

    printf("Enter Student ID to search: ");
    scanf("%d", &roll_no);
    getchar();

    FILE *datas;
    datas = fopen("Data_entry.txt", "r");
    if (datas == NULL) {
        printf("Error opening file! No data found.\n");
        return;
    }

    printf("Searching for Student ID: %d...\n", roll_no);

    while (fgets(buffer, sizeof(buffer), datas) != NULL) {
        if (strstr(buffer, "Student ID:") != NULL) {
            int current_id;
            sscanf(buffer, "Student ID: %d", &current_id); 

            if (current_id == roll_no) {
                found = 1;
                printf("\n--- Student Found ---\n");
                printf("%s", buffer);

                for (int i = 0; i < 3; i++) {
                    fgets(buffer, sizeof(buffer), datas);
                    printf("%s", buffer);
                }
                printf("----------------------\n");
                break;
            }
        }
    }

    if (!found) {
        printf("Student with ID %d not found.\n", roll_no);
    }

    fclose(datas);
}
   void print_data(){
   char pd;
    FILE *datas;

    datas = fopen("Data_entry.txt", "r");
    if (datas == NULL) {
        printf("Error opening file! No notes found.\n");
        return;
    }

    printf("Your data :\n\n");
    while ((pd = fgetc(datas)) != EOF)
    {   
        putchar(pd);
    }
    printf("\n");
    fclose(datas); 

   }

   void random_number_game(){
      int guess_no;
      int guessed;
      int no_guess = 0;
      srand(time(0));
      guessed = (rand()%(100+1));

      do{
          printf("Guess your number\n");
          scanf("%d",&guess_no);
          printf("\n");
          no_guess++;

          if(guess_no > guessed){
            printf("Lower Number please \n");
          }
          else if (guess_no < guessed){
            printf("Higher Number please \n");
          }
          else if(guess_no==guessed){
            printf("\n");
            printf("Congrat's!\n");
            printf("You guessed the number %d\n",guessed);
            printf("You guessed number in %d attemts\n\n",no_guess);
          }

      }while(guess_no != guessed);

   }

int main () {
    int starting;
    int keep_running = 1;
    
    while(keep_running){
    printf("Choose the number 1 between 6 \n");
    printf("1. Add a note\n");
    printf("2. Access your past notes\n");
    printf("3. Enter student data\n");
    printf("4. View student data\n");
    printf("5. Search student by roll number\n");
    printf("6. Number guessing game \n");
    printf("7. Exit the program\n");
    scanf("%d",&starting);
     getchar();

    switch (starting)
    {
        case 1:
          Add_note();
        break;

        case 2:
         access_notes();
          break;

        case 3:
          data_entry();
          break;

        case 4:
          print_data();
          break;

        case 5:
          search_student_by_id();
          break;

        case 6:
           random_number_game();
         break;

        case 7:
          printf("Exinting programm succesfully\n");
          keep_running = 0;
          break;

          default:
           printf("Something went wrong!\n");
           break;
    }}

    return 0;
    
}
