#include<stdio.h>
#include<string.h>
struct subject{
	int marks;
	float sgpa;
	char credit[3];
};
void calculateSGPA(struct subject * sub){
	if(sub->marks>90 && sub->marks<=100){
		sub->sgpa=10;
	strcpy(sub->credit,"O");
	}
	else if(sub->marks>80 && sub->marks<=90){
		sub->sgpa=9;
		strcpy(sub->credit,"A+");
	}
	else if(sub->marks>70 && sub->marks<=80){
		sub->sgpa=8;
		strcpy(sub->credit,"A");
	}
	else if(sub->marks>60 && sub->marks<=70){
		sub->sgpa=7;
		strcpy(sub->credit,"B+");
	}
	else if(sub->marks>50 && sub->marks<=60){
		sub->sgpa=6;
		strcpy(sub->credit,"B");
	}
	else if(sub->marks>40 && sub->marks<=50){
		sub->sgpa=5;
		strcpy(sub->credit,"C+");
	}
	else if(sub->marks>30 && sub->marks<=40){
		sub->sgpa=4;
		strcpy(sub->credit,"C");
	}
	else {
		sub->sgpa=3;
		strcpy(sub->credit,"F");
	}
}
int main (){
	struct subject subjects[5];
	int i;
	float totalmarks =0.0,averageMarks;
	for(int i=0;i<5;i++){
		printf("Enter marks for subject %d:",i+1);
		scanf("%d",&subject'[i]' . marks);
		calculateSGPA(&subject[i]);
		totalmarks+=subjects[i].marks;
	}
	averagemarks=totalmarks/5;
	printf("\n subject-wise SGPA and credits:\n");
	for(int i=0;i<5;i++){
		printf("subject %d-Marks:%d ,SGPA:%1f,credit:%s\n",i+1,subject[i].marks,subject[i].sgpa,subject[i].credit);
		
	}
	struct subject final;
	final.marks=(int)averageMarks;
	calculateSGPA(&final);
	printf("\nFinal credit based on Average Marks:%2f\n",averageMarks);
	printf("Final SGPA:%1f,credit:%s\n",final.sgpa,final.credit);
	return 0;
}

