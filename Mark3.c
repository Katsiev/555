/// Решение на оценку "3". Принимаем, что все выплаты по одному студенту во входном потоке идут подряд
#include <stdio.h>
int main() {
    int i, n; // счетчик и количество студентов
    int j, m; // счтетчик и количество выплат одному студенту
    int kod; // код студента
    int x, sum, vsego; // выплата, итого студенту, всего
    char fio[20]; // ФИО студента

    vsego = 0;
    printf("Ведомость на выплаты студентам");
    printf("Число студентов: ");
    scanf("%d", &n);
    i = 1;

    while (i <= n) {
        printf("Код ФИО Количество выплат:");
        scanf("%d", &kod);
        scanf("%s", fio);
        scanf("%d", &m);
        sum = 0;
        j = 1;
        while (j <= m) {
            printf("Выплата: ");
            scanf("%d", &x);
            sum = sum + x;
            j = j + 1;
        }
        printf("%d. %d %s %d\n", i, kod, fio, sum);
        vsego = vsego + sum;
        i = i + 1;
    }
    printf("Всего: %d\n", vsego);
    return 0;
}
