#include <stdio.h>

int main(void)
{
	char name[10];
	char confirmation;
	
	printf("���K�������t�C�[�m�ŏ��̎��\n\n");
	printf("�L�����N�^�[�̖��O����͂��Ă�������:");
	scanf("%s", name);
	printf("�L�����N�^�[�̖��O��[%s]�ł悢�ł���? (Y/N)\n", name);
	scanf("%*c%c", &confirmation);
	if (confirmation == 'y') printf("�������܂����B���O���m�肵�܂�\n");
	
}