#include <stdio.h>

void show_title (void);
void make_character(void);

int main(void)
{
	show_title();
	make_character();
}

void show_title(void)
{
	printf("���K�������t�C�[�m�ŏ��̎��\n\n");
}

void make_character()
{
	char name[10];
	char confirmation;
	
	printf("�L�����N�^�[�̖��O����͂��Ă�������:");
	scanf("%s", name);
	printf("�L�����N�^�[�̖��O��[%s]�ł悢�ł���? (Y/N)\n", name);
	scanf("%*c%c", &confirmation);
	if (confirmation == 'y') printf("�������܂����B���O���m�肵�܂�\n");
	
}