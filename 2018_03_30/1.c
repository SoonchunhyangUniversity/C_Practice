#include <stdio.h>

int main()
{
	int kor, eng, mat, sum;
	double avg;

	printf("국어점수 : ");
	scanf("%d", &kor);
	printf("영어점수 : ");
	scanf("%d", &eng);
	printf("수학점수 : ");
	scanf("%d", &mat);

	sum = kor + eng + mat;
	avg = (double)sum / 3;
	printf("총점 : %d, 평균 : %lf, 등급 : %c\n", sum, avg, (avg >= 90 && avg <= 100) ? 'A' : (avg >= 80 && avg < 90 ) ? 'B' : (avg >= 70 && avg < 80) ? 'C' : 'F');

	return 0;
}
