#include <stdio.h>
#include <ctype.h>
#include <locale.h>

#define M 100

int main() {
    setlocale(LC_CTYPE, "ukr"); // ������������ ��������� ����������
    char str[M];

    printf("����i�� ����� ������: ");
    fgets(str, sizeof(str), stdin); //�������� �����
    printf("\n");
    int count = 0; // �������� ����
    // ϳ�������� �� ����� 
    for (int i = 0; str[i] != '\0'; i++) {
        if (isdigit(str[i])) { // ���� �������� ������ � ������
            str[i] = '�'; // ����� �� ������ '�'
            count++; // ��������� ���������
        }
    }
    if (count) { //�������� �� �������� ������� �����
        printf("��i����� �����: %s\n", str);
        printf("�i���i��� ����: %d\n", count);
    }
    else printf("���������� ������� �����");

    return 0;
}
