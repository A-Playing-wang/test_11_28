#include"stdio.h"

void main()

{
	struct student {
		char name[16], gender;
		int age, rank;
		float aver_score;
		
	};
	//char *name[16], *gender;
	//int *age, *rank;
	//float *aver_score;
	//scanf("%s%c%d%d%f", &name, &gender, &age, &rank, &aver_score);
    //struct student student1 = { name,gender,age,rank,aver_score };
	struct student student1 = { "xiaomin", 'm', 9, 1, 98.5 };
	printf("name=\"%s\",gender=\'%c\',age=%d,rank=%d,aver_score=%f\n" ,
		student1.name, student1.gender, student1.age, student1.rank, student1.aver_score);

}
