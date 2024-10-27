#include <stdio.h>
typedef struct{
	int st_num;
	double hei;
	double wei;
}Student;

int main() {
	int n;
	scanf("%d", &n);
	Student s = malloc(sizeof(Student)*n);
	int i;
	for(i=0; i<n; i++){
		scanf("%d %lf %lf\n", &s[i].st_num, &s[i].hei, &s[i].wei);
	}


	int aver_hei=0, aver_wei=0;
	for(int j=0;j<n;j++){
		aver_hei = (aver_hei[i]+aver_hei[j+1]/n);
		aver_wei = (aver_wei[i]+aver_wei[j+1]/n);
	}
	printf("%lf %lf\n", aver_hei, aver_wei);

	for(int j=0;j<n;j++){
		printf("%d ", s[j].st_num);
		if(s[j].hei>=aver_hei && s[j].wei>=aver_wei)	printf("super");
		else if(s[j].hei>=aver_hei || s[j].wei>=aver_wei)	printf("average");
		else
			printf("below");
	}
	return 0;
}
