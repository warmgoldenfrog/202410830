#include <stdio.h>

int main(void)
{
	int traffic = -1, daily = -1, n = -1;
	double s_discount = 0, k_discount = 0; //신한 총 할인금액, 국민 총 할인금액
	double st_discount = 0, kt_discount = 0; //신한 교통 할인금액, 국민 교통 할인금액
	double sd_discount = 0, kd_discount = 0; //신한 생활서비스 할인금액, 국민 생활서비스 할인금액
	double s_rate = 0, k_rate = 0; //신한 할인률, 국민 할인률
	
	printf("*** 신한/국민 k-패스 체크카드 시뮬레이션 프로그램 *** \n \n");
	
	while (traffic <= 0) {
		printf("월평균 대중교통 요금: ");
		scanf("%d", &traffic);
		if (traffic <= 0)
			printf("0원 이상의 값으로 다시 입력하세요. \n");
	}
	while (daily <= 0) {
		printf("월평균 생활서비스 결제액: ");
		scanf("%d", &daily);
		if (daily <= 0)
			printf("0원 이상의 값으로 다시 입력하세요. \n");
	}
	while (n <= 0) {
		printf("월평균 기타 결제액: ");
		scanf("%d", &n);
		if (n <= 0)
			printf("0원 이상의 값으로 다시 입력하세요. \n");
	}

	double total = traffic + daily + n; //월평균 총합 -> 전월 실적 계산

	//대중교통요금
	if (total < 200000) {
		st_discount = 0,
		kt_discount = 0;
	}
	else if (total < 500000) {
		st_discount = traffic * 0.1;
		kt_discount = traffic * 0.1;
		if (st_discount > 2000)
			st_discount = 2000;
		if (kt_discount > 2000)
			kt_discount = 2000;
	}
	else {
		st_discount = traffic * 0.1;
		kt_discount = 2000;
		if (st_discount > 5000)
			st_discount = 5000;
	}

	//생활서비스
	if (total < 200000) {
		sd_discount = 0,
		kd_discount = 0;
	}
	else if (total < 500000) {
		sd_discount = daily * 0.02;
		kd_discount = daily * 0.02;
		if (sd_discount > 2000)
			sd_discount = 2000;
		if (kd_discount > 2000)
			kd_discount = 2000;
	}
	else {
		sd_discount = daily * 0.02;
		kd_discount = daily * 0.02;
		if (sd_discount > 5000)
			sd_discount = 5000;
		if (kd_discount > 8000)
			kd_discount = 8000;
	}

	s_discount = st_discount + sd_discount;
	k_discount = kt_discount + kd_discount;

	s_rate = s_discount / (total) * 100;
	k_rate = k_discount / (total) * 100;

	printf("\n");
	printf("신한 k-패스 체크카드의 예상 할인 금액은 %.0f원이며, 한인률은 %.2f%%입니다.\n", s_discount, s_rate);
	printf("국민 k-패스 체크카드의 예상 할인 금액은 %.0f원이며, 할인률은 %.2f%%입니다. \n", k_discount, k_rate);

	if (s_discount > k_discount)
		printf("따라서 신한 k-패스 체크카드가 나은 선택입니다.");
	else if (s_discount < k_discount)
		printf("따라서 국민 k-패스 체크카드가 나은 선택입니다.");
	else
		printf("따라서 어느 것을 선택하셔도 혜택이 동일합니다.");
	return 0;
}