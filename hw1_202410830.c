#include <stdio.h>

int main(void)
{
	int traffic = -1, daily = -1, n = -1;
	double s_discount = 0, k_discount = 0; //���� �� ���αݾ�, ���� �� ���αݾ�
	double st_discount = 0, kt_discount = 0; //���� ���� ���αݾ�, ���� ���� ���αݾ�
	double sd_discount = 0, kd_discount = 0; //���� ��Ȱ���� ���αݾ�, ���� ��Ȱ���� ���αݾ�
	double s_rate = 0, k_rate = 0; //���� ���η�, ���� ���η�
	
	printf("*** ����/���� k-�н� üũī�� �ùķ��̼� ���α׷� *** \n \n");
	
	while (traffic <= 0) {
		printf("����� ���߱��� ���: ");
		scanf("%d", &traffic);
		if (traffic <= 0)
			printf("0�� �̻��� ������ �ٽ� �Է��ϼ���. \n");
	}
	while (daily <= 0) {
		printf("����� ��Ȱ���� ������: ");
		scanf("%d", &daily);
		if (daily <= 0)
			printf("0�� �̻��� ������ �ٽ� �Է��ϼ���. \n");
	}
	while (n <= 0) {
		printf("����� ��Ÿ ������: ");
		scanf("%d", &n);
		if (n <= 0)
			printf("0�� �̻��� ������ �ٽ� �Է��ϼ���. \n");
	}

	double total = traffic + daily + n; //����� ���� -> ���� ���� ���

	//���߱�����
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

	//��Ȱ����
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
	printf("���� k-�н� üũī���� ���� ���� �ݾ��� %.0f���̸�, ���η��� %.2f%%�Դϴ�.\n", s_discount, s_rate);
	printf("���� k-�н� üũī���� ���� ���� �ݾ��� %.0f���̸�, ���η��� %.2f%%�Դϴ�. \n", k_discount, k_rate);

	if (s_discount > k_discount)
		printf("���� ���� k-�н� üũī�尡 ���� �����Դϴ�.");
	else if (s_discount < k_discount)
		printf("���� ���� k-�н� üũī�尡 ���� �����Դϴ�.");
	else
		printf("���� ��� ���� �����ϼŵ� ������ �����մϴ�.");
	return 0;
}