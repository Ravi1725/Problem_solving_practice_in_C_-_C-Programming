#include<stdio.h>
#include<stdlib.h>

struct report{
	char student_name[20];
	int class;
	char section[10];
	int maths,english,hindi,science,social_science;
	int total;
};  
        	
int main()
{
	struct report report_card;
	char grade;
	
	printf("Enter the name of the student\n");
	scanf("%s",&report_card.student_name);
	printf("Enter the class of the student\n");
	scanf("%d",&report_card.class);
	printf("Enter the section of the student\n");
	scanf("%s",&report_card.section);
	printf("Enter the marks of the mathematics\n");
	scanf("%d",&report_card.maths);
	printf("Enter the marks of the english\n");
	scanf("%d",&report_card.english);
	printf("Enter the marks of the hindi\n");
	scanf("%d",&report_card.hindi);
	printf("Enter the marks of the science\n");
	scanf("%d",&report_card.science);
	printf("Enter the marks of the social science\n");
	scanf("%d",&report_card.social_science);
	report_card.total=report_card.maths+report_card.english+report_card.hindi+report_card.science+report_card.social_science;
	printf("%d",report_card.total);

	if(report_card.total<200)
		grade='F';
	else if(report_card.total<300 && report_card.total>=200)
		grade='E';
	else if(report_card.total<350 && report_card.total>=300)
		grade='D';
	else if(report_card.total<400 && report_card.total>=350)
		grade='C';
	else if(report_card.total<450 && report_card.total>=400)
		grade='B';
	else if(report_card.total<=500 && report_card.total>=450)
		grade='A';

	printf("	Jawahar Navodaya Vidyalaya\n");
	printf("		Annual Report Card\n\n");
	printf("Name: %s\n",report_card.student_name);
	printf("Standard: %d\n",report_card.class);
	printf("Section: %s\n\n",report_card.section);
	printf("Marks Secured out of 100\n");
	printf("Mathematics: %d\n",report_card.maths);
	printf("english: %d\n",report_card.english);
	printf("hindi: %d\n",report_card.hindi);
	printf("science: %d\n",report_card.science);
	printf("Social science: %d\n\n\n",report_card.social_science);
	printf("Total Marks secured: %d\n",report_card.total);
	printf("%c\n",grade);
	

	return 0;
}