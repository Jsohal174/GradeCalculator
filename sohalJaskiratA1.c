/*********************************************************
Compiling the program
The program should be compiled using the following flags: -std=c99 -Wall
compiling:
gcc -std=c99 -Wall sohalJaskiratA1.c
Running: ./a.out
OR
gcc -std=c99 -Wall sohalJaskiratA1.c -o a1
Running the Program: ./a1
*********************************************************/


#include<stdio.h>
int main(){
    float l1,l2,l3,l4,l5,totalLabMarks;//variables assigned for lab marks
    float a1,a2,a3,totalAssignmentMarks;//variables assigned for assignment marks
    int moss1,moss2,moss3;//variables assigned for moss result
    float q1,q2,q3,q4,totalQuizMarks;//variables assigned for quiz marks
    float labExam,totalLabExamMarks ;//variables assigned for lab exam marks
    char response;//variable to input y or n for transfer of weightage of lab exam marks
    float finalexam;//variable assigned for final exam marks
    float quizAndFinal;//variable for sum of quiz and final marks
    float overallCourseGrade1,overallCourseGrade2;//variable assigned for overall course
    int count;//variable for student count
    char condition;//variable to input y or n to take next student marks input
    float average;//variable for average
    float sum;//for sum of marks of students

    printf("Welcome to ALT1300 admin page\n");
    condition = 'y';
    count = 1;
    while(condition =='y'){//condition is true
        printf("Student %d:\n",count);
        printf("Enter 5 lab marks, each separated by a space:");
        scanf("%f %f %f %f %f",&l1,&l2,&l3,&l4,&l5);
        totalLabMarks= 0.04*(l1+l2+l3+l4+l5);
        printf("Overall lab grade(20) = %.2f / 20\n",totalLabMarks);

        printf("Enter 3 assignment marks each separated by a space:");
        scanf("%f %f %f",&a1,&a2,&a3);
        printf("Enter MOSS result for A1:");
        scanf("%d",&moss1);
        printf("Enter MOSS result for A2:");
        scanf("%d",&moss2);
        printf("Enter MOSS result for A3:");
        scanf("%d",&moss3);
        totalAssignmentMarks= ((moss1*a1)*0.05)+((moss2*a2)*0.07)+((moss3*a3)*0.08);
        printf("Overall assignment grade (20) = %.2f/20\n",totalAssignmentMarks);

        printf("Enter 4 quiz marks, each separated by a space:");
        scanf("%f %f %f %f", &q1,&q2,&q3,&q4);
        totalQuizMarks= 0.05*(q1+q2+q3+q4);
        printf("Overall quiz grade (20) = %.2f / 20\n",totalQuizMarks);

        printf("Enter Lab Exam marks:");
        scanf("%f",&labExam);
        totalLabExamMarks= 0.1*labExam;


        printf("Would you like to transfer weight of lab exam to final exam ?\n");
        printf("Enter survey response ('y' or 'n'):\n");
        scanf("%s",&response);

        if(response == 'y'){//if yes then lab exam marks are not included

            printf("Your lab exam is worth 0, and final exam is worth 40\n");
            printf("Enter Final Exam marks:");
            scanf("%f",&finalexam);
            quizAndFinal= totalQuizMarks + 0.3*finalexam;
            printf("Overall final exam grade (40) = %.2f / 40\n", 0.4*finalexam);
            printf("Overall course marks:\n");
            printf("***************************\n");//format to dislay results as per assignment instructions
            printf("Labs = %.2f\n",totalLabMarks);
            printf("Assignments = %.2f\n", totalAssignmentMarks);
            printf("Quizzes = %.2f\n",totalQuizMarks);
            printf("Final Exam = %.2f\n",0.4*finalexam);
            printf("***************************\n");
            overallCourseGrade1=totalAssignmentMarks+(0.4*finalexam)+totalLabMarks+totalQuizMarks;
            sum=sum+overallCourseGrade1;//overall marks added to variable sum
        
            if(quizAndFinal<25){//condtion for marks less than 25
                printf("Overall grade = F\n");
            }
            else if(moss1==0 && moss2==0 && moss3==0){//condition for moss results 0 in all assignments
                printf("Overall grade = F\n");
                printf("Your Overall course marks = 0\n");
                overallCourseGrade1=0;
                


            }
            else if(moss1==1 ||moss2==1 ||moss3==1){//condition for moss result 1 in at least 1 assignment

                printf("Your Overall course marks = %.2f \n", overallCourseGrade1);
                if(0<=overallCourseGrade1 && overallCourseGrade1<=49){
                    printf("Overall grade = F\n");
                }
                else if(50<=overallCourseGrade1 && overallCourseGrade1<=52){
                    printf("Overall grade = D-\n");
                }
                else if(53<=overallCourseGrade1 && overallCourseGrade1<=56){
                    printf("Overall grade = D\n");
                }
                else if(57<=overallCourseGrade1 && overallCourseGrade1<=59){
                    printf("Overall grade = D+\n");
                }
                else if(60<=overallCourseGrade1 && overallCourseGrade1<=62){
                    printf("Overall grade = C-\n");
                }
                else if(63<=overallCourseGrade1 && overallCourseGrade1<=66){
                    printf("Overall grade = C\n");
                }
                else if(67<=overallCourseGrade1 && overallCourseGrade1<=69){
                    printf("Overall grade = C+\n");
                }
                else if(70<=overallCourseGrade1 && overallCourseGrade1<=72){
                    printf("Overall grade = B-\n");
                }
                else if(73<=overallCourseGrade1 && overallCourseGrade1<=76){
                    printf("Overall grade = B\n");
                }
                else if(77<=overallCourseGrade1 && overallCourseGrade1<=79){
                    printf("Overall grade = B+\n");
                }
                else if(80<=overallCourseGrade1 && overallCourseGrade1<=84){
                    printf("Overall grade = A-\n");
                }
                else if(85<=overallCourseGrade1 && overallCourseGrade1<=89){
                    printf("Overall grade = A\n");
                }
                else if(90<=overallCourseGrade1 && overallCourseGrade1<=100){
                    printf("Overall grade = A+\n");
                }
            }



        }
        else if(response == 'n'){
            printf("Enter Final Exam marks:");
            scanf("%f",&finalexam);
            quizAndFinal= totalQuizMarks + 0.3*finalexam;
            printf("Overall final exam grade (30) = %.2f / 30\n",0.3*finalexam);
            printf("Overall course marks:\n");
            printf("***************************\n");
            printf("Labs = %.2f\n",totalLabMarks);
            printf("Assignments = %.2f\n", totalAssignmentMarks);
            printf("Quizzes = %.2f\n",totalQuizMarks);
            printf("Lab Exam = %.2f\n",totalLabExamMarks);
            printf("Final Exam = %.2f\n",0.3*finalexam);
            printf("***************************\n");
            overallCourseGrade2=totalAssignmentMarks+0.3*finalexam+totalLabMarks+totalQuizMarks+totalLabExamMarks;
            sum=sum+overallCourseGrade2;
            if(quizAndFinal<25){
                printf("Overall grade = F\n");
                printf("Overall course marks = %.2f\n",overallCourseGrade2);
            }
            else if(moss1==0 && moss2==0 && moss3==0){
                printf("Overall grade = F\n");
                printf("Your Overall course marks = 0\n");
                
            }
            else if(moss1==1||moss2==1||moss3==1){
                printf("Your Overall course marks = %.2f \n", overallCourseGrade2);
                if(0<=overallCourseGrade2 && overallCourseGrade2<=49){
                    printf("Overall grade = F\n");
                }
                else if(50<=overallCourseGrade2 && overallCourseGrade2<=52){
                    printf("Overall grade = D-\n");
                }
                else if(53<=overallCourseGrade2 && overallCourseGrade2<=56){
                    printf("Overall grade = D\n");
                }
                else if(57<=overallCourseGrade2 && overallCourseGrade2<=59){
                    printf("Overall grade = D+\n");
                }
                else if(60<=overallCourseGrade2 && overallCourseGrade2<=62){
                    printf("Overall grade = C-\n");
                }
                else if(63<=overallCourseGrade2 && overallCourseGrade2<=66){
                    printf("Overall grade = C\n");
                }
                else if(67<=overallCourseGrade2 && overallCourseGrade2<=69){
                    printf("Overall grade = C+\n");
                }
                else if(70<=overallCourseGrade2 && overallCourseGrade2<=72){
                    printf("Overall grade = B-\n");
                }
                else if(73<=overallCourseGrade2 && overallCourseGrade2<=76){
                    printf("Overall grade = B\n");
                }
                else if(77<=overallCourseGrade2 && overallCourseGrade2<=79){
                    printf("Overall grade = B+\n");
                }
                else if(80<=overallCourseGrade2 && overallCourseGrade2<=84){
                    printf("Overall grade = A-\n");
                }
                else if(85<=overallCourseGrade2 && overallCourseGrade2<=89){
                    printf("Overall grade = A\n");
                }
                else if(90<=overallCourseGrade2 && overallCourseGrade2<=100){
                    printf("Overall grade = A+\n");
                }
            }
       
        


        }
      
        printf("Would you like to continue ?\nEnter y for yes and enter n for no:");//if response y then loop repeats
        scanf("%s",&condition); 
        average=(sum/count);//to store average marks
        printf("Average = %f\n ", average);
        count++;//student count increases
                
        
        


        
    }
    
    return 0;
}
