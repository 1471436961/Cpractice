/*************************************************************************
	> File Name: hzoj.113-2.c
	> Author: 
	> Mail: 
	> Created Time: Sat 11 Feb 2023 09:00:52 PM CST
 ************************************************************************/
#include <stdio.h>
int days[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
int main() {
    int y, m;
    scanf("%d%d", &y, &m);
    printf("%d\n", days[m] + (m == 2 && (y % 400 == 0|| (y % 4 == 0 && y % 100))));
    return 0;
}
