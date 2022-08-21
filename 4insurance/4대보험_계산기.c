#include <stdio.h>
#include <stdlib.h>
#include "insurance.h"

int main(void)
{
	long long	income, kook, gun, jang, go, all;
	
	printf("\n\t22년 4대보험 계산기\n");
	printf("\t22년 08월 기준입니다.\n\n");
	printf("\t국민연금-> 4.5%%\n\n");
	printf("\t건강보험-> 3.495%%\n\n");
	printf("\t장기요양보험 -> 12.27%%\n\n");
	printf("\t고용보험 -> 0.9%%\n\n");

	printf("\n\t 월급을 입력하세요.\n\n");
	scanf("%llu", &income);

	system("clear");

	kook = kook_output(income);
	gun = gun_output(income);
	jang = jang_output(income);
	go = go_output(income);
	all = all_output(income);

	printf("\n\t국민연금 -> %s원\n", jun_make_str(kook));
	printf("\t건강보험 -> %s원\n", jun_make_str(gun));
	printf("\t장기요양보험 -> %s원\n", jun_make_str(jang));
	printf("\t고용보험 -> %s원\n", jun_make_str(go));
	printf("\n\t !!!! 소수점은 제외합니다 !!!!\n");
	printf("\n총 보험료 : %s원\n\n", jun_make_str(all));
	
    return (0);
}
