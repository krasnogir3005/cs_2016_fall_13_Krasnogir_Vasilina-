#include <stdio.h>
/* печать таблицы температур по Цельсию
и Фаренгейту для celsius = 0, 20, ..., 300 */

main()
{
 int fahr, celsius;
 int lower, upper, step;

 lower = 0; /* нижняя граница таблицы температур */
 upper = 300; /* верхняя граница */
 step = 20; /* шаг */

 celsius = lower;
 while (celsius <= upper) {
 fahr = 9 *celsius / 5 +32;
 printf("%d\t%d\n", celsius, fahr);
 celsius = celsius + step;
 }
}
