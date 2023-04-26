#include<stdio.h>
#define N 3
struct xinxi {
	char name[15];
	int score[7];
	float sum;
}Stu[N];

int pailie(int score[]) {
	int i,j,box;
	for (i = 0; i < 7; i++) {
		for (j = 0; j < 6; j++) {
			if (score[i] > score[i + 1]) {
				box = score[i];
				score[i] = score[i + 1];
				score[i + 1] = box;
			}
		}
	}
}
float bijiao1(float a1,float a2) {
	if (a1 > a2)
		return a1;
	else
		return a2;
}
float bijiao1(float a1, float a2) {
	if (a1 > a2)
		return a1;
	else
		return a2;
}
void main() {
	register int i, j, n;
	int sum = 0, box;
	float box1[N];
	for (i = 0; i < N; i++) {
		printf("请输入第%d个选手的姓名：", i + 1);
		scanf_s("%s", Stu[i].name,15);
		printf("\n");
		printf("请输入%s的7个评分：", Stu[i].name);
		for (j = 0; j < 7; j++) 
			scanf_s("%d", &Stu[i].score[j]);
		pailie(Stu[i].score);
		printf("第%d位同学的最高分%d：", i + 1, Stu[i].score[6]);
		printf("第%d位同学的最低分%d：", i + 1, Stu[i].score[0]);
		for (j = 0; j < 7; j++) {
			sum += Stu[i].score[j];
		}
		Stu[i].sum = (sum - Stu[i].score[0] - Stu[i].score[6]) * 1.0 / 7.0;
		printf("该同学的平均分为：%.2f", Stu[i].sum);
		box1[i] = Stu[i].sum;
	}
		
}